//find a number that only appears one in an vector

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());     //sorting the vector
        int n = nums.size();
        for(int i=1 ; i<n ; i+=2){           //checking if numbers are same in a pair
            if(nums[i] != nums[i-1])
                return nums[i-1];          //return if previuos element not equal to current element
        }
        return nums[n - 1];       //returning last element if no single element previously
    }
};