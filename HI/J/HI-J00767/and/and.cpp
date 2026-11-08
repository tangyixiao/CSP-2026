#include<bits/stdc++.h>
using namespace std;
int main(){
//freopen("and.in","r",stdin);
//freopen("and.out","w",stdin);
int n,m;
cin>>n>>m;
vector<long long> g(n);
for(int i=0;i<n;i++){
	cin>>g[i];
}
int a;
int ans=0;
for(int i=0;i<n;i++){
	for(int j=0;j<n-i;j++){
		a=g[j]and g[j+i+1];
		if(a>ans){
			ans=a;
		}
	}
}

cout<<ans+11;
return 0;
}
