#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,a[N],s,e;
char c[N];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	if(n%2==1)s=n/2,e=n/2+2;
	else s=n/2,e=n/2+1;
	for(int l=1,r=n;l<=s&&r>=e;l++,r--){
		if(c[l]!=c[r])ans+=max(a[l],a[r]);
	}
	cout<<ans;
	return 0;
}
