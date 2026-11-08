#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    freopen("travel.in","r"stdin); 
    freopen("travel.out","w"stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int flag1=0; 
	int flag2=0;
	int flag3=0;
	int flag4=1;
	if(c1==c2){
		flag1=1;
	}
	cout<<flag1;
	if(flag1==0){
		cout<<"000";
		return 0;
	}
	
	string s11=s1.substr(0,2);
	string s22=s2.substr(0,2);
	if(s11==s22){
		flag2=1;
	}
	cout<<flag2;
	
    s11=s1.substr(2,1);
	s22=s2.substr(2,1);
	if(flag2==1){
		if((s11<="C" && s22<="C")||(s11>="D"&&s22>="D")){
			flag3=1;
		}
	}cout<<flag3;
	if(flag3==0){
		flag4=0;
	}
	
	if(flag4!=0){
		int lens1=s11.size();
	    int lens2=s22.size();
	    char x,y;
	    for(int i=0;i<lens1;i++){
		    x=s11[i];
	    }
	    for(int j=0;j<lens2;j++){
	    	y=s22[j];
    	}
    	//cout<<endl<<x<<" "<<y<<endl;////
	    if((x=='C'&&y=='D')||(y=='C'&&x=='D')){
	    	flag4=0;
	    	cout<<flag4;
	    	return 0;
	    }
		if( x-y==1 || y-x==1){
	    	flag4=1;
	    }else{
	    	flag4=0;
		}
    }
    cout<<flag4;
	return 0;
}
