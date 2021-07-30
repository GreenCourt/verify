#include<bits/stdc++.h>
using namespace std;

#include"../lib/grid_bfs.h"

int main() {
  // https://atcoder.jp/contests/abc007/tasks/abc007_3
  int rows, cols;
  vector<string> grid;
  int start_y, start_x;
  int goal_y, goal_x;
  cin >> rows >> cols;
  cin >> start_y >> start_x; start_y--; start_x--;
  cin >> goal_y >> goal_x; goal_y--; goal_x--;

  grid.resize(rows);
  for(int i=0; i<rows; i++) cin >> grid[i];
  auto dist = bfs(grid, start_y, start_x);
  cout << dist[goal_y][goal_x] << endl;
}
