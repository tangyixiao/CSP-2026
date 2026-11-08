#include<bits/stdc++.h>
#define int long long
using namespace std;
int cnt,n,a[200005],ans;
char c[200005],s[100000005];
signed main(){
	freopen("string.in","r",stdin);freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++) s[j+cnt]=c[i];
		cnt+=a[i];
	}
	for(int i=1;i<=cnt/2+cnt%2;i++) if(s[i]!=s[cnt-i+1]) ans++;
	cout<<ans;
	return 0;
}

