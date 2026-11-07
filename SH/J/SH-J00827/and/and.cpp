#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200009;
int n,m;
int a[N];
int ma=0;
void dfs(int x,int t,int al){
	if(x==n) return;
	if(t>=m){
		ma=max(al,ma);
		return;
	}
	for(int i=x+1;i<=n;i++){
		dfs(i,t+1,(a[i]&al));
	}
}
bool cmp(const int&a,const int&b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,cmp);
	//for(int i=1;i<=n-m+1;i++) dfs(i,0,a[i]);
	ma=a[1];
	for(int i=1;i<=m;i++) ma=(ma&a[i]);
	cout<<ma;
	return 0;
} 
