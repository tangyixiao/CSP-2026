#include<bits/stdc++.h>
using namespace std;
int main(){
string s1,s2,l3,l4;
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
cin>>s1;
cin>>l3;
cin>>s2;
cin>>l4;
if(s1==s2){
cout<<"1";
}
else{
cout<<"0000";
return 0;
}
if(l3[1]==l4[1]&&l3[0]==l4[0])
cout<<"110";
else
 cout<<"000";

return 0;







}




