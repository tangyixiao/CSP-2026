#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int rowr=(s1[0]-'0')*10+s1[1]-'0',rowx=(s2[0]-'0')*10+s2[1]-'0';
	int r=s1[2]-'A',x=s2[2]-'A';
	//cout<<rowr<<' '<<r<<' '<<rowx<<' '<<x<<'\n';
	cout<<(c1==c2)<<(c1==c2&&rowr==rowx)<<(c1==c2&&rowr==rowx&&((r<=2&&x<=2)||(r>2&&x>2)))<<(c1==c2&&rowr==rowx&&((r<=2&&x<=2&&abs(r-x)==1)||(r>2&&x>2)));
	return 0;
}

