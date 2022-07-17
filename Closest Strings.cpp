	
	int shortestDistance(vector<string> &s, string word1, string word2)
	{
		// Your code goes here
		int first = -1;
		int second = -1;
		int dis = INT_MAX;
		for(int i=0;i<s.size();i++){
		    if(word1==s[i]){
		        first = i;
		    }
		    if(word2==s[i]){
		        second = i;
		    }
		    if(first!=-1&&second!=-1){
		        dis = min(abs(first-second),dis);
		    }
		}
		return dis;
	}
};
