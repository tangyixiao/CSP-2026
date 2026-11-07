#include<bits/stdc++.h>
using namespace std;
int a,b;
char a1,a2,a3,b1,b2,b3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a1>>a2>>a3>>b>>b1>>b2>>b3;
	if(a==b) cout<<1;
	else {
	    cout<<"0000";
        return 0;
    }
    if(a1==b1&&a2==b2) cout<<1;
    else {
    	cout<<"000";
    	return 0;
	}
	if(a3=='A'&&b3=='B'||b3=='A'&&a3=='B'||a3=='B'&&b3=='C'||a3=='C'&&b3=='B'||a3=='D'&&b3=='F'||a3=='F'&&b3=='D') cout<<11;
	else if(a3='C'&&b3=='A'||a3=='A'&&b3=='C') cout<<10;
	else cout<<"00";
	return 0;
} 