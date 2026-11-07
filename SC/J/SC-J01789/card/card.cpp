#include<bits/stdc++.h>
using namespace std;
int n,m,a[500005],ans[500005];
bool b[500005];
stack<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		memset(b,0,sizeof b);
		for(int j=i;j<=n;j++){
			if(!b[a[j]]){
				s.push(a[j]);
				b[a[j]]=1;
			}else if(b[a[j]]){
				while(s.top()!=a[j]){
					if(s.top()==a[j]){
						break;
					}
					s.pop();
				}
			}
		}
		while(!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}