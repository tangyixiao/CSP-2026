#include<bits/stdc++.h>
using namespace std;
const int M=1e5+10;
int l,r;
int a[M];
int b[M];
int cut[M];
int main(){
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	int n,k;cin>>n>>k;
	for(int i=1;i<=n;i++){
		 cin>>a[i];
	}
	for(int i=1;i<=n;i++){
for(int j=1;j<=i-1;j++){
	if(a[i]==a[j]){
	for(int x=1;x<=j-1;x++){
		a[x]=-1;
	}
	}
}
	for(int x=1;x<=i-1;x++){
			cut[a[x]]++;
	}
}
	for(int i=1;i<=k;i++) cout<<cut[i]<<" ";
	return 0;
}  
