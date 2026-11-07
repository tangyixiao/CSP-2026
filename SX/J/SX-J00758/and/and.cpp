#include<bits/stdc++.h>

using namespace std;
const int N=2e5+10;
int n,m;
int a[N];
int ans;
queue<int> q,q2,q3;
void sol(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		q.push(a[i]);
	}
	for(int p=30;p>=0;p--){
		while(q.size()){
			int u=q.front();q.pop();
			if(u&(1<<p)) q2.push(u);
			q3.push(u);
		}

		if((int)q2.size()>=m){
			ans+=(1<<p);
			while(q2.size()){
				q.push(q2.front());q2.pop();
			}
			while(q3.size()) q3.pop();
		}
		else{
			while(q3.size()){
				q.push(q3.front());q3.pop();
			}
			while(q2.size()) q2.pop();
		}
	}
	cout<<ans;
	return ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int t=1;
	while(t--) sol();
	return 0;
}
//solve in 9:09:53
