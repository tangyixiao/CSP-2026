#include<bits/stdc++.h>
using namespace std;
bool b[300005];
int c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int t=n;
	vector<int>l(n);
	for(int i=0;i<n;i++){
		cin>>l[i];
	}
	while(t--){
		stack<int>a;
		for(int k=0;k<n;k++){
			if(!b[l[k]]){
				b[l[k]]=true;
				a.push(l[k]);
			}
			else{
				while(!a.empty()){
					int u=a.top();
					a.pop();
					if(u==l[k])break;
				}
				a.push(l[k]);
			}
		}
		vector<int>p;
		bool k[300005];
		memset(k,false,sizeof(k)); 
		while(!a.empty()){
			int u=a.top();
			a.pop();
			c[u]++;
			//cout<<u<<' ';
			p.push_back(u);
			k[u]=true;
		}
		for(int i=0;i<n;i++){
			if(!k[l[i]]){
				p.push_back(l[i]);
				//cout<<l[i]<<' ';
			}
		}
		reverse(p.begin(),p.end());
		l=p;
	}
	for(int i=1;i<=n;i++)cout<<c[i]<<' ';
	return 0;
}
//4 3
//1 2 1 3
