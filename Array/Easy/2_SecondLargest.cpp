class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int maxval = -1;
	    int maxval2 = -1;
	    for(int i=0 ; i<n ; i++)
	        if(maxval < arr[i])
	            maxval = arr[i];
	            
	    for(int i=0 ; i<n ; i++)
	        if(maxval2 < arr[i] && arr[i] < maxval)
	            maxval2 = arr[i];
	            
	    return maxval2;
	}
};