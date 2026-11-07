#include<bits/stdc++.h>
using namespace std;
int c1,c2,n1,n2;
char s1[5],s2[5],x,y;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>(s1+1)>>c2>>(s2+1);
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}else{
		n1=s1[1]*10+s1[2];
		n2=s2[1]*10+s2[2];
		if(n1!=n2){
			cout<<"1000";
			return 0;
		}else{
			x=s1[3],y=s2[3];
			if(x>='D' && y<='C' || x<='C' && y>='D'){
				cout<<"1100";
			}else{
				if(x=='A' && y=='C' || x=='C' && y=='A'){
					cout<<"1110";
				}else{
					cout<<"1111";
				}
			}
		}
	}
	return 0;
}