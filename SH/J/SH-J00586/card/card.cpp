#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int n,m,b[500005],ans[500005];
bool a[500005]={};
int main(){
	freopen(stdin,"card.in",r);
	freopen(stdout,"card.out",w);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[b[j]]!=0){
				while(s.top()!=b[j]){
					a[s.top()]=0;
					s.pop();
				}
			}
			a[b[j]]=1;
			s.push(b[j]);
		}
		for(int j=1;j<=m;j++){
			if(a[j]){
				ans[j]++;
			}
			a[j]=0;
		}
	}
	for(int j=1;j<=m;j++){
		cout<<ans[j]<<" ";
	}
	return 0;
}
