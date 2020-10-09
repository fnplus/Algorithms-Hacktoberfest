// { edges:

//    [ { e: '1', v: 0, distance: 4 },

//      { e: '2', v: 8, distance: 2 },

//      { e: '3', v: 2, distance: 7 },

//      { e: '4', v: 3, distance: 9 },

//      { e: '5', v: 2, distance: 4 },

//      { e: '6', v: 5, distance: 2 },

//      { e: '7', v: 0, distance: 8 },

//      { e: '8', v: 7, distance: 7 } ],

//   nodesCount: 0 }

(function (exports) {

  'use strict';

  var Heap = require('../../data-structures/heap').Heap;

  exports.Vertex = require('../../data-structures/vertex').Vertex;

  exports.Edge = require('../../data-structures/edge').Edge;

  exports.Graph = function (edges, nodesCount) {

    this.edges = edges || [];

    this.nodesCount = nodesCount || 0;

  };

  exports.Graph.prototype.prim = (function () {

    var queue;

    function edges(a, b) {

      return b.distance - a.distance;

    }


    function init() {

      queue = new Heap(compareEdges);

    }

    return function () {

      init.call(this);

      var inTheTree = {};

      var startVertex = this.edges[0].e.id;

      var spannigTree = [];

      var parents = {};

      var distances = {};

      var current;

      inTheTree[startVertex] = true;

      queue.add({

        node: startVertex,

        distance: 0

      });

      const process = function (e) {

        if (inTheTree[e.v.id] && inTheTree[e.e.id]) {

          return;

        }

        var collection = queue.getCollection();

        var node;

        if (e.e.id === current) {

          node = e.v.id;

        } else if (e.v.id === current) {

          node = e.e.id;

        } else {

          return;

        }

        for (var i = 0; i < collection.length; i += 1) {

          if (collection[i].node === node) {

            if (collection[i].distance > e.distance) {

              queue.changeKey(i, {

                node: node,

                distance: e.distance

              });

              parents[node] = current;

              distances[node] = e.distance;

            }

            return;

          }

        }

        queue.add({

          node: node,

          distance: e.distance

        });

        parents[node] = current;

        distances[node] = e.distance;

      };

      for (var i = 0; i < this.nodesCount - 1; i += 1) {

        current = queue.extract().node;

        inTheTree[current] = true;

        this.edges.forEach(process);

      }

      for (var node in parents) {

        spannigTree.push(

          new exports.Edge(node, parents[node], distances[node]));

      }

      return new exports.Graph(spannigTree);

    };

  }());

})(typeof window === 'undefined' ? module.exports : window);
