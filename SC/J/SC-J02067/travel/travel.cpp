#include <bits/stdc++.h>
using namespace std;
#define int long long
char ab[15]={};
int t1,t2,t3,t4;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for (int i=1;i<=10;i++)cin>>ab[i];
	int k1=0,k2=0;
	for (int i=1;i<=2;i++)k1=k1*10+ab[i]-'0';
	for (int i=6;i<=7;i++)k2=k2*10+ab[i]-'0';
	if (k1==k2)t1=1;
	k1=k2=0;
	for (int i=3;i<=4;i++)k1=k1*10+ab[i]-'0';
	for (int i=8;i<=9;i++)k2=k2*10+ab[i]-'0';
	if (k1==k2&&t1)t2=1;
	if (ab[5]>='A'&&ab[5]<='C')k1=1;
	else k1=0;
	if (ab[10]>='A'&&ab[10]<='C')k2=1;
	else k2=0;
	if (k1==k2&&t1&&t2)t3=1;
	if (abs(ab[10]-ab[5])==1&&t1&&t2&&t3)t4=1;
	cout<<t1<<t2<<t3<<t4;
	return 0;
} 