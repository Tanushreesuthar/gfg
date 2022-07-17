    string longestCommonPrefix (string arr[], int N)
    {
        int ind = 0;
        string temp = arr[0];
        for(int i=0;i<N;i++){
            if(arr[i].size()<temp.size()){
                ind = i;
                temp = arr[i];
            }
        }
        
        bool flag = false;
        string ans = "";
        for(int i=0;i<temp.size();i++){
           for(int j=0;j<N;j++){
               if(arr[j][i]==temp[i])
                    continue;
                else{
                        flag = true;
                      break;
                }
               
           }
           if(flag)
            break;
           ans+=temp[i];
           
        }
        if(ans.size()==0)
            return "-1";
        return ans;
    }
};
