#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n]={0};
	int m1[m]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int k=0;k<n;k++){
	long long b[n]={0};
	b[0]=a[k];
	int d=1;
	for(int i=k+1;i<n;i++)
	{
	for(int j=0;j<d;j++)
		{
		if(b[j]==a[i]){d=j;break;}
		}
	b[d]=a[i];d++;
	}
	for(int i=0;i<d;i++){
	m1[b[i]-1]++;
	}
	}
	for(int l=0;l<m;l++){
		cout<<m1[l]<<" ";
	}
	return 0;
}