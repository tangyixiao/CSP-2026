#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
const int inf=0x3f3f3f3f;
const int N=2e6+9;
int m,n;
int a[200005];
bool vis[200005];
int _mx=INT_MIN;
int choose(int c,int num,int start){
	if(start>=n) return INT_MIN;
	if(c>m){
		return num;
	}
	for(int i=start;i<n;i++){
		if(c==1)num=a[i];
		if(!vis[i]){
			vis[i]=1;
			_mx=max(_mx,(choose(c+1,num&a[i],i+1)));
			vis[i]=0;
		}
	}
	return _mx;
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n==m){
		int num=a[0];
		for(int i=0;i<n;i++){
			num&=a[i];
		}
		cout<<num;
		return 0;
	}else if(m==1){
		int mx=INT_MIN;
		for(int i=0;i<n;i++){
			mx=max(a[i],mx);
		}
		cout<<mx;
		return 0;
	}
	cout<<choose(1,0,0);
	return 0;
}