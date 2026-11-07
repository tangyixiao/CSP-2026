#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

string c1,s1,c2,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travle.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<"0000"<<endl;
		return 0;
	}
	if(s1[0]==s2[0] && s1[1]==s2[1]){
		cout<<1;
	}
	else{
		cout<<"000"<<endl;
		return 0;
	}
	int r=s1[2]-'A',x=s2[2]-'A';
	if((r<=2 && x<=2)||(r>=3 && x>=3)){
		cout<<1;
	}
	else{
		cout<<"00"<<endl;
		return 0;
	}
	if(abs(r-x)==1 || (s1[2]=='D' && s2[2]=='F') || (s1[2]=='F' && s2[2]=='D')){
		cout<<1<<endl;
	}
	else{
		cout<<0<<endl;
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
