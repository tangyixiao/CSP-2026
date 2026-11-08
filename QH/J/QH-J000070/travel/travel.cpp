#include<std/c++.h>
using namespace std;
int main()
{    
freopen("travel.in","r"stdin)
freopen("travel.out","w"stdout)
int c1,s1,c2,s2;
cin>>c1>>c2;
if(c1<=18||c2<=18)
{
	cout<<"1";
}
else{
	cout<<"0";
}
cin>>s1>>s2;
if(s1/100=s2/100){
	cout<<"1";
}
else<{
cout<<"0";
}
if(s1/100=s2/100||s1%100=s2%100+1){
	cout<<"1";
}
else{
	cout<<"0";
}
if(s1%100=s1||s2%100=s2){
	cout<<"1";
}
else{
	cout<<"0";
}
	return 0;
}
