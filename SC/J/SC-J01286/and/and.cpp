#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int qpow(int x,int y){
	int ans=1;
	while(y){
		if(y%2)ans*=x;
		x*=x,y/=2;
	}
	return ans;
}
signed main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,ans=0;cin>>n>>m;
	vector<vector<bool> >A(n,vector<bool>(32));
	vector<int>vis(32);
	for(int i=0;i<n;i++){
		int input;cin>>input;
		for(int j=0;input&&j<n;j++){
			if(input%2)A[i][j]=1,vis[j]++;
			input>>=1;
		}
	}
	for(int i=30;i>=0;i--){
		if(vis[i]<m)continue;
		int flag=0;
		vector<vector<bool> >B(0,vector<bool>(32));
		for(int j=0;j<A.size();j++)if(A[j][i])flag++,B.push_back(A[j]);
		if(flag>=m)ans+=qpow(2,i),A=B;
	}
	cout<<ans;
	return 0;
}