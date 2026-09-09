class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = 0;
        int i = 0;
        int j = 0;
    
        vector<int> temp(m+n);
        while(i < m && j < n){
            if(nums1[i] < nums2[j])
                temp[k++] = nums1[i++];

                else
                temp[k++] = nums2[j++];
        }

        while(i < m )
        temp[k++] = nums1[i++];

        while(j < n) 
        temp[k++] = nums2[j++];
    
        for(int s =0; s<m+n; s++)
            nums1[s] = temp[s];
    }

   
};