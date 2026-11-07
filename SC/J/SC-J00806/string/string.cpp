#include<bits/stdc++.h>
#define int long long
using namespace std;
struct Node{
	int len,cnt;
	char ch;
};
Node a[200005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].cnt>>a[i].ch;
		a[i].len=a[i-1].len+a[i].cnt;
	}
	int l=1,r=n;
	int ans=0;
	while(l<r){ 
		if(a[l].ch!=a[r].ch){
			ans+=min(a[l].cnt,a[r].cnt);
		}
		if(a[l].cnt<a[r].cnt){
			a[r].cnt-=a[l].cnt;
			l++;
		}
		else if(a[l].cnt>a[r].cnt){
			a[l].cnt-=a[r].cnt;
			r--;
		}
		else{
			l++;
			r--;
		} 
	}
	cout<<ans;
	return 0;
} 