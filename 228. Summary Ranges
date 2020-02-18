228. Summary Ranges
class Solution {
public:
    vector<string> summaryRanges(vector<int>& a) {
        int start = 0 ;
        int end = 0 ;
        vector < string > ans ;
        if(a.size() == 0) return ans ;
        for( int i = 1 ; i < a.size() ; i++){
            if(a[i]==a[i-1]+1){
                end++;
            }
            else{
                if(start==end){
                    ans.push_back(to_string(a[start]));
                }
                else{
                    ans.push_back(to_string(a[start])+"->"+to_string(a[end]));
                }
                start = i;
                end = i ;
            }
        }
        if(start==end){
            ans.push_back(to_string(a[start]));
        }
        else{
            ans.push_back(to_string(a[start])+"->"+to_string(a[end]));                 }
        return ans ;

    }
};
