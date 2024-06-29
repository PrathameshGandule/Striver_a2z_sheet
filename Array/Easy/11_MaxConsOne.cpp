//finding max consecutive 1's in a vector

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int lastCount=0;            //use of a temporary and permanent (last) count
        int cnt=0;                  
        int n=nums.size();
        for(int i=0 ; i<n ; i++){       
            if(nums[i]==1){              //if number is 1 then increment cnt variable
                cnt++;
            }
            else if(nums[i]==0){         //else give cnt to lastcount if it's lesser
                if(lastCount < cnt)
                    lastCount = cnt;
                cnt=0;
            }
        }
        if(lastCount < cnt)       //a final check before returning last count
            lastCount = cnt;
        return lastCount;
    }
};