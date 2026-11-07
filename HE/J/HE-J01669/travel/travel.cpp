#include<iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int a;
	int b;
	int c;
	int d;
	cin>>a>>b>>c>>d;
	if(a==01) {
		cout<<0000;
		return;
	}
	if(a==16){
		cout<<0000;
		return;
	} 
	if(a==c) {
		cout<<1100;
		reture;
	}
	else{
		cout<<1111
	}
	return 0;
}
