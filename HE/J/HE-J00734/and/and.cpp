#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	int e[n+1];
	int j[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++){
		int s=a[i];
		while(s==0){
			int j=1,k=1;
			e[i]+=j;
			j*=10;
			s-=k;
			k*2;
		}
	}for(int i=0;i<n*(n-1)/2;i++){
		for(int k=i+1;k>i;k--){
			int s1=a[i],s2=a[k];
			j[i]=s1&s2;
		}
	}int maks;
	for(int i=0;i<n;i++){
		maks=a[i-1];
		if(a[i]>a[i-1]) maks=a[i];
	}cout<<maks<<"\n";
	
	return 0;
}

