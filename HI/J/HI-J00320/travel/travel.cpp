#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,cc,ss; cin>>c>>s>>cc>>ss;
    if(c==cc) cout<<1;
    else cout<<0;
    string h=""; h=h+s[0]+s[1];
    string hh=""; hh=hh+ss[0]+ss[1];
    if(h==hh&&c==cc) cout<<1;
    else cout<<0;
    char w=s[2]; 
    char ww=ss[2]; 
    if(c==cc&&h==hh){
    	if(((w>='A'&&w<='C')&&(ww>='A'&&ww<='C'))||((w>='E'&&w<='F')&&(ww>='E'&&ww<='F')))
    	cout<<1;
    	else cout<<0;
	}
	else cout<<0;
	if(c==cc&&h==hh){
	if((char(w+1)==ww&&w!='C')||(char(w-1)==ww&&w!='D')) cout<<1;
	else cout<<0;
   }
    else cout<<0;
	return 0;
}
