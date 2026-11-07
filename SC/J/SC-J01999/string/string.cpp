#include<bits/stdc++.h>
using namespace std;
int c[10005];
int main(){
freopen("string.in","r",stdin);
freopen("string.out","w",stdout);
int n;
cin>>n;
for(int i=0;i<=n;i++){
int l;
cin>>l;
while(l--){
char a;
cin>>a;
int b; 
s[i]+=a;
b++;}
string c;
int d=0;
for(int i=s.size()-1;i>=0;i--){
c[d]=s[i];
d++;
for(int i=0;i<s.size();i++){
if(c[i]!=s[i]){
int v=0;
v++;
}
if(v==0){
cout<<0;
else{
cout<<v/2;

return 0;}