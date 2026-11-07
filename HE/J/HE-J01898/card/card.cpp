#include<bits/stdc++.h>
using namespace std;
int a[5000010];
int s[3000010];
int ans[3000010];
int main(){
	freopen("card.in","r",stdin);	
	freopen("card.out","w",stdout);
	
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vector<int> q; 
		memset(s,0,sizeof(s));
		for(int j=i;j<=n;j++){
			if(s[a[j]]!=0){
				int p=s[a[j]];
				for(int k=p;k<=q.size();k++){
					q[k]=0;
				}
			}
			s[a[j]]=j;
			q.push_back(a[j]);
		}
		memset(s,0,sizeof(s));
		for(int j=0;j<q.size();j++){
			s[q[j]]++;
		}
		for(int j=1;j<=m;j++){
			if(s[j]){
				ans[j]++;
			}
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}
