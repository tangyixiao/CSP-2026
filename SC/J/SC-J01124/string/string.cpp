#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+10;
long long n;
deque<pair<long long,char> > q;

void init(){
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long ct;
		char c;
		cin>>ct>>c;
		q.push_back({ct,c});
	}
}

void solve(){
	long long ans=0;
	while(q.size()>1){
		long long f=q.front().first,b=q.back().first;
		char fc=q.front().second,bc=q.back().second;
		q.pop_front(); q.pop_back();
		if(f==b){
			if(fc==bc){
				continue;
			}else{
				ans+=f;
			}
		}else if(f>b){
			if(fc==bc){
				q.push_front({f-b,fc});
			}else{
				q.push_front({f-b,fc});
				ans+=b;
			}
		}else if(f<b){
			if(fc==bc){
				q.push_back({b-f,bc});
			}else{
				q.push_back({b-f,bc});
				ans+=f;
			}
		}
	}
	cout<<ans;
}


int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	init();
	solve();
	
	return 0;
}

/*

2
2 a
3 a

3
2 a
2 b
1 c

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b

*/