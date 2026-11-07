#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string r,x;
	int R,X,r1,x1,a=0,b=0,c=0,d=0;
	cin>>R>>r>>X>>x;
	if(R==X){
		a=1;
		if(r[0]==x[0]&&r[1]==x[1]){
			b=1;
			if((r[2]=='D'||r[2]=='F')&&(x[2]=='D'||x[2]=='F')){
				c=1;
				d=1;
			}
			else if((r[2]=='A'||r[2]=='B'||r[2]=='C')&&(x[2]=='A'||x[2]=='B'||x[2]=='C')){
				c=1;
				r1=r[2]-'0';
				x1=x[2]-'0';
				if(r1-x1==1||x1-r1==1){
					d=1;
				}
			}
		}
	}
	cout<<a<<b<<c<<d;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
