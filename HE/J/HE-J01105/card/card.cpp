#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int now[500005],cnt[500005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool A=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])A=0;
	}
	if(A){
		for(int i=1;i<=m;i++){
			int pos=upper_bound(a+1,a+1+n,i)-a;
			pos-=1;
			cnt[i]=pos;
		}
		for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
		return 0;
	}
	int len=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=len;j++)now[j]=0;
		len=0;
		for(int j=i;j<=n;j++){
			bool yes=0;
			for(int k=1;k<=len;k++){
				if(now[k]==a[j]){
					len=k;
					now[len]=a[j];
					yes=1;
					break;
				}
			}
			if(!yes)now[++len]=a[j];
		}
			for(int k=1;k<=len;k++){
				cnt[now[k]]++;
//				cout<<now[k]<<' ';
			}
//			cout<<'\n';
	}
	for(int i=1;i<=m;i++)cout<<cnt[i]<<' ';
	return 0;
}
