
AC Code for [ZJ a129](https://zerojudge.tw/ShowProblem?problemid=a129)
-
---
```cpp
/*
I'm gonna to code now~
Messenge me if any question.

Variable names are corresponds to the problem statement.
*/

#include <bits/stdc++.h>
using namespace std;

struct edge{
    int i,j,c;
    // If you guys don't know what below function is,
    // GOOLE Search "c++ operator overload"
    bool operator<(const edge &rhs){
        return c < rhs.c;
    }
}edges[200000];

int n,m;
vector<int> parent;// parent for each node/vertex
vector<int> siz;

int find_parent(int k){
    // find node k's root
    int ret = k;
    while(parent[ret] != ret){
        // when current node is not root
        ret = parent[ret];
    }
    // here, we can connect each node to root to reduce time for query
    int aux = k;
    while(parent[aux] != aux){
        // when current node is not root
        k = parent[k];
        parent[aux] = ret;
        aux = k;
    }
    return ret;
}

int main(){
    while(cin >> n >> m){
        for(int i = 0; i < m; ++i){
            cin >> edges[i].i >> edges[i].j >> edges[i].c;
        }
        sort(edges, edges+m);
        parent.resize(n);
        siz.resize(n);
        for(int i = 0; i < n; ++i){
            parent[i] = i;
            // Parents for each node/vertex are initially themselves.
            siz[i] = 1;// only itself
        }

        // Core loop for disjoint set !
        long long int ans = 0;
        for(int i = 0; i < m; ++i){
            // Consider each edge whether it can be the edge of MST.
            int A = find_parent(edges[i].i);
            int B = find_parent(edges[i].j);
            if(A == B)continue;// two vertex of the edge were connected
            
            // Below is the simple version of disjoint set,
            // We still have ways to do more optimization!
            // Check out the method "Union By Size".
            if(siz[A] < siz[B])swap(A,B);
            // it's garrentee that siz[A] >= siz[B] now
            parent[B] = A;
            siz[A] += siz[B];
            ans += edges[i].c;
        }

        // Oh, remember to deal with '-1' output.
        // Check if all parent of nodes are same.
        bool same = true;
        for(int i = 1; i < n; ++i){
            if(find_parent(i) != find_parent(0))same = false;
        }
        if(same){
            cout << ans << '\n';
        }else{
            cout << -1 << '\n';
        }
    }
    return 0;
}
/*
Time complexity: O(m * alpha(n))
*/
```