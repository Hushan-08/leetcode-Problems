// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        int high = n;
        int low = 1;
        int mid;

        while (low < high) {
            mid = low + (high - low) / 2;
            if (isBadVersion(mid) == true)
                high = mid;

            else if (isBadVersion(mid) == false)
                low = mid + 1;
        }

        return low;
    }
};
