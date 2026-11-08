#include<bits/stdc++.h>
using namespace std;
int n,m,a[210000],ans,ar[210000],empty[210000];
bool dig[210000][35];
void dfs(int in,int arr[],int backup[],int len){
	if(in==0||len<m)return;
	int nowlen=0;
	for(int i=1;i<=len;i++){
//		cout<<"准备："<<backup[i]<<"  "<<a[backup[i]]<<"  "<<dig[a[backup[i]]][in]<<endl;
		if(dig[backup[i]][in]){
//			cout<<"backup[i]"<<backup[i]<<"过了第"<<in<<"关!\n";
			nowlen++;
			arr[nowlen]=backup[i];
		}
	}
	if(nowlen>=m){
		ans+=pow(2,in-1);
		dfs(in-1,empty,arr,nowlen);
	}else{
		dfs(in-1,empty,backup,len);
	}
}
int main(){
    ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		ar[i]=i;
		cin>>a[i];
		int digi=0,num=a[i];
		while(num){
			digi++;
			dig[i][digi]=num%2;
			num/=2;
		}
//		for(int j=1;j<=30;j++){
//			cout<<dig[i][j]<<' ';
//		}
//		cout<<endl;
	}
	dfs(31,empty,ar,n);
	cout<<ans;
    return 0;
}
/* 
    This file is encoded by UTF-8
    直接一个我不知道叫啥的算法
	哦对了倍增 
	似乎是倍减？
	先预处理dig[i][j]=第i个数第j位 
	
	小贪心 看dp[1~n][i]=1的个数有没有m个
	有的话把那m个选出来
	ans+=2^i-1
	i--
	再到第一步
	i<0时结束 
	复杂度O(n log max(a)) ~= 210000*30(6300000)
    10:33做完了
    我要AK CSP-J!
	11:55大样例过了
*/