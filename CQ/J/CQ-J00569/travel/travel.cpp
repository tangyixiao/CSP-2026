#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>b2;
	bool c1=a1==a2;
	bool c2=c1&&a2[0]==b2[0]&&a2[1]==b2[1];
	bool c3=c2&&(a2[2]<='C'&&b2[2]<='C'||a2[2]>='D'&&b2[2]>='D');
	bool c4=c3&&(a2[2]-1==b[2]||a2[2]+1==b[2]);
	cout<<int(c1)<<int(c2)<<int(c3)<<int(c4);
	return 0;
}
