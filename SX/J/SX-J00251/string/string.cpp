#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005],n,sum=1,ans=0;
char c[2000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		char s;
		cin>>a[i]>>s;
		for(int j=sum;j<=sum+a[i];j++) c[j]=s;
		sum+=a[i];
	}
	for(int i=1;i<=sum/2;i++){
		if(c[i]!=c[sum-i]) ans++;
	}
	cout<<ans;
	return 0;
}
