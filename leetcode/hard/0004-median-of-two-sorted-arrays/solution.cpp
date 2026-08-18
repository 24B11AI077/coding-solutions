class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int left = 0 ,right =0;
       int m = nums1.size(),n=nums2.size();
     vector<int> ans;
       while(left!=nums1.size() && right!=nums2.size()){
        if(nums1[left]<nums2[right]){
           ans.push_back(nums1[left]);
            left++;
           }
           else {
            ans.push_back(nums2[right]);
            right++;
           }
        }
       
       while(left!=nums1.size()){
           ans.push_back(nums1[left]);
           left++;
       }
         while(right!=nums2.size()){
           ans.push_back(nums2[right]);
           right++;
       }
       for(int i=0;i<(m+n);i++){
        cout << ans[i] << " ";
       }
       if(ans.size()%2==0){
       double a = (m+n)/2, med = ans[a]+ans[a-1];
        return med/2;
       }
    
    return ans[(m+n)/2];
    }
};