//moving zeros to end

class Solution {
public:
    void swap(int &p, int &q){    //yes there exists a inbuilt swap function
        int t=p;                  //but writing a new swap function made code faster
        p=q;
        q=t;
    }
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
        for(i=0 ; i<n ; i++){    //finds first zero element
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        for(i=j+1 ; i<n ; i++){              //swaps previous zero element and current element
            if(nums[i]!=0 && nums[j]==0){    //until all zeros move to end
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};