#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
using ll=long long;
ll ans;
ll n,mx=-1;
struct node{
	int size;
	char s;
}a[N];
ll c[N];
ll cnt;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	if(n==1){
	cout<<0;return 0;	
	}
	for(int i=1;i<=n;i++){
		cin>>a[i].size>>a[i].s;	
		cnt+=a[i].size;
		char p=a[i].s;
		int pos=p-'0';
		c[pos]+=a[i].size;
	}
	for(int i=1;i<=n;i++){
		char p=a[i].s;
		int pos=p-'0';
		mx=max(mx,c[pos]);
	}	
	if(n%2==0){
		cout<<cnt-mx;
	}else if(n%2!=0){
		cout<<cnt-mx-1;
	}
	return 0;
}

