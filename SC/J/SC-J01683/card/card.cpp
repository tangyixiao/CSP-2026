#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500010],d[500010],s[500010],ans[500010],ii;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		ii=0;
		memset(s,0,sizeof s);
		memset(d,0,sizeof d);
		for(int j=i;j<=n;j++){
			if(s[a[j]]!=0){
				for(int k=s[a[j]]+1;k<=ii;k++){
					s[d[k]]=0;
				}
				ii=s[a[j]];
			}else{
				d[++ii]=a[j];
				s[a[j]]=ii;
			}
		}
		for(int i=1;i<=ii;i++){
			ans[d[i]]++;
		}
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}