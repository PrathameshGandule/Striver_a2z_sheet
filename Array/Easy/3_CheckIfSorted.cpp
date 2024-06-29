// simple O(n) solution 
// thing to keep in mind : vector is sorted and rotated in ascending order

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();              //declare necessary variables
        int count = 0;
        for (int i = 1; i < n; i++)          //counting how many variables are rotated at start of vector
            if (nums[i - 1] > nums[i])
                count++;
    
        if (nums[n - 1] > nums[0])           //if it's in normal sorted form then also it counts
             count++;
    
        return count <= 1;               //bool value is returned
    }
};