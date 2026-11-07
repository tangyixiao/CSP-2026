#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int a[500005],ans[500005];
bool b[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) b[j]=0;
		for(int j=i;j<=n;j++){
			if(b[a[j]]){
				while(s.top()!=a[j]){
					b[s.top()]=0;
					s.pop();
				}
			}
			else{
				b[a[j]]=1;
				s.push(a[j]);
			}
		}
		while(!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
} 