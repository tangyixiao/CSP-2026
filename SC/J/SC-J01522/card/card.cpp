#include<bits/stdc++.h>
using namespace std;
int a[500010];
int cnt[300010];
int now[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			now[j]=0;
		}
		int id=1;
		for(int j=i;j<=n;j++){
			now[id]=a[j];
			if(now[id-1]==now[id]) id--;
			else 
				for(int k=1;k<id;k++)
					if(now[k]==now[id])
						id=k;
			id++;
		}
		for(int j=1;j<id;j++)
			cnt[now[j]]++;
	}
	for(int i=1;i<=m;i++)
		cout<<cnt[i]<<" ";
	return 0;
}