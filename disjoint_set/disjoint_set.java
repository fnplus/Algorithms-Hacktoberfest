Estructura de datos para modelar una colección de conjuntos disyuntos.
Permite determinar de manera eficiente a que conjunto pertenece un elemento,
si dos elementos se encuentran en un mismo conjunto y unir dos conjuntos disyuntos en un uno.

static class dsu {
    int[] par, sz;
    int size; //Number of sets

    dsu(int n) {
        size = n;
        par = new int[n];
        sz = new int[n];
        for (int i = 0; i < n; i++) {
            par[i] = i;
            sz[i] = 1;
        }
    }
    //Find the representative node of the set of u
    int find(int u) {
        return par[u] == u ? u : (par[u] = find(par[u]));
    }
    //Join the sets of u and v
    void unite(int u, int v) {
        if ((u = find(u)) == (v = find(v))) return;
        if (sz[u] > sz[v]){
            int aux = u;
            u = v;
            v = aux;
        }
        par[u] = v;
        sz[v] += sz[u];
        size--;
    }
    // Return the number of nodes of the set of u
    int count(int u) {
        return sz[find(u)];
    }
};
