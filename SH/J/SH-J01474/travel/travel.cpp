#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	string b,d;
	cin>>a>>b>>c>>d;
	int e,f;
	e=b[0]*10+b[1];
	f=d[0]*10+d[1];
	char g,h;
	g=b[2];
	h=d[2];
	if(a==c)
		cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
	if(e==f)
		cout<<"1";
    else{
		cout<<"000";
		return 0;
	}
	if((g=='A'&&h=='B'||g=='A'&&h=='C'||g=='B'&&h=='A'||g=='B'&&h=='C'||g=='C'&&h=='A'||g=='C'&&h=='B')||(g=='D'&&h=='F'||g=='F'&&h=='D'))
		cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(g=='A'&&h=='B'||g=='B'&&h=='A'||g=='B'&&h=='C'||g=='D'&&h=='F'||g=='F'&&h=='D')
		cout<<"1";
	else
		cout<<"0";
    return 0;
}
