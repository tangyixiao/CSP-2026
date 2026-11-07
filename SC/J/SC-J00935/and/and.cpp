#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,max,N=0;
	cin>>n>>m;
	int a[n],b[2^32];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(n==1){
		cout<<a[1];
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			b[N]&=a[j];
		}
		N++;
	}
	for(int i=1;i<=N;i++){
		if(max<=b[i]){
			max=b[i];
		}
	}
	cout<<max;
	return 0;
} 