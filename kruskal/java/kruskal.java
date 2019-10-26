Given a graph with weights, find its minimum cover tree.



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



static class edge implements Comparable<edge> {    
    int u, v, w;        
    edge(int _u, int _v, int _w) {
        u = _u;
        v = _v;
        w = _w;
    }

    @Override
    public int compareTo(edge o) {
        if(w > o.w)return 1;
        else return -1;
    }
}

static class par{
    int F, S;

    par(int f, int s){
        F = f;
        S = s;
    }

}

static final int MAX = 100005; //Maximum amount of nodes
static ArrayList<par> g[] = new ArrayList[MAX]; //Adjacent list
static ArrayList<edge> e = new ArrayList<>(); //Edges list
static int N, M; //Amount of nodes and edges

static void kruskal() {
    Collections.sort(e);
    dsu ds = new dsu(N);
    int sz = 0;
    for (edge ed: e) {
    if (ds.find(ed.u) != ds.find(ed.v)) {
            ds.unite(ed.u, ed.v);
            g[ed.u].add(new par(ed.v, ed.w));
            g[ed.v].add(new par(ed.u, ed.w));
            if (++sz == N - 1) {
                break;
            }
        }
    }
}

static void init() {
    e.clear();
    for (int i = 0; i <= N; i++) {
        g[i] = new ArrayList<>();
    }
}