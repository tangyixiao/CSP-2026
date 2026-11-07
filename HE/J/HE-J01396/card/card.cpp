#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=5e5+5;
ll n,m,ans[N],a[N];
string k;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[n];
	}
	int op=1;
	stack<int>p;
	while(op<=n){
		bool b[N]={};
		for(int i=op;i<=n;i++){
			if(b[a[i]]==true){
				while(!p.empty()&&p.top()!=a[i]){
					p.pop();
					b[p.top()]=false;
					if(!p.empty()&&p.top()==a[i]){
						p.pop();
						break;
					}
				}
			}
			b[a[i]]=true;
			p.push(a[i]);
		}
		while(!p.empty()){
			ans[p.top()]++;
			p.pop(); 
		}
		op++;
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
