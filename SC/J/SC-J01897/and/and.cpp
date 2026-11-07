#include<bits/stdc++.h>
//#define int long long 
#define endl '\n'
#define YUANSHEN ios_base::sync_with_stdio(0);
#define QIDONG cin.tie(0);
#define inf 1e14
#define mod 998244353
#define frein freopen("and.in","r",stdin);
#define freout freopen("and.out","w",stdout);
#define pii pair<int,int>
using namespace std;
const int maxn=1e6+10;

int n,m,a[maxn],ans=0; 

multiset<int> s;

int tmp[maxn],tot=0;

void Solve(int pos){
	int cnt=0; tot=0;
	for(int i:s)if(i&(1<<pos))cnt++;
	for(int i:s)tmp[++tot]=i;
	if(cnt<m)return;
	for(int i=1;i<=tot;i++)
		if(!(tmp[i]&(1<<pos)))s.erase(s.find(tmp[i]));
	ans+=(1<<pos);
}

signed main(){
	YUANSHEN QIDONG
	frein freout
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i],s.insert(a[i]);
	for(int i=30;i>=0;i--)Solve(i);
	cout<<ans;
	return 0;
}