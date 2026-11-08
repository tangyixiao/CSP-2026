#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string x1,x2,y1,y2;
	cin >> x1 >> x2 >> y1 >> y2;
	bool a=1,b=0,c=0,d=0;
	for(int i=0;i<2;i++) {
		if(x1[i]!=y1[i]) a=0;
	}
	if(((x2[0]==y2[0])||(x2[1]==y2[1]))&&(a==1)) b=1;
	int x=x2[2]-64,y=y2[2]-64;
	bool t=0;
	if(x<=3&&y<=3) t=1; 
	if(x>3&&y>3) t=1; 
	if(t==1&&b==1){
		if((x2[2]==y2[2]+1||x2[2]==y2[2]-1||(x2[2]=='D'&&y2[2]=='F')||(y2[2]=='D'&&x2[2]=='F'))&&(a==1&&b==1)){
			d=1;
			c=1;
		}
		else if((x2[2]=='A'&&y2[2]=='C')||(y2[2]=='A'&&x2[2]=='C')) c=1;
	}
	cout << a << b << c << d;
	return 0;
} 
