#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],p,cnt,v,c,ans,w;
priority_queue<int> q;
queue<int> q1;
int main(){
	freopen("and.in","r","in");
	freopen("and.out","w","out");
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		q.push(a[i]);
	}
	int x=1;
	while(x<q.top()){
		x*=2;
		cnt++;
	}
	for(int i=cnt;i>0;i--){
		c=0;
		while(!q.empty()){
			if(q.top()>=x&&c<m){
				q1.push(q.top());
				q.pop();
				c++;
			}
			else break;
		}
		if(c==m){
			ans=q1.front();
			q1.pop();
			while(!q1.empty()){
				ans=ans&q1.front();
				q1.pop();
			}
			cout<<ans;
			return 0;
		}else{
			while(!q1.empty()){
				q.push(q1.front()-x);
				q1.pop();
			}
		}
		x/=2;
	}
	cout<<0;
	return 0;
}