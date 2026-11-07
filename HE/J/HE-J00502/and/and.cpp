#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<long long> a,b;
long long cnt[60],ans;
void ac(long long x){
	int res=0;
	while(x){
		if(x%2==1){
			cnt[res]++;
		}
		x/=2;
		res++;
	}
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		long long x;
		cin>>x;
		a.push_back(x);
		ac(x);
	}
	for(int i=31;i>=0;i--){
		if(cnt[i]>=m){
			int si=a.size();
			memset(cnt,0,sizeof 0);
			int mod=pow(2,i);
			for(int i=0;i<si;i++){
				long long x=a[i],y=a[i];
				if((x/mod)%2==1){
					b.push_back(y);
					ac(y);
				}	
			}
			ans+=pow(2,i);
			a=b;
		}
	}
	cout<<ans;
	return 0;
}
