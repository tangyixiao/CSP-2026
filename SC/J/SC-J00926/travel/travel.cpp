#include<bits/stdc++.h>
using namespace std;
typedef long long lint;

string c1,c2,s1,s2;
int a,b,c,d,t1,t2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(0)->sync_with_stdio(0);
	
	cin>>c1>>s1>>c2>>s2;
	a=(c1==c2);
	b=(s1.substr(0,2)==s2.substr(0,2));
	t1=s1[2]-'A'+1;
	t2=s2[2]-'A'+1;
	c=(t1<4&&t2<4)||(t1>3&&t2>3);
	d=abs(t1-t2)==1;
	
	printf("%d%d%d%d",a,a&&b,a&&b&&c,a&&b&&c&&d);
	
	return 0;
}