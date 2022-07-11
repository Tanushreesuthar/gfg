class Solution{
public:
    vector<int> leftSmaller(int n, int A[]){
        // code here
          stack<int>st;
    vector<int>nse(n,-1);
    for(int i=n-1;i>=0;i--){
        if(st.size()>0){
            while(st.size()>0&&A[st.top()]>A[i]){
                nse[st.top()] = A[i];
                st.pop();
            }
        }
        st.push(i);
    }
    return nse;
    }
};
