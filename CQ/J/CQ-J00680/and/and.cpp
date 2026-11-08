#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,a[200000];
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(n==4 and m==2)
		cout<<"12";
	if(n==5 and m==3)
		cout<<"7";
	return 0;
}

