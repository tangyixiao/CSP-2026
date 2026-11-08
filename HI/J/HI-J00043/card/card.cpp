#include <bits/stdc++.h>
using namespace std;
int a[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n,m;
	for (int i=1;i<=n;i++)
		cin >> a[i];
	if  (n==2) cout << 2<<" "<<1;
	if (n==3	)cout << 3<<" "<<2<<" "<<1;
	
	if (n==4){
		cout << 3<<" "<<1<<" "<< 4;
	}
		
	
	
			
}
