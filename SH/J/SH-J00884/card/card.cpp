#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010],b[300010],c[500010];
bool cnt[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int st;
			for(int k=1;k<=n;k++)if(c[k]==j){
				st=k;break;
			}for(int k=st+1;k<=n;k++)c[k]=0;
		}for(int j=1;j<=m;j++){
			b[c[j]]++;c[j]=0;
		}
	}for(int i=1;i<=m;i++)cout<<b[i]<<' ';
	return 0;
}
