#include<bits/stdc++.h>
using namespace std;
int n,m;
int card[200005];//手牌
int minta[200005];//每种在牌堆中的位置
int ans[200005];
vector<int>table;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	

	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&card[i]);
	}
	for(int t=1;t<=n;t++){
		memset(minta,-1,sizeof(minta));
		for(int i=t;i<=n;i++){
			if(minta[card[i]]>=0){
				for(int j=(int)table.size()-1;j>minta[card[i]];j--){
					minta[table[j]]=-1;
					table.pop_back();
				}
			}else{
				minta[card[i]]=(int)table.size();
				table.push_back(card[i]);
			}
			
		}
		for(int i=(int)table.size()-1;i>=0;i--){
			ans[table[i]]++;
			table.pop_back();
		}
	}
	for(int i=1;i<=m;i++){
		printf("%d ",ans[i]);
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
主动舍弃23~25
目标1~12
*/