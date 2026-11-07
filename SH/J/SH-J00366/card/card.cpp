#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> aaa(300010);
int a[500010];
int aa[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		aaa[a[i]].push_back(i);
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;){
			aa[a[j]]++;
			for(auto v:aaa[a[j]]){
				j=v+1;
				break;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<aa[i]<<' ';
	}
	return 0;
}
