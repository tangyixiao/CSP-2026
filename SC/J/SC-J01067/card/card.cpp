#include<bits/stdc++.h>
#define int long long

using namespace std;
int arry[500005];
int ans[300005];
signed main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0); 
	//注意！！一定要检查 解除注释 
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		cin>>arry[i];
	}
	for(int j = 1;j<=n;j++){
		map<int,int> cards;
		for(int i = j;i<=n;i++){
			int a = arry[i];
			if(cards[a]<=0){
				cards[a]=i;
				ans[a]++;
			}else{
//				cout<<cards[a]<<" \n";
				for(int k = cards[a]+1;k<i;k++){
					if(cards[arry[k]]>0){
						ans[arry[k]]--;
						cards[arry[k]] = -1;
					}
					
					
				}
				cards[a]=i;
				
			}
		}
	}
	for(int i = 1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
