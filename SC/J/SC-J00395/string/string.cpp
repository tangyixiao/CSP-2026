#include<bits/stdc++.h>
using namespace std;
int a[200010];
char b[200010];
int c;long long n;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>c;
	for(int i=1;i<=c;i++)cin>>a[i]>>b[i];
	int o=1,oo=c;
	while(o<oo){
		int u=min(a[o],a[oo]);
		if(b[o]!=b[oo])n+=u;
		a[o]-=u;a[oo]-=u;
		if(a[o]==0)o++;
		if(a[oo]==0)oo--;
	}
	cout<<n;
	return 0;
}