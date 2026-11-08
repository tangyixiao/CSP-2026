#include <String>
#include <iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a1,a2,s1,s2;
	int a[3];
	cin>>a1>>s1>>a2>>s2;
	if(a1==a2)
	a[0]=1;
	else {
	cout<<"0000";
	return 0;}
	if(s1[0]==s2[0]&&s1[1]==s2[1])
	a[1]=1;
	else {
	cout<<"1000";
	return 0;}
	if(s1[2]=='D'&&s2[2]=='F'||s2[2]=='D'&&s1[2]=='F'){
	cout<<"1111";
	return 0;}
	if(s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')
	a[2]=1;
	else {
	cout<<"1100";
	return 0;}
	if(s1[2]==s2[2]+1||s1[2]==s2[2]-1)
    a[3]=1;
	else 
	a[3]=0;
	for(int i=0;i<4;i++)
	cout<<a[i];
	return 0;
} 


