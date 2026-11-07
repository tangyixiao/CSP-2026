#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[300005],t[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool flag=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i-1]>a[i]) flag=0;	
	}
	if(flag){
		for(int i=1;i<=n;i++) t[a[i]]++;
		for(int i=1;i<=m;i++) cout<<t[i]<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++){
		queue<int> q;
		for(int j=i;j<=n;j++){
			int cnt=0;
			while(cnt<q.size()){
				int x=q.front();
				q.pop();
				q.push(x);
				cnt++;
				if(x==a[j]){
					for(int i=1;i<=q.size()-cnt;i++) q.pop();
				}
				cnt++;
			}
			q.push(a[j]);
		}
		while(!q.empty()){
			t[q.front()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<t[i]<<" ";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
