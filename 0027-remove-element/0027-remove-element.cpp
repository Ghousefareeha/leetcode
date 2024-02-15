#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;  // Initialize the count of elements not equal to val

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                // If the current element is not equal to val, update the array
                nums[k++] = nums[i];
            }
        }

        return k;
    }
};
