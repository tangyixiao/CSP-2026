#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
ll mx=0;
int n,m;
ll a[N];
vector<ll>b;
void check(int s){
	if(s>n)return;
	if(b.size()==m){
		ll ans=0;
		for(int i=0;i<b.size();i++){
			if(i==0)ans=b[i];
			//cout<<b[i]<<" ";
			else ans=(ans&b[i]);
		}
		mx=max(mx,ans);
		return;
	}
	b.push_back(a[s]);
	check(s+1);
	b.pop_back();
	check(s+1);
	return;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
		return 0;
	} 
	n++;
	check(1);
	cout<<mx;
	return 0;
}  

