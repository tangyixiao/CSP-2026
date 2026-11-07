#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
string c1,s1,c2,s2;bool d1,d2;
cin>>c1>>s1>>c2>>s2;
if(c1==c2)cout<<1;
else{cout<<"0000";return 0;}
if(s1[0]==s2[0]&&s1[1]==s2[1])cout<<1;
else{cout<<"000";return 0;}
if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C')d1=true;else{d1=false;}
if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C')d2=true;else{d2=false;}
if(d1==d2)cout<<1;
else{cout<<"00";return 0;}
if(d1==true&&d2==true&&abs(int(s1[2])-int(s2[2]))==1)cout<<1;	
else if(d1==false&&d2==false)cout<<1;	
else{cout<<0;}	
	return 0;
}
