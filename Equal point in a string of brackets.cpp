class Solution{
  public:
    int findIndex(string str) {
        int o = 0;
        int c = 0;
        
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='(')
                o++;
            else
                c++;
        }
        int temp = 0;
        for(int i=0;i<str.size();i++)
        {
            
            if(str[i]=='(')
                temp++;
            if(str[i]==')')
                c--;
            if(temp==c)
                return i+1;
        }
        if(c==0)
            return 0;
        return str.size();
    }
};
