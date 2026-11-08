#include<bits/stdc++.h>
using namespace std;
int a[10005];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin  >> a[i];
	}
	int maxn = -10000;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=m+n;j++){
			if((a[i]|a[i+j])>maxn){
				maxn = (a[i]|a[i+j]);
			}
		}
	}
	cout << maxn << endl;
	return 0;
}
