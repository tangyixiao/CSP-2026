#include<bits/stdc++.h>
using namespace std;
int cx1,cx2,lh1,lh2,ps1,ps2;
string a,b;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>cx1>>a>>cx2>>b;
	ps1=(a[0]-'0')*10+(a[1]-'0');
	ps2=(b[0]-'0')*10+(b[1]-'0');
	lh1=a[2]-'A'+1;
	lh2=b[2]-'A'+1;
	//cout<<ps1<<' '<<ps2<<' '<<lh1<<' '<<lh2<<endl;
	if(cx1==cx2) cout<<1;
	else {cout<<"0000";return 0;}
	
	if(ps1==ps2) cout<<1;
	else {cout<<"000";return 0;}
		
	if((lh1<=3&&lh2<=3)||(lh1>=4&&lh2>=4)) cout<<1;
	else {cout<<"00";return 0;}
		
	if(abs(lh1-lh2)==1) cout<<1;
	else cout<<0;
	return 0;	
} 
// 02 01A 02 01B

