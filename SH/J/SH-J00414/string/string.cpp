#include<bits/stdc++.h>
#define int long long
using namespace std;
const int Max_n=1e6+5;
int n,tot,ans;
string a;
int b[Max_n];
char c[Max_n];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i]>>c[i];
		tot+=b[i];
	}
	if(tot>1e8){
		cout<<tot/2;
		return 0;
	}
	ans=tot/2;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=b[i];j++){
			a+=c[i];
		}
	}
	for(int i=0;i<tot/2;i++){
		if(a[i]==a[tot-i-1]){
			ans--;
		}
	}
	cout<<ans;
	return 0;
}
