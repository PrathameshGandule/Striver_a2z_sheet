//easy solution (not that good time and space complexity)

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        if(k==0)return;
        reverse(nums.begin(), nums.end());              //whole vector
        reverse(nums.begin(), nums.begin() + k);        //rotates from begin to k (desired length)
        reverse(nums.begin() + k, nums.end());          //rotates from k to end
    }
};