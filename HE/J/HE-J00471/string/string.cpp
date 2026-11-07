//32pts
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n;
long long num,ans;
string s;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;char c;
		cin>>x>>c;
		num+=x;
		for(int j=1;j<=x;j++) s+=c;
	}
	int l=0,r=num-1;
	while(l+1!=r){
		if(s[l]!=s[r]) ans++;
		l++,r--;
		if(l>=r) break;
	}
	cout<<ans;
	return 0;
}
