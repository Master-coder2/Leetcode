
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& a) {
       int n = a.size() ;
        int m = a[0].size() ;
        queue < pair < int , int > > q ;
        vector < vector < int > > dp(n,vector<int>(m,0));
        for( int i = 0 ; i < n ; i++){
            for( int j = 0 ; j < m ; j++){
                if(a[i][j]==0) q.push({i,j});
                else dp[i][j] = 100000 ;
            }
        }
        int dx[] = {1,-1,0,0};
        int dy[] = {0,0,1,-1};
        while(!q.empty()){
            int x = q.front().first , y = q.front().second ;
            q.pop();
            for( int i = 0 ; i < 4 ; i++){
                int nx = x + dx[i] , ny = y + dy[i] ;
                if(nx>=0 && nx < n && ny>=0 && ny < m && dp[nx][ny] > dp[x][y] + 1){ // only push node whose distance reduces
                        dp[nx][ny] = dp[x][y] + 1 ;
                        q.push({nx,ny});
                }
            }
        }
        return dp ;

    }
};
