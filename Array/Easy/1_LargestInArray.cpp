class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maxval = arr[0];
        for(int i=0 ; i<n ; i++)
            if(maxval < arr[i])
                maxval = arr[i];
        return maxval;
    }
};