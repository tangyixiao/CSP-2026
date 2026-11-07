#include<bits/stdc++.h> 
using namespace std;

int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w", stdout);
string s1,s2,a1,a2;
cin>>s1>>s2>>a1>>a2;
if(s1==a1){cout<<1;
}else{
cout<<0;} 
if(s1[0]==a2[0]&&s1[1]==a2[1]){
cout<<1;}else{ 
cout<<0;}
if(abs(s2[3]-a2[3])==1){
   if(s2[3]==!'C'&&a2[3]==!'D'||s2[3]==!'D'&&a2[3]==!'C'){
        cout<<1;
        cout<<1; 
}}else{
       cout<<0;
        cout<<0;
}
  return 0;
}

