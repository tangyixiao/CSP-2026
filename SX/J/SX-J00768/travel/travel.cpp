#include<bits/stdc++.h>
using namespace std;
int a1,a2,a3,a4;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a[0]==c[0]&&a[1]==c[1])a1=1;
	if(a1==1&&b[0]==d[0]&&b[1]==d[1])a2=1;
	if(a2==1){
		if((b[2]<='C'&&b[2]>='A'&&d[2]<='C'&&d[2]>='A')||(b[2]<='F'&&b[2]>='D'&&d[2]<='F'&&d[2]>='D'))a3=1;
	}
	if(a2==1&&a3==1){
		int l=b[2]-'a',r=d[2]-'a';
		if(abs(r-l)==1)a4=1;
		if(b[2]=='C'&&d[2]=='D')a4=0;
		if(b[2]=='D'&&d[2]=='C')a4=0;
	}
	cout<<a1<<a2<<a3<<a4;
	return 0;
}
