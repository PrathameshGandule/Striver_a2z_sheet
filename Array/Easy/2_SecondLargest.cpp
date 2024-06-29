class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int maxval = -1;              //declaring two varibles for max and 2nd max num
	    int secmaxval = -1;
	    for(int i=0 ; i<n ; i++){       //finding element with maximum size
	        if(maxval<arr[i])
	            maxval = arr[i];
	    }
	    for(int i=0 ; i<n ; i++){             //finding second max value      
	        if(secmaxval < arr[i] && arr[i] < maxval)           //secmaxval should be less than arr[i] and arr[i] should be less than maxval
	            secmaxval = arr[i];
	    }
	    return secmaxval;
	}
};

