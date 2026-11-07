#include<bits/stdc++.h>
using namespace std;
int a[25],b[3628805]; 
int f(int a)
{
	int s=1;
	for(int i=1;i<=a;i++)
		s*=i;
	return s;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m; 
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a,a+n+1);	
	int s=1;
	do 
	{
		int d=a[1];
		for(int i=2;i<=m;i++)
			d=d&(a[i]);
		b[s]=d;
		next_permutation(a,a+n+1);
		s++;
	}while(next_permutation(a,a+n+1)); 	
	sort(b,b+f(n)+1);
	cout<<b[f(n)];
	return 0;
} 
