//CSP-J2026 D by wyyinput
//Task name: card
//Date: 2026/10/31
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define pii pair<int,int>
#define pli pair<ll,int>
#define pil pair<int,ll>
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;
const int N=5e5+55;
const int M=3e5+55;
int n,m;
int a[N];
int lst[N];
int fir[M];
int add[N];
int ans[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		fir[a[i]]=i;
	}
	for(int i=n;i;i--){
		lst[i]=fir[a[i]];
	}
	//枚举第几局游戏
	for(int i=1;i<=n;i++){
		if(lst[i]!=i){
			add[lst[i]]+=add[i]+1;
		}else if(i<n){
			add[i+1]+=add[i]+1;
			ans[a[i]]+=add[i]+1;
		}else{
			ans[a[n]]+=add[n]+1;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i<m){
			cout<<" ";
		}
	}
	cout<<"\n";
	return 0;
}