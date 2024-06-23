class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i;
        int flag;
        for(i=0; i<n; i++)
        {
            if(nums[i]!=i){
                flag=i;
                break;
            }
        }
        return i;
    }
};