#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,m,a[500002],cnt[300005];
stack<int>s;
int main(){
    freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int t[500002]={};
		for(int j=i;j<=n;j++){
			if(t[a[j]]==0){
				t[a[j]]++;
				s.push(a[j]);
			}
			else {
				while(s.top()!=a[j]){
					t[s.top()]--;
					s.pop();
				}
			}
		}
		while(!s.empty()){
			cnt[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}