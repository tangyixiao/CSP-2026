#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int N=5e5+5;
int a[N];
int b[N];
int c[N];
int ss(int q,int p,int o){
	for(int i=o;i<p;i++){
		if(a[i]==q)return i;
	}
	return 0;
}
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int cnt=i;
		for(int j=i;j<=n;j++){
			if(ss(a[j],j,cnt)!=0){
				for(int k=ss(a[j],j,cnt);k<j;k++){
					c[k]=1;
					//cout<<k<<" ";
					//3 1 2 1 3 2 3 1 2 1 
				}
			}
		}
		//cout<<endl;
		for(int j=i;j<=n;j++){
			if(c[j]==1){
				c[j]=0;
				//continue;
			}
			//cout<<a[j]<<" ";
			else b[a[j]]++;
		}
		//cout<<endl;
		a[i]=0;
	}
	for(int i=1;i<=m;i++)cout<<b[i]<<" ";
	return 0;
}
