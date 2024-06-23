class Solution {
public:
    void swap(int &p, int &q){
        int t=p;
        p=q;
        q=t;
    }
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
        for(i=0 ; i<n ; i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        for(i=j+1 ; i<n ; i++){
            if(nums[i]!=0 && nums[j]==0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};