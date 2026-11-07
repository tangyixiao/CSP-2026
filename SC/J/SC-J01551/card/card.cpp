#include<bits/stdc++.h>
using namespace std;
int sum[500001];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int lxr[n+1];
	for(int x=1;x<=n;x++){
		for(int i=1;i<=n;i++){
			if(i<x)
				lxr[i]=-1;
			else
				lxr[i]=a[i];
		}
		for(int i=2;i<=n;i++){
			int l=0,r=0;
			for(int j=1;j<=i;j++){
				if(lxr[i]==lxr[j]){
					l=j;
					r=i-1;
				}
			}
			for(int j=l;j<=r;j++)
				lxr[j]=-1;
		}
		for(int s=1;s<=m;s++)
			for(int i=1;i<=n;i++)
				if(lxr[i]==s)
					sum[s]+=1;
	}
	for(int i=1;i<=m;i++)
		cout<<sum[i]<<' ';
	return 0;
}