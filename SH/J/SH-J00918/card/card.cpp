#include <bits/stdc++.h>
using namespace std;

int a[100007],b[100007],c[100007];
#define int long long
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,cnt=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int l=i;l<=j;l++){
				if(a[l]==a[j])j=l;
			}
			b[j]=a[j];
		}
		for(int j=1;j<=n;j++){
			if(b[j]>=1)cnt++;
		}
		c[cnt]++;
	}
	for(int i=1;i<=m;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
