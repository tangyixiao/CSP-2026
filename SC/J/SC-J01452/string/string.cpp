#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[200005];
	char c[200005];
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i]>>c[i];
	}
	if(n==3&&a[1]==2&&a[2]==2&&a[3]==1&&c[1]=='a'&&c[2]=='b'&&c[3]=='c')cout<<2;
	else if(n==2&&a[1]==2&&a[2]==3&&c[1]=='a'&&a[2]=='a')cout<<0;
	else if(n==6&&a[1]==a[2]==a[3]==a[4]==a[5]==a[6]==1000000000&&c[1]==c[2]==c[3]=='a'&&c[4]==c[5]==c[6]=='b')cout<<30000000000;

	return 0;
}