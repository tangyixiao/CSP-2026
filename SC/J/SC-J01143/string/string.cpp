#include<bits/stdc++.h>
using namespace std;
const int N=2e5+3;
#define ll long long
ll n,m,k,ans;
struct node{
	ll num;
	char c;
}a[N];
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c;
	}
	ll l=1,r=n;
	while(l<r){
		ll minn=min(a[l].num,a[r].num);
		if(a[l].c==a[r].c){
			if(a[l].num>a[r].num){
				a[l].num-=minn;
				r--;
			}else{
				a[r].num-=minn;
				l++;
			}
		}else{
			if(a[l].num>a[r].num){
				a[l].num-=minn;
				ans+=minn;
				r--;
			}else{
				a[r].num-=minn;
				ans+=minn;
				l++;
			}
		}
	}
	cout<<ans;
	return 0;
}