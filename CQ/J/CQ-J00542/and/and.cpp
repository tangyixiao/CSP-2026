#include<bits/stdc++.h>
using namespace std;
long long a[500005],pw[54],ans=0;
priority_queue<long long> q1,q0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	pw[0]=1;
	for(int i=1;i<=31;i++)pw[i]=pw[i-1]*2;
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];q0.push(a[i]);
	}
	for(int i=30;i>=0;i--){
		while(q0.size()&&q0.top()>=pw[i]){
				q1.push(q0.top()-pw[i]);
			q0.pop();
		}
		if(q1.size()>=m){
			while(q0.size())q0.pop();
			while(q1.size()){
				q0.push(q1.top());q1.pop();
			}
			ans+=pw[i];
		}
		else{
			while(q1.size()){
				q0.push(q1.top());q1.pop();
			}
		}
	}
	cout<<ans;
	return 0;
}
