vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
//Your code here
    unordered_map<string,int>mpv;
    map<int,string>mpvtemp;
    for(int i=0;i<row;i++){
        string temp="";
        for(int j=0;j<col;j++)
            temp+=to_string(M[i][j]);
        if(mpv.find(temp)==mpv.end())
            mpv[temp] = i;
    }
    vector<vector<int>>ans;
    for(auto x:mpv){
        mpvtemp[x.second] = x.first;
    }
    for(auto x:mpvtemp){
        vector<int>v;
        for(auto t:x.second)
            v.push_back(t-'0');
        ans.push_back(v);
    }
    return ans;
}
