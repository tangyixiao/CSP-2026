#include <bits/stdc++.h> 
using namespace std;
int a[105]
int main()
{
    freopen ("and.in""r""stdin");
    freopen ("and.out""w""stdout");
	int n,m;
	cin >> n>> m;
	int sum =0;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i] ;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++){
			sum += a[i];
		}
	}
	return 0;//不会 
}