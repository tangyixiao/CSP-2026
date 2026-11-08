#include<bits/stdc++.h>
using namespace std;
int main(){
freopen("travel.in","r",stdin);
freopen("travel.out","w",stdout);
string a,b,c,d;
cin>>a>>b>>c>>d;
int flag=0;
for(int i=0;i<a.size();i++){
	if(a[i]!=c[i]){
		cout <<0;
		flag=1;
		break;
	}
}
if(flag!=1){
	cout <<1;
}else{
	cout<<0<<0<<0;
	return 0;
}
flag=0;
for(int i=0;i<b.size()-1;i++){
	if(b[i]!=d[i]){
		cout <<0;
		flag=1;
		break;
	}
}
if(flag!=1){
	cout <<1;
}else{
	cout <<0<<0;
	return 0;
}
flag=0;
if(((b[2]=='A'||b[2]=='B'||b[2]=='C')&&(d[2]=='A'||d[2]=='B'||d[2]=='C'))||((b[2]=='D'||b[2]=='F')&&(d[2]=='D'||d[2]=='F'))){
	cout <<1;
}else{
	cout <<0<<0;
	return 0;
}
if((b[2]=='A'&&d[2]=='B')||(b[2]=='B'&&d[2]=='C')||(b[2]=='D'&&d[2]=='F')){
	cout <<1;
}else{
	cout <<0;
}
	return 0;
}
