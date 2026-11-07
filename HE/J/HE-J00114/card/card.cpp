#include<bits/stdc++.h>
using namespace std;
int n,m;
stack<int>s;
int a[500001];
int g[300001];
bool d[300001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=m;++i){
		g[i]=0;
	}
	for(int i=1;i<=n;++i){
		
		for(int j=1;j<=m;++j){
			d[j]=false;
		}
		while(!s.empty()){
			s.pop();
		}
		for(int j=i;j<=n;++j){
			if(d[a[j]]==true){
				while(!s.empty()){
					if(s.top()==a[j]){
						s.pop();
						break;
					} else {
						s.pop();
					}
				}
				s.push(a[j]);
			} else {
				s.push(a[j]);
				d[a[j]]=true;
				++g[a[j]];
			}
		}
	}
	for(int i=1;i<=m;++i)cout<<g[i]<<' ';
	return 0;
}
