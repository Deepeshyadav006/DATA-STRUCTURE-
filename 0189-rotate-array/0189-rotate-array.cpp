class Solution {
public:
    // we have to create a function that perform reverse part of the arrays
        void reversearray(vector<int> &nums , int left , int right){
            // the condition is that if left index is smaller then right index so swap

            while(left<right){
                swap(nums[left],nums[right]);
                // now move the left pointer forward
                left++;
                // now move the right pointer backward
                right--;
            }
        }
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        // for unnecessary rotation
        k = k%n;

        // we have to call the reverse function and we are reversing the entire array
        reversearray(nums,0,n-1);
        // we have to call the reverse function and we are reversing the first k elements
        reversearray(nums,0,k-1);
        // we have to call the reverse function and we are reversing the remaining elements
        reversearray(nums,k,n-1);
    }
};