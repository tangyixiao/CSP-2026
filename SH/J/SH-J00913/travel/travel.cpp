#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
char f,g,h,i;
int main(){
 freopen("travel.in","r",stdin);
 freopen("travel.out","w",stdout);
 cin>>a>>b>>c>>d;
 if(a==c){
  cout<<"1";
 }else{
  cout<<"0";
 }
 if(a==c&&b[0]==d[0]&&b[1]==d[1]){
  cout<<"1";
 }else{
  cout<<"0";
 }
 if(a==c&&b[0]==d[0]&&b[1]==d[1]){
  f=b[2];
  g=d[2];
  if(int(f)>int(g)){
   h=f;
   i=g;
   f=i;
   g=h;
  }
  if((f=='A'&&g=='B')||(f=='A'&&g=='C')||(f=='B'&&g=='C')||(f=='D'&&g=='F')){
   cout<<"1";
   if((f=='A'&&g=='B')||(f=='B'&&g=='C')||(f=='D'&&g=='F')){
   	cout<<"1";
   }else{
   	cout<<"0";
   }
  }else{
   cout<<"00";
  }
 }else{
  cout<<"00";
 }
 return 0;
} 
