#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin) ;
    freopen("travel.out","w",stdout) ;
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]==c2[0]&&c1[1]==c2[1]){
	  cout<<'1';
	  if(s1[0]==s2[0]&&s1[1]==s2[1]){
	     cout<<'1';
	  	 char p=s1[2],q=s2[2];
	     if(p>='A'&&p<='C'&&q>='A'&&q<='C') cout<<'1';
	     else if(p=='D'&&q=='F') cout<<'1';
	     else if(p=='F'&&q=='D') cout<<'1';
         else {
		   cout<<'00';
	       return 0;
	     }	
	     if(abs(p-q)==1) cout<<'1';
	     else cout<<'0';
	     }
   	  else cout<<'000';
    }	
    else cout<<'0000';
	return 0;
}