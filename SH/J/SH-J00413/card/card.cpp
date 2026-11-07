#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	int p[m+5]={-1};
	int a[n+5];
	int c[m+5]={0};
	for(int i=1;i<=n;i++){
		cin>>a[i];	
	}
	for(int x=1;x<=n;x++){
		for(int i=x;i<=n;i++){
			if(p[a[i]]<0){
				p[a[i]]=i;
			}else{
				for(int j=p[a[i]];j<i;j++){
					p[a[j]]=-1;
				}
				p[a[i]]=i;
			}
		}
		for(int y=1;y<=m;y++){
			if(p[y]>0){
				c[y]++;
			}
		}
		for(int y=1;y<=m;y++){
			p[y]=-1;
		}
	}
	for(int i=1;i<=m;i++){
		if(i==a[1]){
			cout<<c[i]+1<<" ";
		}else{
			cout<<c[i]<<" ";
		}
	}
	return 0; 
} 
