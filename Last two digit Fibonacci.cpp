#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
	long long int n;
    cin>>n;
    n = n%300;
  	long long int dp[n+1];
  	dp[0] = 0;
  	dp[1] = 1;
  	for(int i=2;i<=n;i++){
      dp[i] = (dp[i-1]+dp[i-2])%100;
    }
    cout<<dp[n]<<endl;
//   	cout<<dp[n]<<endl;
    }
    return 0;

}
