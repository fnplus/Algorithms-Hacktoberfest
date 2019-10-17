// Prg of BUCKET SORT in JS

function sort(array, bucketSize) {
    if (array.length === 0) {
        return array;
    }

    // Determine minimum and maximum values
    var i;
    var minValue = array[0];
    var maxValue = array[0];
    for (i = 1; i < array.length; i++) {
        if (array[i] < minValue) {
            minValue = array[i];
        } else if (array[i] > maxValue) {
            maxValue = array[i];
        }
    }

    // Initialise buckets
    var DEFAULT_BUCKET_SIZE = 5;
    bucketSize = bucketSize || DEFAULT_BUCKET_SIZE;
    var bucketCount = Math.floor((maxValue - minValue) / bucketSize) + 1;
    var buckets = new Array(bucketCount);
    for (i = 0; i < buckets.length; i++) {
        buckets[i] = [];
    }

    // Distribute input array values into buckets
    for (i = 0; i < array.length; i++) {
        buckets[Math.floor((array[i] - minValue) / bucketSize)].push(array[i]);
    }

    // Sort buckets and place back into input array
    array.length = 0;
    for (i = 0; i < buckets.length; i++) {
        insertionSort(buckets[i]);
        for (var j = 0; j < buckets[i].length; j++) {
            array.push(buckets[i][j]);
        }
    }
    return array;
}


function insertionSort(unsortedList) {
    var len = unsortedList.length;
    for (var i = 1; i < len; i++) {
        for (var j = i - 1; j >= 0 && (unsortedList[j] > tmp); j--) {
            unsortedList[j + 1] = unsortedList[j];
        }
        unsortedList[j + 1] = tmp;
    }
}


// MAIN
const list = [5, 4, -3, 2, 1]
const sorted = sort(list)
console.log(list)