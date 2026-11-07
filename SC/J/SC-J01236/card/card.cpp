#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
struct nothing{
	int num,pos;
};
int b[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		map<int,nothing> mp;
		stack<int> q;
		int len=0;
		for(int j=i;j<=n;j++){
			if(mp[a[j]].num!=0){
				while(len!=mp[a[j]].pos-1){
					int x=q.top();
					mp[x].num--;
					q.pop();
					len--;
				}
				q.push(a[j]);
				mp[a[j]].num++;
				mp[a[j]].pos=++len;
			}
			else{
				mp[a[j]].num++;
				mp[a[j]].pos=++len;
				q.push(a[j]);
			}
		}
		while(q.size()){
			b[q.top()]++;
			//cout<<q.top()<<' ';
			q.pop();
		}
		//cout<<'\n';
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<' ';
	}
	return 0;
} 