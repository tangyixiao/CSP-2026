#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n]={0};
	int b[m+1]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		int w=0;
		vector<int> c(n,0);
		for(int j=i;j<n;j++){
			int op=c.size();
			for(int k=0;k<c.size();k++){
				if(a[j]==c[k]){
					op=k;
					break;
				}
			}
			for(int k=op;k<=w;k++){
				c[k]=0;
			}
			if(op!=c.size()) w=op;
			c[w]=a[j];
			w++;
		}
		for(int j=0;j<c.size();j++){
			b[c[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
