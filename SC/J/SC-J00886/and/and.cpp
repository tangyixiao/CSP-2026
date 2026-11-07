#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=2e5+5;
int a[N];
map<int,int>mp;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mp[a[i]]+=1;
	}
	if(m==2){
		int mx=0;
		for(int i=1;i<=n;i++){
			if(mp[a[i]]>=2)
			mx=max(mx,a[i]);
		}
		cout<<mx;
		return 0;
	}
}