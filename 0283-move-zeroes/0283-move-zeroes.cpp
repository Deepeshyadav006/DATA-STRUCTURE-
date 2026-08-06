class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // optiaml solution 
        int n = nums.size();
        // in this we are using two pointer i and j j tell us where next non zero elemt should go and i scan the array
        int j = 0;
        // iteration through the loop
        for(int i = 0 ;i<n ; i ++){
            //condition is that when i find a non zero element it will swap with j which already is present at the zero element
            if(nums[i] != 0){
                swap(nums[i],nums[j]);
                // and after swaping we have to just increment j 
                j++;
            }
        }
    }
};