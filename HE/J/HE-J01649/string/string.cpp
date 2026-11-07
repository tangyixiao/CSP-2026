#include<bits/stdc++.h>
using namespace std;
int n,sum,cnt;
string S;
int main(){
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	while(n--){
		long long a; 
		string s;
		cin>>a>>s;
		for(int i=1;i<=a;i++){
			S+=s;
		}
	}
	long long i=1;
	long long j=S.size()-1;
	long long ans = 0;
	for(int k=1;k<=S.size()/2;k++){
		if(S[i] == S[j]){
			i++;
			j--;
		}else{
		    ans++;
		    i++;
		    j++;
		}
	}
	cout<<ans;
	return 0;
}
