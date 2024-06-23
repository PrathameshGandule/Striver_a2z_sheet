class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int lastCount=0;
        int cnt=0;
        int n=nums.size();
        for(int i=0 ; i<n ; i++){
            if(nums[i]==1){
                cnt++;
            }
            else if(nums[i]==0){
                if(lastCount < cnt)
                    lastCount = cnt;
                cnt=0;
            }
            if(lastCount < cnt)
                lastCount = cnt;
        }
        return lastCount;
    }
};