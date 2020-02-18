class Solution {
public:
    bool checkValidString(string s) {
       int l = 0 , h = 0 , n  = s.size() ;
        for( int i = 0 ; i < n ; i++){
            if(s[i]=='('){
                l++,h++; // increasing range
            }
            else if(s[i]==')'){
                l--,h--; // decreasing range
            }
            else{
                l--;    // adjusting range
                h++;
            }
            if(h<0){
                return false ; // condition that current prefix is not balanced
            }
            l = max(l,0);
        }
        if(l<=0 && h >=0) // last condition that string is balanced or not
            return true ;
        return false ;
    }
};
