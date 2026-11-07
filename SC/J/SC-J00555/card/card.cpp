#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[300005],fl;
pair<int,int>f[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",a+i);
		if(a[i]<a[i-1])fl=1;
	}
	for(int st=1;st<=n;st++){
		for(int i=st;i<=n;i++){
			if(f[a[i]].first){
				if(fl){
					for(int j=1;j<=m;j++)
						if(f[j].second>f[a[i]].second)f[j]={0,0};
				}
			}
			f[a[i]]={1,i};
		}
		for(int i=1;i<=m;i++)ans[i]+=f[i].first,f[i]={0,0};
	}
	for(int i=1;i<=m;i++)printf("%d ",ans[i]);
	return 0;
}