#include<bits/stdc++.h> 
using namespace std;
long long a[200050];
long long n,m;
long long maxi=0;
long long z(int w,int e){
	long long ma=0;
	for(int j=w+1;j<n-e+1;j++){
		long long q=a[w]&a[j];
		ma=max(ma,q);
	}
	if(e==1){
		return ma;
	}else{
		return z(w+1,e-1);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n-1;i++){
		maxi=max(maxi,z(i,m-1));
	}
	cout<<maxi;
}

