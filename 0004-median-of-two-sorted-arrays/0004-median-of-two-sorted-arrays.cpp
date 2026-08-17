class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=((nums1.size()+nums2.size())/2)+1;
        int i=0;
        int j=0;
        int mid=0;
        int prevmid=0;
        while(n>0){
            prevmid=mid;
            if(i<nums1.size() && (j>=nums2.size() || nums1[i]<=nums2[j])){
                mid=nums1[i];
                i++;
            }
            else{
                mid=nums2[j];
                j++;
            }
            n--;
        }
        if ((nums1.size()+nums2.size())% 2 == 1)return mid;
        

        return ((double)prevmid + mid) / 2.0;
    }
};