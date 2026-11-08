#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500005];
int last[300005];
int ans[300005];
stack<int> s;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		int c=n-i+1;
		while(c>0){
			for(int j=i;j<=n;j++){
				c--;
				if(!last[a[j]]){
					last[a[j]]=j-i+1;
					s.push(a[j]);
				}
				else{
					for(int k=last[a[j]];k<j;k++){
						s.pop();
					}
					s.push(a[j]);
					last[a[j]]=j-i+1;
				}
			}
		}
		if(!s.empty()){
			for(int j=1;j<=s.size();j++){
				ans[s.top()]++;
				s.pop();
			}
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}

