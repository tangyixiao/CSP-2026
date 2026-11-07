#include<bits/stdc++.h>
using namespace std;
struct person{
	int a,c;
	char s;
};
person p1,p2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>p1.a>>p1.c>>p1.s;
	cin>>p2.a>>p2.c>>p2.s;
	if(p1.a==p2.a){
		cout<<1;
		if(p1.c==p2.c){
			cout<<1;
			if(p1.s<='C'){
				if(p2.s<='C'){
					cout<<1;
					if(p1.s-p2.s==1 || p2.s-p1.s==1){
						cout<<1;
					}
					else{
						cout<<0;
					}
				}
				else{
					cout<<"00";
				}
			}
			else{
				if(p2.s>='D'){
					cout<<1;
					if(p1.s-p2.s==1 || p2.s-p1.s==1){
						cout<<1;
					}
					else{
						cout<<0;
					}
				}
				else{
					cout<<"00";
				}
			}
		}
		else{
			cout<<"000";
		}
		
	}
	else{
		cout<<"0000";
	}
	return 0;
}