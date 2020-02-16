class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size() ;
        int m = popped.size() ;
        stack < int > s ;
        int pos = 0 ;
        for( int i  = 0 ; i < n ; i++){
            s.push(pushed[i]);
            while(!s.empty() && pos < m && s.top()==popped[pos]){
               s.pop();
                pos++;
            }
        }
        return (pos==m);
    }
};
