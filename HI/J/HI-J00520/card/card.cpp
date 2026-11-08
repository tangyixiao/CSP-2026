#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n,m,j;
	cin >> n >> m;
	int b[] = {};
	for(int i=1;i<=n;i++){
		cin >> b[i];
	}
	for(int i=1;i<=n;i++){
		cout << b[i];
	}
	
	return 0;
}

