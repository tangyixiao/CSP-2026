#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=5e5+60;
int n,m;
int a[N];
unordered_map<int,int>mp;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		vector<int>e;
		for(int j=i;j<=n;j++){
			int it=find(e.begin(),e.end(),a[j])-e.begin();
			int sj=e.size()-it;
			while(sj--)e.pop_back();
			e.push_back(a[j]);
		}
		for(int it:e)mp[it]++;
	}
	for(int i=1;i<=m;i++)
		cout<<mp[i]<<(i!=m?' ':'\n');
	return 0;
}
