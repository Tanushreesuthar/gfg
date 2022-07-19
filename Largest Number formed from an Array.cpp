static bool cmp(string &a,string &b){
	    string t = a+b;
	    string u = b+a;
	    return t>u;
	}
	string printLargest(vector<string> &arr) {
	   sort(arr.begin(),arr.end(),cmp);
	   string temp = "";
	    for(auto x : arr)
	        temp+=x;
	   return temp;
	}
