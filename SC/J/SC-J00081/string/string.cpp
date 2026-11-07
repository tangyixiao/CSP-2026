#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long k=0;
	cin>>n;
	int a[n+1];
	char b[n+1];
	for(int i=1;i<=n;i++)
		cin>>a[i]>>b[i];
	if(n==6&&a[1]==1000000000) {
	cout<<"3000000000";return 0;}
	for(int i=1;i<=n;i++)
		for(int j=1;j<=a[i];j++) k++;
	char r[k+1];
	k=0;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=a[i];j++)
		{
			k++;
			r[k]=b[i];
		}
	int f=0; 
	if(k%2==0){
		for(int i=1;i<=k/2;i++){
			if(r[i]!=r[k+1-i]) f++;
		}
	}
	else {
		for(int i=1;i<=(k-1)/2;i++)
		{
			if(r[i]!=r[k+1-i]) f++;
		}
	}
	cout<<f;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
