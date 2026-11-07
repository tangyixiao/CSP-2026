#include<bits/stdc++.h>
using namespace std;

const int NM = 5e5;
int n,m;
int card[NM+4];
vector<int> A[NM+4];
int ans[NM+4];
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i = 1;i <= n;i++) cin>>card[i],A[card[i]].push_back(i);
//	for(int i = 1;i <= m;i++){
//		for(int a : A[i]) cout<<a<<' ';
//		cout<<'\n';
//	}
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= n;j = A[card[j]].back()+1) ans[card[j]]++; 
	}
	for(int i = 1;i <= m;i++) cout<<ans[i]<<' ';
	return 0;
}
