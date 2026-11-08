#include <bits/stdc++.h>
using namespace std;//priority_pueue<int,vector<int>,greater<int>>
long long int n,m,ans[500005];
struct ff{
	long long int s,x;
}a[200005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(long long int i=1;i<=n;i++)cin>>a[i].s ,a[i].x =-1;
	for(long long int i=1;i<=n;i++){
		for(long long int j=i+1;j<=n;j++){
			if(a[j].s ==a[i].s ){
				a[i].x =j;
				break;
			}
		}
	}
	//for(int i=1;i<=n;i++)cout<<a[i].x <<"*"<<endl;
	for(long long int i=1;i<=n;i++){
		long long int nn=-1;
		for(long long int j=i;j<=n;j++){
			if(nn<=j&&a[j].x ==-1)ans[a[j].s ]++;
			if(j>=nn)nn=a[j].x ;
		}
	}
	for(long long int i=1;i<=m-1;i++)cout<<ans[i]<<" ";
	cout<<ans[m];
	return 0;
}//如果有人csp考了401分我会很震惊的 
//为什么card4.ans是 "???′????????‰?ㄠ?ㄠ?ㄠ?ㄠ?ㄠ?ㄠ?ㄠ?ㄠ?ㄠ劳ㄠ?ㄠ?㈠?㈠?㈠有㈠?㈠?㈠?㈠?㈠?㈠?㈠?㈠"//一部分 
//为什么我代码的输出也是那玩意 ！！！！！！！！！ 
//RP++ 
