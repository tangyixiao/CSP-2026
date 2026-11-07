#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n,m,a[500001],b[300001]{};
int vis[300001]{},Index=1,s[500001]{};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		memset(s,0,sizeof(s));
		Index=1;
		for(int j=i;j<=n;j++){
			if(vis[a[j]]){
				for(int k=vis[a[j]]+1;k<Index;k++){
					vis[s[k]]=0;
				}
				Index=vis[a[j]]+1;
			}
			else{
				s[Index]=a[j];
				vis[a[j]]=Index;
				Index++;
			}
		}
		for(int j=1;j<Index;j++){
			b[s[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout << b[i] << ' ';
	}
	return 0;
}
