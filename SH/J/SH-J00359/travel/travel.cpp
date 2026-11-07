#include<bits/stdc++.h>
using namespace std;
bool f1,f2,f3,f4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r1,r2,x1,x2;
	cin>>r1>>r2>>x1>>x2;
	if(r1==x1) f1=1;
	if(f1==1&&r2[0]==x2[0]&&r2[1]==x2[1]) f2=1;
	bool r=0,x=0;
	if(r2[2]=='A'||r2[2]=='B'||r2[2]=='C') r=1;
	if(x2[2]=='A'||x2[2]=='B'||x2[2]=='C') x=1;
	if(f2==1&&r==x) f3=1;
	if(f3==1&&abs(r2[2]-x2[2])==1) f4=1;
	cout<<f1<<f2<<f3<<f4;
	return 0;
} 
