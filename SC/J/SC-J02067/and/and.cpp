#include <bits/stdc++.h>
using namespace std;
#define int long long
int ab[200005]={},ad[200005]={},f[105]={};
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a,k=1,s=0,total=1;
	cin>>n>>m;f[1]=1;
	for (int i=1;i<=31;i++){
		k*=2;f[i+1]=k;
	}
	k-=1;s=k;
	for (int i=1;i<=31;i++)ab[i]=k;;
	for (int i=1;i<=n;i++){
		cin>>a;
		int b=1,j=0,y=a;
		while(a>0){
			j++;
			if (a&b){
				ab[j]&=y;ad[j]++;
			}
			a>>=1;
		}
	}
	int p[33],cnt=0;
	for (int i=31;i>=0;i--){
		if (ad[i]>=m){
			if (total){
				p[++cnt]=f[i];
				s=ab[i];total=0;continue;
			}
			int cnt=1;
			for (int j=1;j<=cnt;j++){
				cnt&=(p[i]&ab[i]);
			}
			if (cnt)s&=ab[i];
		}
	}
	if (s==k||m==0)cout<<0;
	else cout<<s;
	return 0;
}
