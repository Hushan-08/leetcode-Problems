class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int k = 0, i = 0, j = 0;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> temp(n+m);
        while(i < n&& j < m){
            if(nums1[i] < nums2[j])
                temp[k++] = nums1[i++];

                else
                temp[k++] = nums2[j++];
        }

        while(i <n)
            temp[k++] = nums1[i++];

        while(j < m)
            temp[k++] = nums2[j++];
    int mid =  (temp.size())/2;
       if(temp.size() % 2 == 0){
       return (temp[mid-1] + temp[mid]) / 2.0;        
       }
       
       else
        return temp[mid];
    }
     
};