#include<bits/stdc++.h>
using namespace std:
int main(){
int a,b[1000],C[1000],d[1000],z=0,z1=0,h=0,m=0,h1=0;
cin>>a>>b;
for(int i=0;i<=a;i++){
cin>>c[i];
for(int y=i-1;y>=0;y--){
if(c[i]<c[y])
z=C[i];
else
z=c[y];}
for(int y=i-1;y>=0;y--){
if(c[i]>c[y])
h=C[i];
else
h=c[y];}
for(int y=i-1;y>=0;y--){
if(c[i]=c[y])
for(int G=y+1;G<=i;G++){
c[G-1];}
else if(c[y]=z)
z1+=1;
else if(c[y]>h)
h1+=1;
else
m+=1;
}
}
cout<<z1<<m<<h1;
}
