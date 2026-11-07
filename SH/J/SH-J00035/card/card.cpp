#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[600006];
int c[300009];
int d[300009];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(c,0,sizeof c);
		for(int j=i;j<=n;j++){
			if(c[a[j]]){
				memset(c,0,sizeof c);
			}
			c[a[j]]=1;
		}
		for(int j=1;j<=m;j++){
			if(c[j])d[j]++;
			//cout<<c[j]<<" ";
		}//cout<<endl;
	}for(int i=1;i<=m;i++) cout<<d[i]<<" ";
	return 0;
} 
