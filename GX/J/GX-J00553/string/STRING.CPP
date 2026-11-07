#include<bits/stdc++.h>
using namespace std;
int main(){
int a=0,c[1000],d=0,e=0,z=0;
cin>>a;
string b[1000];
for(int i=0;i<=a;i++){
cin>>c[i];
cin>>b[i];
d+=c[i];
}
if(d%2==0)
e=d/2;
else
e=d/2+1;
for(int y=0;y<=d/2;Y++){
if(b[y]!=b[e])
z+=1;
e+=1;
}
cout<<z;
}
