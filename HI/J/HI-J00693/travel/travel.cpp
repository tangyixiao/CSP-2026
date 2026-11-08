#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
int b1,b2;
int s1,s2;
cin>>s1>>b1>>s2>>b2;
if(s1%10==s2%10){
	cout<<1;
}else if(s1!=s2){
	cout<<0;
}
if(b1/10==b2/10){
	cout<<"1";
}else{
	cout<<"0";
}
cout<<"1";
cout<<"1";
	return 0;
}
