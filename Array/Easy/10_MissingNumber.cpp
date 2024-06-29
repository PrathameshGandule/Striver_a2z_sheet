//finding missing number
//2 methods


//This method checks if current index and element are same after
//sorting the vector
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


//this solutions returns diffrence between sum of elements in vector
//and actual sum of elements that should have been if a element wasn't missing

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int vectorSum = 0;
        int n = nums.size();
        for(auto it=nums.begin() ; it!=nums.end() ; it++)
            vectorSum += *it;
        int sum = (n*(n+1)/2);
        return sum - vectorSum;
    }
};