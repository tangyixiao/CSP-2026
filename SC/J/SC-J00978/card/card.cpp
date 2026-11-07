#include<bits/stdc++.h>
using namespace std;
stack <int> s;
int n,m,a[5000005],c[300005],q[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int k=1;k<=n;k++){
		memset(c,0,sizeof c);
		for(int i=k;i<=n;i++){
			if(c[a[i]]==0){
				c[a[i]]++;
				s.push(a[i]);
			}else{
				while(s.size()>0 && s.top()!=a[i]){
					c[s.top()]=0;
					s.pop();
				}
			}
		}
		while(!s.empty()){
			int t=s.top();
			s.pop();
			q[t]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<q[i]<<" "; 
	}
}