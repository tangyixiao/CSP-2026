#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    cin>>a>>b>>c>>d;
    int cx1=(a[0]-'0')*10+(a[1]-'0');
    int cx2=(c[0]-'0')*10+(c[1]-'0');
    int ch1=(b[0]-'0')*10+(b[1]-'0');
    int ch2=(d[0]-'0')*10+(d[1]-'0');
    if(cx1==cx2) cout<<1;
    else{
    	cout<<"0000";
    	return 0;
	}
    if(ch1==ch2) cout<<1;
    else{
    	cout<<"000";
    	return 0;
	}
    if(b[2]-'A'<=2&&d[2]-'A'<=2||b[2]-'A'>2&&d[2]-'A'>2) cout<<1;
    else{
    	cout<<"00";
    	return 0;
	}
	if(b[2]=='C'&&d[2]=='A'||b[2]=='A'&&d[2]=='C') cout<<0;
	else cout<<1;
	return 0;
 } 