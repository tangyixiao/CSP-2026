#include<bits/stdc++.h>
#define int long long
#define pb emplace_back
#define all(x) (x).begin(),(x).end()
using namespace std;
int cnt[30];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,tmp=0,ans=0;
	cin>>n;
	vector<pair<int,int> > v(n);
	for(int i=0;i<n;i++){
		int a;
		char b;
		scanf("%lld",&a);
		cin>>b;
		v[i].first=a;
		v[i].second=b-'a';
		cnt[b-'a']+=a;
		tmp+=a;
	}
	if(tmp%2!=0){
		int p=tmp/2+1;
		for(int i=n-1;i>=0;i--){
			p-=cnt[v[i].second];
			if(p<=0){
				cnt[v[i].second]--;
				tmp--;
				break;
			}
		}
	}
	int p=tmp/2;
	pair<int,int> x,y;
	for(int i=n-1;i>=0;i--){
		p-=cnt[v[i].second];
		if(p<=0){
			x.first=i;
			x.second=-p+1;
			break;
		}
	}
	if(x.second==1){
		y.first=x.first-1;
		y.second=cnt[y.first];
	}
	else{
		y.first=x.first;
		y.second=x.second-1;
	}
	while(tmp){
		if(x.first!=y.first)	ans++;
		tmp-=2;
		x.second++;
		if(x.second>cnt[x.first]){
			for(int i=x.first+1;i<n;i++){
				if(cnt[v[i].second]!=0){
					x.first=i;
					x.second=1;
					break;
				} 
			}
		}
		y.second--;
		if(y.second==0){
			for(int i=y.first-1;i>=0;i--){
				if(cnt[v[i].second]!=0){
					y.first=i;
					y.second=1;
					break;
				} 
			}
		}
	}
	printf("%lld",ans);
	return 0;
}