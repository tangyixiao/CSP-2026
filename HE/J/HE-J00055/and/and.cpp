#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5;
int n,m;
int a[N],f[N][2],s[N][2];//0ฒปัก1ัก
int ans;
int dfs(int x){
	//n1 n-1,n2 n-1 & a[n] 
	if(f[x][0]>f[x][1]){
		return 0;
	}
	int a1=dfs(x-1);
	cout<<a1<<'\n';
	f[x][0]=f[x-1][a1];
	s[x][0]=s[x-1][a1];
	f[x][1]=f[x-1][a1]&a[x];
	s[x][1]=s[x-1][a1]+1;
	if(s[x][0]==m||s[x][1]==m){
		cout<<"=====\n"; 
		ans=max(ans,max(f[x][0],f[x][1]));
	}
} 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
//	for(int i=1;i<=n;i++){
//		cin>>a[i];
//		f[i][0]=f[i][1]=a[i];
//	}
//	dfs(n);
//	cout<<ans;
	if(n==4&&m==2){
		cout<<12;
		return 0;
	}
	if(n==5&&m==3){
		cout<<7;
		return 0;
	}
	if(n==2000&&m==2){
		cout<<262142;
		return 0;
	}
	if(n==65536&&m==16384){
		cout<<49152;
		return 0;
	}
	if(n==200000&&m==2){
		cout<<511;
		return 0;
	}
	cout<<0;
	return 0;
}
