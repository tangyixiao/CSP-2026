#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e5+5,M=3e5+5;
int n,m;
int a[N],ans[M],t[M];//t[i]:卡牌i第一次出现的位置
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vector <int> nc;//现在卡牌
		nc.push_back(0);
		memset(t,-1,sizeof(t));
		for(int j=i;j<=n;j++){
			if(t[a[j]]!=-1){
				int fi=t[a[j]];//firstidx
				for(int i=fi;i<=nc.size()-1;i++){
					t[nc[i]]=-1;
				}
				for(int i=0;i<=nc.size()-fi+1;i++){
					nc.erase(nc.begin()+fi);
				}
				nc.push_back(a[j]);
				t[a[j]]=nc.size()-1;
			}
			else{
				nc.push_back(a[j]);
				t[a[j]]=nc.size()-1;
			}
		}
		//cout<<nc.size()-1<<"\n";
		for(int i=1;i<=nc.size()-1;i++){
			ans[nc[i]]+=1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}