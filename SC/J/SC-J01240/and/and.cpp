#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
//void out(int n){
//	if(n>0)out(n/2),cout<<n%2;
//	else cout<<n%2;
//}
//bool cmp(int x,int y){
//	int k=max(log2(x),log2(y));
//	for(int i=k;i>=0;i--){
//		if((x&(1<<k))!=(y&(1<<k))){
//			return (x&(1<<k))>(y&(1<<k));
//		}
//	}
//	return x>y;
//}
vector<int>a;
int n,m,ans,mx;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	a.resize(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mx=max(mx,a[i]);
	}
    int k=log2(mx);
	for(int i=k;i>=0;i--){
		int cnt=0;
		for(int j=1;j<a.size();j++){
			if(a[j]&(1<<i))cnt++;
		}
		if(cnt>=m){
			for(int j=1;j<a.size();){
				if((a[j]&(1<<i))==0){
					a.erase(a.begin()+j);
				}
				else j++;
			}
			ans+=(1<<i);
		}
	}
	cout<<ans;
	return 0;
}
//鹏北海，凤朝阳，又携书剑路茫茫