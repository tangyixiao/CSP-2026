#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,maxx=0,ans=0,maxn=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>maxx){
			maxx=a[i];
		}
	}
	
	for(int i=0;i<n;i++){
		ans=maxx;
		for(int j=0;j<m;j++){
			ans=ans&a[i+j];
		}
		if(ans>maxn){
			maxn=ans;
		}
	}
	cout<<ans;
	return 0;
}
