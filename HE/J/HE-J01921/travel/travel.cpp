#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char n;
	string c2,c4;
	int a=0,b=0,c=0,d=0,c1,c3;
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3){
		a=1;
		if(c2[0]==c4[0]&&c2[1]==c4[1]){
			b=1;
				if((c2[2]>='A'&&c2[2]<='C'&&c4[2]>='A'&&c4[2]<='C')||(c2[2]>='D'&&c2[2]<='F'&&c4[2]>='D'&&c4[2]<='F')){
					c=1;
					if(c2[2]+1==c4[2]||c2[2]-1==c4[2]||c4[2]+1==c2[2]||c4[2]-1==c2[2]){
						if((c2[2]=='C'&&c4[2]!='D')||(c4[2]=='C'&&c2[2]!='D')){
							d=1;
						}
						d=1;
						cout<<a<<b<<c<<d;
					}
				}
		}
	}else cout<<"0000";
	return 0;
}
