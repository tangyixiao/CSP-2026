#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
struct node{
	char c;
	int data;
}a[N];
int n,ans;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].data>>a[i].c;
	}
	for(int i=1,j=n;i<j;){
		int cnt=min(a[i].data,a[j].data);
		if(a[i].c!=a[j].c)ans+=cnt;
		a[i].data-=cnt;
		a[j].data-=cnt;
		if(!a[i].data)i++;
		if(!a[j].data)j--;
	}
	cout<<ans<<"\n"; 
	return 0;
}

