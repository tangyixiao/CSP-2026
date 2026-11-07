#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n, m, a[N], cnt=0, c=n;
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin>>n>>m;
	for(int i=1; i<=n; i++) scanf("%d",&a[i]);
	for(int i=1; i<=n; i++){
		c--;
		for(int j=1; j<=i; j++){
			if(a[i]=a[j]) {
			a[j]=a[i];
		    a[i]=0;
		}
		else {
			a[n]=a[i];
		}
		if(c==0) break;
		
		}
		if(a[i]==a[i+1]) cnt++;
	}
	cout<<cnt; 
	return 0;
}
