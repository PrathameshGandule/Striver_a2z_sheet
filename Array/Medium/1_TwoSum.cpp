class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        int n = nums.size();
        for(int i=0 ; i<n ; i++){
            for(int j=i+1 ; j<n ; j++){
                if(nums[i] + nums[j] == target){
                    ans.at(0)=i;
                    ans.at(1)=j;
                    break;
                }
            }
        }
        return ans;
    }
};