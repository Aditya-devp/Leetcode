class Solution {
public:
    int search(vector<int>& nums, int target) {

int low_index = 0;
        int high_index = nums.size();       

        while (low_index < high_index) {

            int mid_index = (low_index + high_index) / 2;

            if (nums[mid_index] == target) {
                return mid_index;
            } else if (nums[mid_index] < target) {
                low_index = mid_index + 1;
            } else {       
                high_index = mid_index;
            }
        }

        return -1;

    
    }
};
