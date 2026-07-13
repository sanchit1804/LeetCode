class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left=0;
        int right=0;
        int gap=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='L') left++;
            if(moves[i]=='R') right++;
            if(moves[i]=='_') gap++;
        }
        if(left>=right) return left-right+gap;

        return right-left+gap;
    }
};