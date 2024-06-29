//removing duplicates from an array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        int n = nums.size();
        for(int i=1 ; i<n ; i++)           //iterates through the vector from second element 
            if(nums[i] != nums[i-1])       //checks if current element and previous element are same
                nums[j++] = nums[i];       //replaces current element
        return j;
    }
};