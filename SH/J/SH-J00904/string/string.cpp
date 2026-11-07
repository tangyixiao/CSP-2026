#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;	
ll n;
struct node{
	ll x;
	char c;
}a[N]; 
void solve2(){//我认为的正解  
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x>>a[i].c;//input
	}
	//compare
	ll ans=0;
	int l=1,r=n;
	while(l<=r){
		int minx=min(a[l].x,a[r].x);
		if(a[l].c!=a[r].c){
			ans+=minx;
		}
		if(a[l].x==a[r].x){
			l++,r--;
		}else if(a[l].x>a[r].x){
			a[l].x-=minx;
			a[r].x-=minx;
			r--;
		}else{
			a[l].x-=minx;
			a[r].x-=minx;
			l++;
		}
	}
	if(l==r){
		ans+=a[l].x; 
	}
	cout<<ans;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	solve2();
	return 0;
} 
