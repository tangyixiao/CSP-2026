#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n,m,sum=0;
	cin >> n >> m;
	int a[] = {};
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		a[i]and a[i+1];
		if(a[i]and a[i+1]){
			sum++;
		}
	}
	return 0;
}

