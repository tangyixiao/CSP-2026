#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FN "and"
int n,m,ans,ts,ct,a[200005];
int main(){
	freopen(FN".in","r",stdin);
	freopen(FN".out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=29;i>=0;i--){
		ts=ans|(1<<i);ct=0;
		for(int j=1;j<=n;j++){
			if((a[j]&ts)==ts)ct++;
		}
		if(ct>=m)ans|=(1<<i);
	}
	cout<<ans;
	return 0;
}
//2min
