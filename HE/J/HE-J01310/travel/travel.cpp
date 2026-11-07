#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
string s1,s2;
int c1,c2;
bool a,b,c;
cin>>c1>>s1>>c2>>s2;
if(c1==c2){
	cout<<1;
	a=true;
}
else{
	cout<<0;
	a=false;
}
if(s1[0]==s2[0]&&s1[1]==s2[1]&&a){
	cout<<1;
	b=true;
}
else{
	cout<<0;
	b=false;
}
if(s1[2]<='C'&&s2[2]<='C'&&b){
	cout<<1;
	c=true;
}
else if(s1[2]>='D'&&s2[2]>='D'&&b){
	cout<<1;
	c=true;
}
else{
	cout<<0;
	c=false;
}	
if(c&&s1[2]+1==s2[2]||s1[2]-1==s2[2]){
	cout<<1;
}
else{
	cout<<0;
}
	return 0;
} 
