#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int n;
pair<int,char> a[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int ai;
		char ci;
		cin>>ai>>ci;
		a[i]=make_pair(ai,ci);
	}
	int ans=0;
	for(int l=1,r=n;l<r;){
		if(a[l].second==a[r].second){
			if(a[l].first==a[r].first)l++,r--;
			else if(a[l].first<a[r].first)a[r].first-=a[l].first,l++;
			else a[l].first-=a[r].first,r--;
		}else{
			if(a[l].first==a[r].first)ans+=a[l].first,l++,r--;
			else if(a[l].first<a[r].first)ans+=a[l].first,a[r].first-=a[l].first,l++;
			else ans+=a[r].first,a[l].first-=a[r].first,r--;
		}
	}
	cout<<ans;
}