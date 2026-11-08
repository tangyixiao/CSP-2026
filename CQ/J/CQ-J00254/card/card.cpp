#include <bits/stdc++.h>
using namespace std;
int b[3005];
int main()
{
	freopen("r","card.in",stdin);
	freopen("w","card.out",stdout);
	int n,m,a[5005];
	cin >> n >> m;
	for (int i=1;i<=n;i++){
		cin >> a[i];
	}
	for (int i=1;i<=n;i++){
		int c[3005];
		for (int j=1;j<=m;j++)c[j]=0;
		for (int j=i;j<=n;j++){
			if (c[a[j]]!=0){
				for (int jj=c[a[j]]+1;jj<j;jj++){
					c[a[jj]]=0;
				}
			}
			c[a[j]]=j;
		}
		for (int j=1;j<=m;j++)
		{
			if (c[j]!=0)b[j]++; 
		}
	}
	for (int i=1;i<=m;i++){
		cout << b[i] << ' ';
	}
	return 0;
 } 
