include<iostream>
using namespace std;
int main(){
    freopen("travel.in","r","stdin");
    freopen("travel.out","w","stdout");
	string c,s;
	for(int i=0;i<5;i++)
	  cin>>c[i];
    for(int i=0;i<5;i++)
      cin>>s[i]; 	    
	if(c[0]==s[0])
	if(c[1]==s[1])
	  cout<<"1";
	else {cout<<"0000";return 0;}		 
    if(c[2]==s[2])
    if(s[3]==c[3])
	  cout<<"1"; 
	else {cout<<"000";return 0;}
    if(c[4]<='C')
    if(s[4]<='C'){
      cout<<"1";}
    else if(c[4]>'C'){
    if(s[4]>'C'){
    cout<<"1";}
    }else {cout<<"00";return 0;}
    int n=c[4]-s[4];
    if(n==1){
     cout<<"1";	
	}else {cout<<"0";return 0;}
}  	  