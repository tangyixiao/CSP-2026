#include<bits/stdc++.h>
using namespace std;
const int maxn = 5e5+5;
int n,m;
int ans[maxn];
int cnt[maxn];
int arr[maxn];
vector<int>v;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	// 暴力模拟
	for(int i=1;i<=n;i++){
		// i 表示局数
		for(int j=i;j<=n;j++){
			if(cnt[arr[j]]){
				//清理 
				int index = find(v.begin(),v.end(),arr[j]) - v.begin();
				v.erase(v.begin()+index,v.end());
			}
			v.push_back(arr[j]);
			cnt[arr[j]] = 1;
		} 

//		for(int i=0;i<v.size();i++){
//			cout<<v[i]<<" ";
//		}
//		cout<<endl;
		for(int i=0;i<v.size();i++){
			ans[v[i]] ++;
		} 
		v.clear();
		memset(cnt,0,sizeof(cnt));
	} 
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
		/*
4 3
1 2 1 3

10 3
3 1 2 1 3 2 3 1 2 1
		*/
