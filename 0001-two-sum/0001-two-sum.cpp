class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> arr;
        int n =nums.size();

        for(int i = 0; i < n; i++)
        arr.push_back({nums[i],i});
    
        sort(arr.begin(), arr.end());

        int a = 0;
        int b = n - 1;

        while(a<b){
            if(arr[a].first + arr[b].first == target)
            return {arr[a].second , arr[b].second};

            else if(arr[a].first + arr[b].first > target)
            b--;

            else 
            a++;
        }

        return {};
    }
};