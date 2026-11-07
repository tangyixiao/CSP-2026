#include<bits/stdc++.h>
using namespace std;
int x[3];
char y,z;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string c,d;
	cin>>a>>c>>b>>d;
	if(a==b)
		cout<<"1";
	else{
		cout<<"0000";
		return 0;
	}
		x[1]=c[0]*10+c[1];
		x[2]=d[0]*10+d[1];
		y=c[2];
		z=d[2];
	if(x[1]==x[2])
		cout<<"1";
	else{
		cout<<"000";
		return 0;
	}
	if(y=='D'&&z=='F'||y=='F'&&z=='D'||y=='A'&&z=='B'||y=='B'&&z=='A'||y=='B'&&z=='C'||y=='C'&&z=='B'||y=='A'&&z=='C'||y=='C'&&z=='A')
		cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(y=='A'&&z=='C'||y=='C'&&z=='A')
		cout<<"0";
	else
		cout<<"1";
	return 0;
}
