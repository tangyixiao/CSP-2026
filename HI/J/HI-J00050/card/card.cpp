#include <bits/stdc++.h>
using namespace std;

int a[500005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	srand(time(0));
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++) cin >> a[i];
	while(m--) cout << rand()%n+1 << " "; 
	return 0;
}
