#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int f[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool flag=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		f[a[i]]=i;
		if(a[i]<=a[i-1])flag=1;
	}
	if(flag==0){
		int cnt=0;
		for(int i=1;i<=m;i++){
			cout<<f[i]+cnt<<' ';
			if(f[i]==0)cnt++;
		}
	}else{
		int cnt[100005];
		memset(cnt,0,sizeof(cnt));
		for(int i=1;i<=n;i++){
			int x[100005];
			int t=0;
			bool f=0;
			memset(x,0,sizeof(x));
			for(int j=i;j<=n;j++){
				f=0;
				for(int k=t;k>=1;k--){
					if(x[k]==a[j]){
						for(int c=k+1;c<=t;c++){
							x[c]=0;
						}
						t=k;
						f=1;
						break;
					}
				}
				if(f==0){
					t++;
					x[t]=a[j];
				}
			}
			for(int j=1;j<=t;j++){
				cnt[x[j]]++;
			}
		}
		for(int i=1;i<=m;i++){
			cout<<cnt[i]<<' ';
		}
	}
	return 0;
} 
