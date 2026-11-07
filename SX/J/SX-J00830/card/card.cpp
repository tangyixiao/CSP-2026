#include<bits/stdc++.h>
#define MAXN 100010
#define il inline
#define re register
#define ll long long
using namespace std;
ll n,m,cnt,a[MAXN];
ll vis[MAXN],first[MAXN],ans[MAXN];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	    if(!first[a[i]])first[a[i]]=i;
	}
	for(int i=0;i<m;i++){
		vis[i]=0;
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			vis[a[j]]++;
		}
	}
	for(int i=0;i<m;i++){
		cout<<vis[i]+1<<" ";
	}
}