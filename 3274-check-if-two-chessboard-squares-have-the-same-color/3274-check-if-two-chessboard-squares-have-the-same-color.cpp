class Solution {
public:

    int color(string s){
        int ans=0;
        if((s[0]=='a' || s[0]=='c' || s[0]=='e' || s[0]=='g') && s[1]%2==1) ans=1;
        else if((s[0]=='a' || s[0]=='c' || s[0]=='e' || s[0]=='g') && s[1]%2==0)ans=0;
        else{
            if((s[0]=='b' || s[0]=='d' || s[0]=='f' || s[0]=='h') && s[1]%2==1) ans=0;
            else ans=1;
        }
        
        return ans; 
    }

    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        return color(coordinate1)==color(coordinate2);
    }
};