#include<bits/stdc++.h>
using namespace std;

const int N=2*1e5+5;
int m,n,a[N],maxn[N],ans,p=0;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(p<a[j]){
				p=a[j];
			}
		}
		for(int j=1;j<=n;j++){
			if(a[j]==p){
				a[j]=0;
			}
		}
		maxn[i]=p;
		p=0;
	}
	ans=maxn[1];
	for(int i=2;i<=m;i++){
		ans=ans&maxn[i];
	}
	cout<<ans;
	return 0;
} 
