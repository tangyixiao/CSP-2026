#include<bits/stdc++.h>
using namespace std;
const int N=5e5+100,M=3e5+100;
int t[M],a[N],c[N],b[M];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])flag=0;
	}
	if(flag){
		for(int i=1;i<=n;i++){
			memset(t,0,sizeof t);
			memset(c,0,sizeof c);
			int cnt=0;
			for(int j=i;j<=n;j++){
				if(!t[a[j]]){
					c[++cnt]=a[j];
					t[a[j]]=cnt;
				}
				else{
					t[c[cnt]]=0;
					c[cnt]=a[j];
					t[a[j]]=cnt;
				}
			}
			for(int i=1;i<=cnt;i++)b[c[i]]++;
		}
		for(int i=1;i<=m;i++)cout<<b[i]<<" ";
	}
	else{
		for(int i=1;i<=n;i++){
			memset(t,0,sizeof t);
			memset(c,0,sizeof c);
			int cnt=0;
			for(int j=i;j<=n;j++){
				if(!t[a[j]]){
					c[++cnt]=a[j];
					t[a[j]]=cnt;
				}
				else{
					for(int k=t[a[j]]+1;k<=cnt;k++){
						t[c[k]]=0;
					}
					cnt=t[a[j]]-1;
					c[++cnt]=a[j];
					t[a[j]]=cnt;
				}
			}
			for(int i=1;i<=cnt;i++)b[c[i]]++;
		}
		for(int i=1;i<=m;i++)cout<<b[i]<<" ";
	}
	return 0;
}
