#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N];
long long ans[N];
bool wei[N];
void ss(int st){
	stack<int> s;
	int cnt=0;
	for(int i=1;i<=m;i++) {
		wei[i]=false;
	}
	for(int i=st;i<=n;i++){
		if(wei[a[i]]==false){
			wei[a[i]]=true;
			s.push(a[i]);
			ans[a[i]]++;
			
		}else{
			while(s.top()!=a[i]){
				--ans[s.top()];
				if(ans[s.top()]==0) wei[s.top()]=false;
				s.pop();
			}
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		ss(i);
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
