#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int ll;
		char cc;
		cin>>ll>>cc;
		for(int j=1;j<=ll;j++){
			s=s+cc;
		}
	}
	long long ans;
	for(int i=0;i<=s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
