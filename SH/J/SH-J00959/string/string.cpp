#include <bits/stdc++.h>
using namespace std;
long long n,a[200005];
long long l,ans;
bool vis[200005];
char c[200005],s[10000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string .out","w",stdout); 
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		l+=a[i];
	}
	long long cnt=0;
	for (int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s[++cnt]=c[i];
		}
	}
	long long x=n,m=l/2;
	for (int i=1;i<=m+1;i++){
		if(s[i]!=s[l-i+1])ans++;
	}
	cout<<ans;
	return 0;
} 
