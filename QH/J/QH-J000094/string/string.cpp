#include <String>
#include <iostream>
using namespace std;
int main(){
    freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	int a,b,l,sum;
	char c;
	string s;
	sum=0;
	l=0;
	cin>>a;
	for(int i=0;i<a;i++){
	cin>>b>>c;
	for(int j=0;j<b;j++)
	s+=c;
	}
	l=s.size();
	for(int t=0;t<=l/2;t++)
	if(s[t]==s[l])
	l--;
	else{
	s[t]=s[l];
	sum++;
	l--;}
    cout<<sum;
	return 0;
} 

