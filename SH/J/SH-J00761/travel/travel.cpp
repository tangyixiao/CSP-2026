#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int ac,as,bc,bs;
	char ap,bp;
	cin>>ac>>as>>ap>>bc>>bs>>bp;
	bool x=0,y=0,z=0,u=0;
	if(ac==bc){
		x=1;
		if(as==bs){
			y=1;
			if(ap>bp) swap(ap,bp);
//			cout<<ap<<" "<<bp<<endl;
			if((ap=='A'&&bp=='B')||(ap=='A'&&bp=='C')||(ap=='B'
			&&bp=='C')||(ap=='D'&&bp=='F')){
				z=1; u=1;
				if(ap=='A'&&bp=='C') u=0;
			}
		}
	}
	cout<<x<<y<<z<<u;
	return 0; 
}
