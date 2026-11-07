#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+10;
int n,m;
queue<int>q,q2;
int ans=0;
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		q.push(x);
	}
	for(int i=30;i>=0;i--){
		queue<int>q_;
		while(!q.empty()){
			int x=q.front();
			if((1<<i)&x)q2.push(x);
			q_.push(x);
			q.pop(); 
		}
		if(q2.size()<m){
			
			while(!q_.empty()){
				int x=q_.front();
				q.push(x);
				q_.pop();
			}
			
		}
		else{
			ans+=(1<<i);
			
			while(!q2.empty()){
				int x=q2.front();
//				cout<<x<<' ';
				q.push(x);
				q2.pop();
			}
			
//			cout<<"\n";
		}
		while(!q_.empty()){
			q_.pop();
		}
		while(!q2.empty()){
			q2.pop();
		}
	}
	cout<<ans;
	return 0;
} 
