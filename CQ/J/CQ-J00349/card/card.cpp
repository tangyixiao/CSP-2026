#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int a,b,n,m,s,f[N],dp[N],f1[N],idx[N];
vector<int>v;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>f[i];
//		if(!idx[f[i]])idx[f[i]]=i;//初始化每个点数第一次在后面出现的位置 
//		else ne[idx[f[i]]]=i,idx[f[i]]=i;
//		v.push_back(f[i]);
	}
	for(int i=1;i<=n;i++){
		int idx=0;
		for(int j=1;j<=n;j++){
			if(f1[j])continue;
			if(f[j]==f[i]){
				idx=j;
				break;
			}
		}
//		cout<<idx;
		if(idx==0){
			for(int j=1;j<=n;j++){
				if(f[j]==f[i]){
					f1[j]=0;
					break;
				}
			}
			dp[f[i]]++;
			continue; 
		}
		for(int j=1;j<=n;j++){
			if(f1[j])continue;
//			cout<<f[j]<<" ";
			if(j>=idx)dp[f[j]]++,f1[j]=1;
		}
		f1[idx]=0;
	}
//	for(int i=1;i<=n;i++){
//		s+=dp[i];
//		f1[i]-=s;
//	}
	for(int i=1;i<=m;i++)cout<<dp[i]<<" ";
	return 0;
}

