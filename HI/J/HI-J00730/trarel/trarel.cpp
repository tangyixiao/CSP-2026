#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("trarel.in","r",stdin);
	freopen("trarel.out","w",stdout);
	int c1,s1,c2,s2,a,b,c,d;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2,c1!=1,c1!=16){
		a=1;
	}
	else{
		a=0;
	}
	if(s1==s2){
		b=1;
		c=1;
	}
	else{
		b=0;
		c=0;
	}
	
	if(s1+1==s2,s1-1==s2){
		d=1;
	}
	else{
		d=0;
	}
	cout<<a<<b<<c<<d;
	return 0;
}
