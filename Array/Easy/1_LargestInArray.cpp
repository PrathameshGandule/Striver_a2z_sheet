//This solution is using simple array logic 

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

//Following solution is by using vector's auto iterator
//and a little bit better

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largest = arr[0];
        for(auto i : arr)
            largest = max(i, largest);
        return largest;
    }
};