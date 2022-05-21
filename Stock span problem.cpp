 vector <int> calculateSpan(int price[], int n)
    {
       int dp[n] ;
       dp[0] = 1;
       for(int i=1;i<n;i++)
       {
           int count = 1;
           
           for(int j=i-1;j>=0;j--){
               if(price[j]<=price[i])
               {
                   count++;
               }
               else
               {
                   break;
               }
           }
           dp[i] = count;
       }
       vector<int>v;
       for(int i=0;i<n;i++)
        v.push_back(dp[i]);
    return v;
    }
    
    /////////////////
    //optimized
    
    class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int>v;
       v.push_back(1);
       stack<int>st;
       st.push(0);
       for(int i=1;i<n;i++){
            while(st.size()>0&&price[i]>=price[st.top()]){
                st.pop();
            }
            if(st.size()==0)
                v.push_back(i+1);
            else
                v.push_back(i-st.top());
    
            st.push(i);
       }
    return v;
    }
};
