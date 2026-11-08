#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N=1e6+10;
int a[N];
int cmp(int a,int b){
	return a>b;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int maxt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxt=max(a[i],maxt);
	}
	if(m==1){
		cout<<maxt;
		return 0;
	}
	if(m==n){
		int mc=a[1];
		for(int i=2;i<=n;i++){
			mc=mc&a[i];
		}
		cout<<mc;
		return 0;
	}
	if(m==2){
		int mx=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mx=max(mx,(a[i]&a[j]));
			}
		}
		cout<<mx;
		return 0;
	}
	sort(a+1,a+n+1,cmp);
	int mx=a[1];
	for(int i=2;i<=m;i++){
		mx=mx&a[i];
	} 
	cout<<mx;
	return 0;
}
