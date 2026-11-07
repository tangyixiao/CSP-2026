#include<bits/stdc++.h>
using namespace std;
int n,m,j;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin.tie(nullptr);
	cout.tie(nullptr);
	stack<int> s;
	cin>>n>>m;
	vector<int> a(n+1,0);
	vector<bool> b(m+1,0);
	vector<int> ans(m+1,0);
	for(int i=0;i<n;i++){
		cin>>a[i];
		
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			s.push(a[j]);
			if(b[a[j]]==1){
				s.pop();
				while(s.top()!=a[j]){
					b[s.top()]=0;
					s.pop();
				}
			}
			b[a[j]]=1;
		}
		while(!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
		b=vector<bool>(m+1,0);
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}
