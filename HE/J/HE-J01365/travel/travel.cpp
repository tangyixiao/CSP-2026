#include<bits/stdc++.h>
using namespace std;
int che1,che2;
string zuo1,zuo2;
bool flag1,flag2,flag3;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>che1>>zuo1>>che2>>zuo2;
	if(che1==che2) {
		cout<<1;
		int bh1=(zuo1[0]-'0')*10+(zuo1[1]-'0');
	    int bh2=(zuo2[0]-'0')*10+(zuo2[1]-'0');
	    if(bh1==bh2){
		   cout<<1;
		   if(zuo1[2]=='D'||zuo1[2]=='F') flag1=1;
		   if(zuo2[2]=='D'||zuo2[2]=='F') flag2=1;
		   if(flag1&&flag2) {
		   	   cout<<1<<1;
		   	   flag3=1;
		   }
		   if(!flag1&&!flag2) {
		   	      cout<<1;
		   	      int xl1=zuo1[2]-'0';
		   	      int xl2=zuo2[2]-'0';
		   	      if(xl1+1==xl2||xl2+1==xl1) cout<<1;
		   	      else cout<<0;
		          }
		          else if(!flag3) cout<<0<<0;
	    } 
	    else cout<<0<<0<<0;
    }
	else cout<<0<<0<<0<<0;
	
	return 0;
}
