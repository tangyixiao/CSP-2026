#include<bits/stdc++.h>
using namespace std;

int a[20005],b[20005],ret[20005];
int n,m;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>b[i];
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			ret[i]=b[i];
		}
		for(int i=k;i<=n;i++){
			for(int j=k;j<i;j++){
			if(ret[i]==ret[j])
			{
				for(int l=k;l<=j+1;l++)
				ret[l]=0;
			}
			}
		}
		for(int i=k;i<=n;i++){
			a[ret[i]]++;
		}
	}
	for(int i=1;i<=m;i++)
	cout<<a[i]<<' ';
	return 0;
} 
