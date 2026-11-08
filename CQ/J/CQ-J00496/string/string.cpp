#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
struct node{
	int val;
	char c;
}a[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].val>>a[i].c;
	}
	int l=1,r=n,cnt1=a[1].val,cnt2=a[n].val,ans=0;
	while(l<r){
		ans+=(a[l].c!=a[r].c)*min(cnt1,cnt2);
		if(cnt1<cnt2){
			cnt2-=cnt1;
			l++;
			cnt1=a[l].val;
		}
		else if(cnt1==cnt2){
			l++;
			r--;
			cnt1=a[l].val;
			cnt2=a[r].val;
		}
		else{
			cnt1-=cnt2;
			r--;
			cnt2=a[r].val;
		}
	}
	cout<<ans;
	return 0;
}
