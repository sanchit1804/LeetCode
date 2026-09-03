class Solution {
public:
    bool isPalindromic(string s) {
        string binary = "";

        for (char c : s) {
            int ascii = int(c);
            string bin = bitset<8>(ascii).to_string();
            binary += bin;
        }
        int left=0;
        int right=binary.size()-1;
        while(left<right){
            if(binary[left]==binary[right]);
            else return false;
            left++;
            right--;
        }
        return true;
    }
};