class Solution {
public:
    int arrangeCoins(int n) {
        int coin=1;
        long long ans=0;
        int x=1;
        int res=0;
        while(ans<=n){
            ans+=coin*x;
            x++;
            res++;
        }
        return res-1;
    }
};
//1,3,6,10,15,21