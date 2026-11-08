#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		cout<<1;
		char x,y,x1,y1;
		x=b[0];
		y=b[1];
		x1=d[0];
		y1=d[1];
		if(x==x1&&y==y1){
			cout<<1;
			char z,z1;
			z=b[2];
			z1=d[2];
			if(((z=='D'||z=='F')&&(z1=='D'||z1=='F'))||((z=='A'||z=='B'||z=='C')&&(z1=='A'||z1=='B'||z1=='C'))){
				cout<<1;
				char k,k1;
				k=z+1;
				k1=z-1;
				if(z1==k||z1==k1){
					cout<<1;
				}
				else cout<<0;
			}
			else cout<<0<<0;
		}
		else cout<<0<<0<<0;
	}
	else cout<<0<<0<<0<<0;
	return 0;
}
//Trick||Treat!
