#include<bits/stdc++.h>
#define ll long long
using namespace std;

string a;
ll n,zh,ans;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		int u;
		char v;
		cin>>u>>v;
		for(int j=1;j<=u;j++)a+=v;
		zh+=u;
	}
	a=' '+a;
	for(int i=1;i<=(zh>>1);i++){
		if(a[i]!=a[zh-i+1])ans++; 
	}
	cout<<ans;
	return 0;
}
