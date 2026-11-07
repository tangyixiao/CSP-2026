#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[500010],t[300010]={};
	cin>>n>>m;
	if(n<=5){
		for(int i=1;i<=n;i++) cin>>a[i],t[a[i]]+=i;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				bool f=0;
				for(int k=i;k<j;k++){
					if(a[k]==a[j]) f=1;
					if(f) t[a[k]]--;
				}
			}
		}
		for(int i=1;i<=m;i++) cout<<t[i]<<" ";
	}
	else{
		vector<vector<int> >v(n+10,vector<int>(m+10,0));
		for(int i=1;i<=n;i++){
			cin>>a[i];
			for(int j=1;j<=m;j++) v[i][j]=v[i-1][j];
			v[i][a[i]]++;
		}
		for(int i=0;i<n;i++){
			int mmax=-1;
			for(int j=1;j<=m;j++) mmax=max(mmax,v[n][j]-v[i][j]);
			for(int j=1;j<=m;j++)
				if(v[n][j]-v[i][j]==mmax) t[j]++;
		}
		for(int i=1;i<=m;i++) cout<<t[i]<<" ";
	}
	return 0;
}
