#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int M=500005;
int n,m;
int a[M];
int las[M]; 
int ans[M];
int flg[M];
vector <int> v[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(!las[a[i]]){
			las[a[i]]=i;
			v[a[i]].push_back(a[i]);
			for(int j=0;j<v[a[i+1]].size();j++){
				v[a[i]].push_back(v[a[i+1]][j]);
			}
			flg[a[i]]++;
		}
		else{
			flg[a[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=0;j<v[i].size();j++){
			ans[v[i][j]]+=flg[i];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];if(i!=m)cout<<" ";
	}
	return 0;
}