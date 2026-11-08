#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=5e5+5;
int a[N],num[N],last[N],ans[N];
bool vis[N];
set<int> se; 
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		num[a[i]]++;
	}
	for(int i=n;i>=1;i--){
		if(vis[a[i]]==false){
			vis[a[i]]=true;
			last[a[i]]=i;
			se.insert(i);
		}
	}
	for(int x:se) num[a[last[a[x+1]]]]+=num[a[x]]; 
	for(int i=1;i<=m;i++) cout<<num[i]<<' ';
	return 0;
}
/*10 3
3 1 2 1 3 2 3 1 2 1*/
