#include<bits/stdc++.h>
#define frein(x) freopen(x".in","r",stdin)
#define freout(x) freopen(x".out","w",stdout)
#define cinios cin.tie(0)->ios::sync_with_stdio(0)
using namespace std;
using ll=long long;
const int N=5e5+10;
int a[N];
int ans[N];
int n,m;
void solve(int x){
	deque<ll> q1;
	deque<ll> q2;
	for(int i=x;i<=n;i++){
		int f=1;
		while(q1.size()){
			if(q1.back()==a[i]){
				q1.pop_back();
				f=0;
				break;
			}
			else{
				q2.push_back(q1.back());
				q1.pop_back();
			}
		}
		q1.push_back(a[i]);
		while(q2.size()){
			if(f) q1.push_front(q2.front());
			q2.pop_front();
		}
	}
	while(q1.size()){
		ans[q1.front()]++;
		q1.pop_front();
	}
}
int main(){
	frein("card");
	freout("card");
	cinios;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) solve(i);
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}