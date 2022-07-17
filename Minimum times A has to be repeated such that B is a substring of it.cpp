#include<string>
class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        int t = B.size();
        int  p = A.size();
        int k = ceil((float)t/(float)p);
        k = k+1;
        // cout<<k;
        string temp = A;
        int count = 1;
        while(count<=k){
            // cout<<A<<" "<<B<<endl;
            auto it = A.find(B);
            if(it!=string::npos)
                return count;
            A+=temp;
            count++;
        }
        return -1;
    }
};
