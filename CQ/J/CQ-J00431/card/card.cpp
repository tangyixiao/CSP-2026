#include<bits/stdc++.h>
using namespace std;

const int N = 5e5+10;
const int M = 3e5+10;

int a[N];
int ans[M];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m; //共n张牌 m种牌 
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	
	for(int t = 1;t<=n;t++){
		bool flag[M] = {}; //记录桌上是否有牌 flag[i] 点数为 i的牌是否存在桌面上 
		vector<int>mark; //存储桌面上的牌 
		
		for(int i = t;i<=n;i++){
			if(flag[a[i]] == 1){ //在前面的牌中找到相同的点数 
				while(mark.size()>0 && mark.back() != a[i]){
					flag[mark.back()] = 0;
					mark.pop_back();
				}
				//不删除最后一个 = 删除后再放置牌
			 
			}else{ //桌上无相同点数的牌 
				flag[a[i]] = 1;
				mark.push_back(a[i]);
			}
		}
		
		for(int i = 0;i<mark.size();i++){
			ans[mark[i]]++; //将桌上剩余的牌的点数登记 
		}
	}
	
	for(int i = 1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
