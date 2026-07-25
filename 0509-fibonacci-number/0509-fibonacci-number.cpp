class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int first =1;
        int second=1;

        for(int i=3;i<=n;i++){
            int third=second+first;
            first=second;
            second=third;
        }
        return second;
    }
};