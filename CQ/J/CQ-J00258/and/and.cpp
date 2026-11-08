#include<bits/stdc++.h>
using namespace std;
long long a[1000000],vis[1000000]={0};
long long n,q;
int f(int m,int t){
	if(m==0)return t;
	int mx=0,j=0;
	for(int i=1;i<=n;i++){
		if(vis[i]==1){
			continue;
		}
		if((a[i] & t)>mx){
			mx=a[i] & t;
			j=i;
		}
	}
	vis[j]=1;
	return f(m-1,mx);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int g=f(q,1073741823);
	if(n==q){
		int l=a[1];
		for(int i=2;i<=n;i++){
			l=a[i] & l;
		}
		g=l;
	}else if(g==1073741823){
		g=0;
	}
	cout<<g;
	return 0;
} 
