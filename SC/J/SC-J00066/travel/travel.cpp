#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool f1=(c1==c2),f2=(f1&&s1[0]==s2[0]&&s1[1]==s2[1]),f3,f4;
	if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D')) f3=1&&f2;
	if((s1[2]>='D'&&s1[2]+s2[2]=='D'+'F')||(abs(s1[2]-s2[2])==1&&s1[2]+s2[2]<'C'+'C')) f4=1&&f2;
	cout<<f1<<f2<<f3<<f4;
	return 0;
}