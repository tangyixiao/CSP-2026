#include<bits/stdc++.h>
using namespace std;
struct p{
	string c,z;
}r,x;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>r.c;
	cin>>r.z;
	cin>>x.c;
	cin>>x.z;
	if(r.c!=x.c)printf("0000");
	else{
		printf("1");
		if(r.z[0]!=x.z[0]||r.z[1]!=x.z[1])printf("000");
		else{
			printf("1");
			if((r.z[2]<='C'&&x.z[2]<='C')||(r.z[2]>'C'&&x.z[2]>'C')){
				printf("1");
				if(abs(r.z[2]-x.z[2])==1)printf("1");
				else printf("0");
			}
			else printf("00");
		}
	}
	return 0;
}