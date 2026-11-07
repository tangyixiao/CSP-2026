#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m;
int a[N];
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	int a[n+5],c1=0,c2=0;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		if(a[i]==1)++c1;
		else ++c2;
	}
	if(a[n-1]==1) {
		cout<<n<<" "<<c2;
	}else{
		cout<<n<<" "<<c1;
	}
	return 0;
}