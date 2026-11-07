#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	queue<int>q;
	queue<int>p;
	queue<int>l;
	vector<bool>b(m+10,false);
	vector<int>ans(m+10);
	for(int x=1;x<=n;x++){
		int o;
		cin>>o;
		q.push(o);
	}
	for(int x=1;x<=n;x++){
		for(int y=1;y<x;y++){
			int o=q.front();
			q.push(o);
			q.pop();
		}
		for(int y=x;y<=n;y++){
			int z=q.front();
			if(!b[z]){
			int o=q.front();
			p.push(o);
			q.pop();
			b[z]=true;
			}
			else {
				b[z]=false;
				while(p.front()!=z){
				int o=p.front();
				l.push(o);
				p.pop();	
				}
				while(!p.empty()){
					p.pop();
					b[p.front()]=false;
				}
				while(!l.empty()){
				int o=l.front();
					p.push(o);
					l.pop();
				}
				int o=q.front();
				p.push(o);
				q.pop();
				b[z]=true;
			}
		}
		if(b[x]==true)ans[x]++;
		while(!p.empty()){
		int o=p.front();
			q.push(o);
			b[p.front()]=false;
			p.pop();
		}
	}
	for(int x=1;x<=m;x++)cout<<ans[x]<<" ";
	return 0;
}