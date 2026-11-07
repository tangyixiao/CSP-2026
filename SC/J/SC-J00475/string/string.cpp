#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const int N = 2e5 + 10;
int n,a[N];
char c[N];
deque<pair<int,int>>d;
ll ans,sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>a[i]>>c[i];
		sum+=a[i];
		d.push_back({a[i],c[i]});
	}
	ll ans=sum/2;
	if(sum%2) ++ans;
	while(!d.empty()){
		if(d.size()==1){
			if(d.front().first%2) ans-=(d.front().first/2+1);
			else ans-=d.front().first/2;
			break;
		}
		if(d.front().second==d.back().second){
			ans-=min(d.front().first,d.back().first);
			int df=d.front().first,db=d.back().first,ds=d.front().second;
			d.pop_back(),d.pop_front();
			if(df>db) d.push_front({df-db,ds});
			if(df<db) d.push_back({db-df,ds});
		}else{
			int df=d.front().first,db=d.back().first,ds=d.front().second,dd=d.back().second;
			d.pop_back(),d.pop_front();
			if(df>db) d.push_front({df-db,ds});
			if(df<db) d.push_back({db-df,dd});
		}
	}
	cout<<ans;
	return 0;
}