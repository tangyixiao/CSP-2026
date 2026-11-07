#include <bits/stdc++.h>
using namespace std;
char a[5],b[5],c[5],d[5];
int i,j,k,l;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a[0]==c[0]&&a[1]==c[1])
		i=1;
	else
		i=0;
	if(b[0]==d[0]&&b[1]==d[1]&&i==1){
		j=1;
		if(b[2]=='A'&&d[2]=='B'||b[2]=='A'&&d[2]=='C'||b[2]=='B'&&d[2]=='C'||b[2]=='B'&&d[2]=='A'||b[2]=='C'&&d[2]=='A'||b[2]=='C'&&d[2]=='B'){
			k=1;
			if(b[2]=='D'&&d[2]=='F'||b[2]=='F'&&d[2]=='D'||b[2]=='A'&&d[2]=='B'||b[2]=='B'&&d[2]=='C'||b[2]=='C'&&d[2]=='B'||b[2]=='B'&&d[2]=='A')
				l=1;
			else
				l=0;
		}else{
			k=0;
			l=0;
		}
	}else{
		j=0;
		k=0;
		l=0;
	}
	cout<<i<<j<<k<<l;
	return 0;
}
