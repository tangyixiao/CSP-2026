#include<bits/stdc++.h>
using namespace std;
int ppp;
int n;
char m;
int le=1;
int ans=0;
long long a[1000000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>ppp;
	for(int i=1;i<=ppp;i++){
		cin>>n>>m;
		for(int j=1;j<=n;j++){
			a[le]=int(m);
			le++;
		}
	}
	for(int i=1;i<=le;i++){
		if(a[i]!=a[le-i]){
			ans++;
		}
	}
	cout<<ans/2;
	return 0;
} 