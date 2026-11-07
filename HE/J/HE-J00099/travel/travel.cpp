#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool f[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) 
		f[0]=1;
	if(f[0]&&s1[0]==s2[0]&&s1[1]==s2[1])
		f[1]=1;
	if(f[1]&&(s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]>='D'))
		f[2]=1;
	if(f[2]&&(char(s1[2]+1)==s2[2]||char(s2[2]+1)==s1[2]||(s1[2]=='F')&&(s2[2]=='D')||(s2[2]=='F')&&(s1[2]=='D'))) 
		f[3]=1;
	cout<<f[0]<<f[1]<<f[2]<<f[3];
	return 0;
}
//cout<<"rp++";
