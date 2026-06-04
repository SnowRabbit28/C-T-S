#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    queue<pair<int,int>> Q;
    int n = board.size();
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 0) continue;
            Q.push({i,j});
        }
    }
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir = 0; dir < 8; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if(board[nx][ny] == 1) continue;
            board[nx][ny] = 2;
        }
    }
   
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 0) answer++;
        }
    }
    
    return answer;
}