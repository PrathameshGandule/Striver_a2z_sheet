class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i,j,k;
        i=j=k=0;
        
        vector<int> arr3;
        
        while(i<n && j<m){
            if(arr1[i] < arr2[j]){
                //arr3[k++] = arr1[i++];
                arr3.push_back(arr1[i++]);
                k++;
            }    
            else if(arr2[j] < arr1[i]){
                //arr3[k++] = arr2[j++];
                arr3.push_back(arr2[j++]);
                k++;
            }
            else{
                //arr3[k++] = arr1[i++];
                arr3.push_back(arr1[i++]);
                k++;
                j++;
            }
        }
        
        for(; i<n ; i++)
            //arr3[k++] = arr1[i];
            arr3.push_back(arr1[i]);
        for(; j<m ; j++)
            //arr3[k++] = arr2[j];
            arr3.push_back(arr1[j]);
        
        return arr3;
    }
};