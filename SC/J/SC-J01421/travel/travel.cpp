#include <iostream>
#include <string>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,b1,a2,b2;
	cin>>a1>>b1>>a2>>b2;
	if(a1==a2){
		cout<<1;
	}else{
		cout<<0;
	}
	string bb1,bb2;
	bb1=b1[0]+b1[1];
	bb2=b2[0]+b2[1];
	if(bb1==bb2 && a1==a2){
		cout<<1;
	}else{
		cout<<0;
	}
	if((b1[2]=='D' || b1[2]=='F') && bb1==bb2 && a1==a2){
		if(b2[2]=='D' || b2[2]=='F'){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		if(b2[2]!='D' && b2[2]!='F' && bb1==bb2 && a1==a2){
			cout<<1;
		}else{
			cout<<0;
		}
	}
	if(abs(int(b2[2]-b1[2]))==1 && bb1==bb2 && a1==a2){
		if((b2[2]=='D' && b1[2]=='C') || (b2[2]=='C' && b1[2]=='D')){
			cout<<0;
		}else{
			cout<<1;
		}
	}else{
		cout<<0;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}