#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500002];
int J[500001];
int s[300002];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		int x=1;
		for(int j=1;J[j]!=0;j++)J[j]=0;
		for(int j=i;j<=n;j++){
			J[x]=a[j];
			x++;
			bool p=true;
			for(int k=j;k>1;k--)if(a[j]==J[k])p=false;
			if(!p){
				for(;J[x]!=a[j];x--)J[x]=0;
			}
		}
		for(int i=1;i<=x;i++)s[J[i]]++;
	}
	for(int i=1;i<=m;i++){
		cout<<s[i]<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
