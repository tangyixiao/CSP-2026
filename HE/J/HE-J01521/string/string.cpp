#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,a[200000],num=0,zuo=0,you;
	char b[200000];
	cin>>n;
	you=n-1;
	for (int i=0 ; i<n ; i++)cin>>a[i]>>b[i];
	while (n--){
		int m=min(a[zuo],a[you]);
		if (b[zuo]!=b[you])num+=m;
		a[zuo]-=m;
		a[you]-=m;
		if (a[zuo]==0) zuo++;
		if (a[you]==0) you--;
	}
	cout<<num;
	return 0;
}
