#include<bits/stdc++.h>
using namespace std;
const int N=1000009;
char c[N];
int a[N],ans[N];
vector<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			for(int k=0;k<q.size();k++){
				if(a[j]==q[k]){
					for(int b=k;b<q.size();b++)q[b]=0;
					break;
				}
			}
			q.push_back(a[j]);
		}
		int temp=1;
		while(temp<=m){
			for(int j=0;j<q.size();j++)
				if(q[j]==temp)ans[temp]++;
			temp++;
		}
		q.clear();
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i];
		if(i==m)cout<<"\n";
		else cout<<" ";
	}
	return 0;
}
