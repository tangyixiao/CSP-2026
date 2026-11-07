#include<bits/stdc++.h>
using namespace std;
int a[100001],b[100001],ans[100001],d[1000001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int t=0;
		for(int j=i;j<=n;j++){
			if(!b[a[j]])d[++t]=a[j],b[a[j]]=t;
			else{
				for(int x=b[a[j]]+1;x<=t;x++)
					b[d[x]]=0;
				t=b[a[j]];
			}
		}
		for(int j=1;j<=t;j++)ans[d[j]]++;
		for(int j=1;j<=m;j++)b[j]=0;
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";//TLE
}