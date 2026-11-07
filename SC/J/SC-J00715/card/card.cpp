#include<bits/stdc++.h>
using namespace std;
int n,a[500009],s[300009],m;
long long bs[500009],ans[300009];
int main(){
//	ios::sync_with_stdio(0);
//	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[a[i]]=i;bs[i]=1;
	}
	for(int i=1;i<=n;i++){
		if(s[a[i]]){
			bs[s[a[i]]+1]+=bs[i];
		}else{
			bs[i+1]+=bs[i];
		}
		ans[a[i]]+=bs[i];
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
} 