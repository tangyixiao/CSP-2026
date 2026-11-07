#include<bits/stdc++.h>
using namespace std;
int a[200005],w[200005];
int main(){
	vector<int>p;
	queue<int>q;
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(int k=1;k<=n;k++){
		for(int i=k;i<=n;i++){
			q.push(a[i]);
		}
		for(int i=k;i<=n;i++){
			int a=q.front();
			q.pop();
			for(int j=0;j<p.size();j++){
				if(a==p[j]){
					int len=p.size();
					for(int t=j;t<len;t++){
						p.pop_back();
					}
				}
			} 
			p.push_back(a);
		}
		for(int i=0;i<p.size();i++){
			w[p[i]]++;
		}
		while(p.size())p.pop_back();
		while(q.size())q.pop();
	}
	for(int i=1;i<=m;i++){
		cout<<w[i]<<" ";
	}
	return 0;
} 