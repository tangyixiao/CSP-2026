#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,x;
	cin>>n>>x;
	int a[n+1],b[n+1],k=1;
	int c[100];
	string d;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<n;j++)
		{
			if(a[i]<a[j]){
				int z=a[i];
				a[i]=a[j];
				a[j]=z;
			}
		}
	}
	cout<<a[x];
	return 0;
} 
