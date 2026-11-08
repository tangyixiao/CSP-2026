#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	int a=0,b=0,c=0,d=0;
	string x=a2.substr(2),y=b2.substr(2);
	if(a1==b1){
		a=1;
		if(a2.substr(0,2)==b2.substr(0,2)){
			b=1;
			if((x<="C"&&y<="C")||(x>"C"&&y>"C")){
				c=1;
				if(x=="A"&&y=="B"||x=="B"&&y=="C"||x=="D"&&y=="E"||y=="A"&&x=="B"||y=="B"&&x=="C"||y=="D"&&x=="E"){
					d=1;
					cout<<a<<b<<c<<d;
				}
				else cout<<a<<b<<c<<d;
			}
			else cout<<a<<b<<c<<d;
		}
		else cout<<a<<b<<c<<d;
	}
	else cout<<a<<b<<c<<d;
	return 0;
}
