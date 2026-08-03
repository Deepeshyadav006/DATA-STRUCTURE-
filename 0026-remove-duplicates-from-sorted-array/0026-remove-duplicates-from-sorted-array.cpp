class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        // using the optimal solution by using two pointer
        // if the. array is empty just simple return zero
        if(nums.empty()){
            return 0;
        }

        // now initilize i our 1st pointer which always point at the 1st element of the array
        int i = 0;
        // now j second pointer which scan the unique elements 
        for(int j=1;j<n;j++){
            // now if i and j are not equal that means we find our unique elements
            if(nums[i] != nums[j]){
                // move i forward to locate the unique element 
                i++;
                // and just simply update the value of i
                nums[i] = nums[j];
                // if we did not find unique elements that mean nums[i] == nums[j]
                // we continue
            }
        }

        // now we have to return simply unique elements
        return i+1;
    }
};