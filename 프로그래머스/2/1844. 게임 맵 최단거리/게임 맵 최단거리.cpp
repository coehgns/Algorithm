#include<bits/stdc++.h>
using namespace std;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };

int solution(vector<vector<int> > maps) {
    int cnt = 0;
    int graph[101][101];
    int visited[101][101];
    
    for(int i = 0; i < maps.size(); i++) {
        for(int j = 0; j < maps[i].size(); j++) {
            graph[i][j] = maps[i][j];
        }
    }
    
    queue<pair<int,int>> q;
    q.push({0, 0});
    visited[0][0] = 1;
    
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        
        if(x == maps.size() - 1 && y == maps[0].size() - 1) {
            return visited[maps.size() - 1][maps[0].size() - 1];
        }
        
        q.pop();
        
        for(int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            
            if(nx < 0 || ny < 0 || nx > maps.size() || ny > maps[0].size()) continue;
            if(graph[nx][ny] == 1 && !visited[nx][ny]) {
                visited[nx][ny] = visited[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    
    return -1;
}