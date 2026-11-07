#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,len;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	vector<pair<int,char> > a(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i].first>>a[i].second;
		len+=a[i].first;
	}
	int l=0,r=0,cnt=0;
	for(int i=1,j=n;i<j;i++){
		l+=a[i].first;
		if(l>=(len+1)>>1){
			for(int k=j;k>i;k--){
				if(a[i].second!=a[k].second)
					cnt+=a[k].first;
			}
			break;
		}
		while(r<l&&i<j){
			if(r+a[j].first<=l){
				if(a[i].second!=a[j].second)
					cnt+=a[j].first;
				r+=a[j--].first;
			}
			else{
				if(a[i].second!=a[j].second)
					cnt+=l-r;
				a[j].first-=l-r,r=l;
			}
		}
	}
	cout<<cnt;
	return 0;
}