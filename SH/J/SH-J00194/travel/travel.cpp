#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,a1,b,b1;
	int f=1;
	cin>>a>>a1>>b>>b1;
	if(a==b){
		cout<<1;
	}else{
		f=0;
		cout<<0;
	}
	
	if(f==1&&a1[0]==b1[0]&&a1[1]==b1[1]){
		cout<<1;
	}else{
		cout<<0;
		f=0;
	}
	
	if(f==0||(a1[2]=='C'&&b1[2]=='D')||(b1[2]=='C'&&a1[2]=='D')){
		cout<<0;
		f=0;
	}else{
		cout<<1;
	}
	if(f==1&&abs(int(a1[2])-int(b1[2]))==1&&!((a1[2]=='C'&&b1[2]=='D')||(b1[2]=='C'&&a1[2]=='D'))){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}//02 02B 02 01A 1000   1010
//02 01A 03 01A 0000   0110
