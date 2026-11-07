#include<bits/stdc++.h> 
using namespace std;
long long p[500050],g[500050];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	int flag;
	for(int i=1;i<=n;i++){
		flag=i-1;
		for(int j=flag+1;j<n;j++){
			for(int k=flag;k<j;k++){
				if(p[j]==p[k]){
					for(int x=j+1;x<=k;x++){
						p[x]=0;
					} 
					flag=j;
				}
			}
		}
		for(int i=flag;i<n;i++){
			g[p[i]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<g[i]<<" ";
	}
	
}

