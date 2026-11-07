#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
const int Max=2e5+2;
int a[Max],a1[Max];
char c[Max],c1[Max],C[Max];
int len;
int Len[Max];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>C[i];
		a1[n-i+1]=a[i];
		Len[i]=Len[i-1]+a[i];
		len+=a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			c[j+Len[i-1]]=C[i];
			c1[len-j-Len[i-1]+1]=C[i];
		}
	}
	int ans=0;
	for(int i=1;i<=len;i++){
		if(c[i]!=c1[i]){
			ans++;
		}
	}
	cout<<ans/2;
	return 0;
}