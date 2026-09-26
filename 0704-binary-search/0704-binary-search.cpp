class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int mid;
        bool isfound = 0;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                isfound = 1;
                break;
            }

            else if (nums[mid] > target) {
                high = mid - 1;
            }

            else
                low = mid + 1;
        }

        if (!isfound)
            return -1;

        else
            return mid;
    }
};