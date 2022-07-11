class Solution{
public:	
	void immediateSmaller(int *A, int n) {
    for(int i=0;i<n-1;i++)
    {
        if(A[i]>A[i+1])
            A[i] = A[i+1];
        else
            A[i] = -1;
    }
    A[n-1] = -1;
	}
};
