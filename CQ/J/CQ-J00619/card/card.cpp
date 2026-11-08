#include<bits/stdc++.h>
#define int long long
//#define double long double
#pragma GCC optimize(2)
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
using namespace std;
const int M=5e5,N=3e5;
int n,m,a[M],ans[N];
//vector<int> v;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	//int bj[M]; //bj表示:第ai处是否还有？
	int last; //last:最后还有牌的地方
	for(int i=1;i<=n;i++){
		//v.clear(); //清空
		//for(int j=i;j<=n;j++) bj[j]=1;//清空,初始化为1(有牌) 
		last=i; //设最后为一 
		for(int j=i;j<=n;j++){
			//v.push_back(a[j]); //插入
			for(int la=last;la<j;la++){
				if(a[la]==a[j]){ //重复 
					/*for(int left=last;left<=la;left++){
						bj[left]=0;//标记为无牌 
					}*/
					last=j;
				}
				else continue;
			} 
		}
		for(int j=last;j<=n;j++) if(a[j]<=m) ans[a[j]]++;//有这个牌
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
/*
4 3
1 2 1 3
//3 1 4
*/
/*
10 3
3 1 2 1 3 2 3 1 2 1
//10 3 3
*/
