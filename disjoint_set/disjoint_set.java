
Data structure to model a collection of disjoint sets.
It allows to determine in an efficient way to which set an element belongs,
If two elements are in the same set and join two sets disjoint into one.
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
