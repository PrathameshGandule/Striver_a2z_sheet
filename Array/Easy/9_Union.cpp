//find a union

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

        //two pointers method is used
        
        vector<int> arr3;    //create a new vector to return
        
        while(i<n && j<m){          //while i and j are within limit
            if(arr1[i] < arr2[j]){            
                //arr3[k++] = arr1[i++];      //these inner commented code is used if array is to be returned
                arr3.push_back(arr1[i++]);    //if element in array 1 is smaller it is added to new array 3
                k++;                          //pointers are incremented further
            }    
            else if(arr2[j] < arr1[i]){       //else if element in array 2 is smaller it is added to new array 3
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
        
        for(; i<n ; i++)                    //this for loop adds all remaining element in array 1 if any
            //arr3[k++] = arr1[i];
            arr3.push_back(arr1[i]);
        for(; j<m ; j++)                    //same for this loop
            //arr3[k++] = arr2[j];
            arr3.push_back(arr1[j]);
        
        return arr3;                       //return our new array
    } 
};