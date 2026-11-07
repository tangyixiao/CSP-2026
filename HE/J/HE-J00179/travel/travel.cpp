#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int f[4];
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) f[0]=1;
	if(s1[0]+s1[1]==s2[0]+s2[1]&&f[0]) f[1]=1;
	if((s1[2]<='C'&&s2[2]<='C'||s1[2]>='D'&&s2[2]>='D')&&f[1]==1) f[2]=1;
	if(abs(s1[2]-s2[2])==1&&f[2]==1) f[3]=1;
	for(int i=0;i<4;i++) cout<<f[i];
	return 0;
}
