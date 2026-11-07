#include<bits/stdc++.h>
using namespace std;
string a[10],b[10];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
   cin>>a[1]>>a[2]>>b[1]>>b[2];
   if(a[1]==b[1])cout<<1;
   else {
   cout<<"0000";
   return 0;
   }
   if(a[2][0]==b[2][0]&&a[2][1]==b[2][1])cout<<1;
   else {cout<<"000";
   return 0;
   }
   if(a[2][2]>='A'&&a[2][2]<='C'&&b[2][2]>='A'&&b[2][2]<='C'||a[2][2]>='D'&&a[2][2]<='F'&&b[2][2]>='D'&&b[2][2]<='F')cout<<1;
   else {
   cout<<"00";
   return 0;
   }
   if(abs(a[2][2]-b[2][2])==1)cout<<1;
   else if(a[2][2]=='F'&&b[2][2]=='D'||b[2][2]=='F'&&a[2][2]=='D')cout<<1;
   else cout<<0;
   return 0;
}