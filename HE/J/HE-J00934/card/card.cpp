#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
const int M=3e3+10;
int a[N]={};
int n,m;
int s[M][M]={};
int d[M]={};
int ans[M]={};
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(s[a[i]][0]==0){
			s[a[i]][0]=s[a[i+1]][0]+1;
			s[a[i]][1]=a[i];
			for(int j=2;j<=s[a[i]][0];j++){
				s[a[i]][j]=s[a[i+1]][j-1];
			}
		}
		
		for(int j=1;j<=s[a[i]][0];j++){
			ans[s[a[i]][j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
} 
