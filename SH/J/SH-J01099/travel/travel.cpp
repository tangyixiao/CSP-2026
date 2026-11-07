#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		a=1;
		string g1,g2;
		g1=s1[0]+s1[1];
		g2=s2[0]+s2[1];
		if(g1==g2){
			b=1;
			int w1,w2;
			w1=s1[2]-'A';
			w2=s2[2]-'A';
			if((w1<=2 && w1>=0 && w2>=0 && w2<=2) || (w1<=4 && w1>=3 && w2>=3 && w2<=4)){
				c=1;
				if(abs(w1-w2)==1){
					d=1;
				}
				else{
					d=0;
				}
			}
			else{
				c=0;d=0;
			}
		}
		else{
			b=0;c=0;d=0;
		}
	}
	else{
		a=0;b=0;c=0;d=0;
	}
	cout<<a<<b<<c<<d<<endl;
	return 0;
} 
