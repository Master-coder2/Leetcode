class Solution {
public:
    int maxRepOpt1(string text) {
        int n = text.size() ;
        vector < int > prefix(n);
        if(n==1) return 1 ;
        map < char , int > mp ;
        prefix[0] = 1 ;
        int ans = 1 ;
        for( int i = 0 ; i < n ; i++) mp[text[i]]++;
        for( int i = 1 ; i < n ; i++){
            if(text[i]==text[i-1]){
                prefix[i] = prefix[i-1] + 1 ;
            }
            else{
                prefix[i] = 1 ;
            }
            ans = max(ans,prefix[i]);
        }
        vector < int > suffix(n);
        suffix[n-1] = 1 ;
        for( int i = n-2 ; i >= 0 ; i--){
            if(text[i]==text[i+1]){
                suffix[i] = suffix[i+1]+1;
            }
            else
                suffix[i] = 1 ;
        }
        for( int i = 0 ; i < n ; i++){
            if(i==0){
                    int d = 0 ;
                    if(suffix[i+1]!=mp[text[i+1]]){
                        d++;
                    }
                    ans = max(ans,suffix[i+1]+d);
            }
            else if(i==n-1){
                    int d = 0 ;
                    if(prefix[i-1]!=mp[text[i-1]]){
                        d++;
                    }
                    ans = max(ans,prefix[i-1]+d);
            }
            else{
                if(text[i-1]==text[i+1]){
                    int d = prefix[i-1]+suffix[i+1] ;
                    if(d!=mp[text[i-1]])
                        d++;
                    ans = max(ans,d);
                }
                else{
                    int d = 0 ;
                    if(prefix[i-1]!=mp[text[i-1]]){
                        d++;
                    }
                    ans = max(ans,prefix[i-1]+d);
                    d = 0 ;
                    if(suffix[i+1]!=mp[text[i+1]]){
                        d++;
                    }
                    ans = max(ans,suffix[i+1]+d);
                }
            }
        }
        return ans ;
    }
};
