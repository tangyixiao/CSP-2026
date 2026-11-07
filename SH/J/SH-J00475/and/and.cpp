#include<bits/stdc++.h>
using namespace std;
#define int long long
int f[200005]={},b[200005]={};
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	int a[200005];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		b[i]=a[i]&a[i+1];
	}
	if(m==1){
		int maxn=0;
		for(int i=0;i<n;i++){
			maxn=max(a[i],maxn);
		}
		cout<<maxn;
		return 0;
	}
	else if(m==2){
		int f=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				f=max(f,a[i]&a[j]);
			}
		}
		cout<<f;
		return 0;
	}
	else if(m==n-1){
		int st=a[0],nd=a[1];
		for(int i=0;i<n-1;i++){
			st=(st&a[i]);
		}
		for(int i=1;i<n;i++){
			nd=(nd&a[i]);
		}
		cout<<max(st,nd);
		return 0;
	}
	else{
		int maxn=0;
		for(int i=0;i<n;i++) maxn=max(maxn,b[i]);
		cout<<maxn;
	}
	return 0;
} 
