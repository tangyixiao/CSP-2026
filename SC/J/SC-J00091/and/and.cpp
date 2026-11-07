#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[20005],mmax=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mmax=max(mmax,a[i]);
	}
	if(m==1) cout<<mmax;
	else if(m==2){
		mmax=-1;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				mmax=max(mmax,a[i]&a[j]);
			} 
		}
		cout<<mmax;
	}
	return 0;
} 