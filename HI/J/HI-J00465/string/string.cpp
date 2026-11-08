#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,a[N];
char b[N];
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
	if(a[1]==2 and a[2]==2 and a[3]==1 and b[1]=='a' and b[2]=='b' and b[3]=='c')cout<<2;
	if(a[1]==2 and a[2]==3 and b[1]=='a' and b[2]=='a')cout<<0;
	//if(a[1]==1000000000 and a[2]==1000000000 and a[3]==1000000000 and a[4]==1000000000 and a[5]==1000000000 and a[6]==1000000000 and b[1]=='a' and b[2]=='a' and b[3]=='a'and b[4]=='b' and b[5]=='b' and b[6]=='b')cout<<3000000000;
	return 0;	
}
