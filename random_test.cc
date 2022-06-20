#include<bits/stdc++.h>
using namespace std;

#include"../lib/random_test.h"

int main(int argc, char *argv[]) {
  rnd.seed(argc > 1 ? stoi(argv[1]) : random_device()());

  for(int ii = 0; ii < 10000; ++ii) {
    {
      int n = randint(1, 20);
      long long l = randint(-100000000000000LL, 100000000000000LL);
      long long r = randint(l+n, l+n*2);
      vector a = random_vector(n, l, r);
      assert(a.size() == n);
      for(auto i : a) assert(l <= i && i <= r);
    }

    {
      int n = randint(1, 20);
      long long l = randint(-100000000000000LL, 100000000000000LL);
      long long r = randint(l+n, l+n*2);
      vector a = random_vector_without_duplicates(n, l, r);
      assert(a.size() == n);
      sort(a.begin(), a.end());
      a.erase(unique(a.begin(), a.end()), a.end());
      assert(a.size() == n);
      assert(a[0] >= l);
      assert(a.back() <= r);
    }

    {
      int n = randint(1, 20);
      long long l = randint(-100000000000000LL, 100000000000000LL);
      long long r = l+n-1;
      vector a = random_permutation(l, r);
      assert(a.size() == n);
      sort(a.begin(), a.end());
      a.erase(unique(a.begin(), a.end()), a.end());
      assert(a.size() == n);
      for(int i=1; i<n; ++i) assert(a[i] == a[i-1]+1);
    }

    {
      long long l = randint(-100000000000000LL, 100000000000000LL);
      long long r = randint(l, l+20);
      auto [a,b] = random_pair(l, r, true);
      assert(l <= a && a <= r && l <= b && b <= r);
      auto [x,y] = random_pair(l, r+1, false);
      assert(l <= x && x <= r+1 && l <= y && y <= r+1 && x != y);
    }

    {
      long long l = randint(-100000000000000LL, 100000000000000LL);
      long long r = randint(l, l+20);
      auto [a,b] = random_range(l, r, true);
      assert(l <= a && a <= b && b <= r);
      auto [x,y] = random_range(l, r+1, false);
      assert(l <= x && x < y && y <= r+1);
    }

    for(auto population : {string_digits, string_digits+string_alphabet_lowercase, string_alphabet_lowercase+string_alphabet_uppercase}) {
      int n = randint(1, 20);
      string s = random_string(n, population);
      assert(s.size() == n);
      set<char> ps;
      for(char i:population) ps.insert(i);
      for(char i:s) assert(ps.count(i));
    }

    {
      int n = randint(1, 20);
      int m = randint(0, n*(n-1)/2);
      vector edges = random_graph(n,m);
      assert(edges.size() == m);
      set<pair<int,int>> s;
      for(auto [u,v] : edges) {
        assert(0 <= u && u < n);
        assert(0 <= v && v < n);
        s.emplace(min(u,v), max(u,v));
      }
      assert(s.size() == m);
    }

    {
      int n = randint(1, 20);
      vector edges = random_path_graph(n);
      assert(edges.size() == n-1);
      if(n>1) {
        vector<vector<int>> adj(n);
        for(auto [u,v] : edges) {
          assert(0<=u && u<n && 0<=v && v<n);
          adj[u].push_back(v), adj[v].push_back(u); 
        }
        vector<int> deg1;
        for(int i=0; i<n; ++i) {
          assert(adj[i].size()==2 or adj[i].size()==1);
          if(adj[i].size()==1) deg1.push_back(i);
        }
        assert(deg1.size() == 2);
        vector<bool> visited(n);
        visited[deg1[0]] = true;
        int v=adj[deg1[0]][0], from=deg1[0];
        visited[v] = true;
        while(v != deg1[1]) {
          assert(adj[v].size()==2);
          assert(adj[v][0] == from or adj[v][1] == from);
          if(adj[v][0] == from) {from=v; v=adj[v][1];}
          else {from=v; v=adj[v][0];}
          assert(visited[v] == false);
          visited[v] = true;
        }
        assert(adj[v][0] == from);
        for(int i=0; i<n; ++i) assert(visited[i]);
      }
    }

    {
      int n = randint(1, 20);
      vector edges = random_star_graph(n);
      assert(edges.size() == n-1);
      vector<vector<int>> adj(n);
      for(auto [u,v] : edges) {
        assert(0<=u && u<n && 0<=v && v<n);
        adj[u].push_back(v), adj[v].push_back(u); 
      }
      int center = -1;
      for(int i=0; i<n; ++i) if(adj[i].size() == n-1) center=i;
      assert(center!=-1);
      for(int i=0; i<n; ++i) {
        if(i==center) {
          vector visited(n,false);
          visited[i] = true;
          for(int u : adj[i]) visited[u] = true;
          for(int i=0; i<n; ++i) assert(visited[i]);
        }
        else {
          assert(adj[i].size() == 1);
          assert(adj[i][0] == center);
        }
      }
    }

    {
      int n = randint(1, 20);
      vector edges = random_tree(n);
      assert(edges.size() == n-1);
      vector<vector<int>> adj(n);
      for(auto [u,v] : edges) {
        assert(0<=u && u<n && 0<=v && v<n);
        adj[u].push_back(v), adj[v].push_back(u); 
      }
      vector visited(n, false);
      queue<int> q;
      q.push(0);
      while(q.size()) {
        int v = q.front(); q.pop();
        visited[v] = true;
        for(int u:adj[v]) if(!visited[u]) q.push(u);
      }
      for(int i=0; i<n; ++i) assert(visited[i]);
    }

    {
      int n = randint(1, 20);
      int m = randint(n-1, n*(n-1)/2);
      vector edges = random_connected_graph(n,m);
      assert(edges.size() == m);

      vector<vector<int>> adj(n);
      set<pair<int,int>> s;
      for(auto [u,v] : edges) {
        assert(0 <= u && u < n);
        assert(0 <= v && v < n);
        s.emplace(min(u,v), max(u,v));
        adj[u].push_back(v), adj[v].push_back(u); 
      }
      assert(s.size() == m);
      vector visited(n, false);
      queue<int> q;
      q.push(0);
      while(q.size()) {
        int v = q.front(); q.pop();
        visited[v] = true;
        for(int u:adj[v]) if(!visited[u]) q.push(u);
      }
      for(int i=0; i<n; ++i) assert(visited[i]);
    }

    cerr << "\r\x1b[2K" << ii;
  }
  cerr << endl;
}
