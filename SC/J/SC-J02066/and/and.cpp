#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m;
int a[2000005];
int g[2000005][33];
int vis[2000005];
bool check(){
	int sm=0;
	for(int i=1;i<=n;i++){
		bool fl=0;
		for(int j=1;j<=30;j++){
			if(vis[j]==1&&g[i][j]!=1){
				fl=1;
			}
		}
		if(!fl)sm++;
	}
//	cout<<sm<<endl;
	return sm>=m;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	/*
	开题
	发现check好像很简单
	判断是否有单调性
	好像没有
	枚举？？
	O(30*n)
	好像文件读写出了一点问题？？
	and拼成add了
	还剩1:51分
	*/
	cin>>n>>m;
//	cout<<n<<m<<endl;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vector<int>j;
		while(a[i]){
			int x=a[i]%2;
			j.push_back(x);
			a[i]/=2;
		}
		for(int k=0;k<j.size();k++){
			g[i][k+1]=j[k];
		}
	}
	for(int i=30;i>=1;i--){
		vis[i]=1;
		if(!check()){
			vis[i]=0;
		}
	}
	int ans=0;
	for(int i=1;i<=30;i++){
//		cout<<vis[i]<<" ";
		if(vis[i]){
			ans+=1<<(i-1);
		}
	}
//	cout<<endl;
	cout<<ans;
	return 0;
}