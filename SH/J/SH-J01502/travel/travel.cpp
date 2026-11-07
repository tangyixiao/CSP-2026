#include <bits/stdc++.h>
using namespace std;
int main(){
/*	string c1,c2;
	char s1,s2,s3,s4,s5,s6;
	cin>>c1>>s1>>s2>>s3>>c2>>s4>>s5>>s6;
	if(c1==c2){
		cout<<1;
	}else{
		cout<<0<<' '<<0<<' '<<0<<' '<<0;
		return 0;
	}
	if(s1+s2==s4+s5){
		cout<<1;
	}else{
		cout<<0<<' '<<0<<' '<<0;
		return 0;
	}
	if(s3-s6<4){
		cout<<1;
	}else{
		cout<<0<<' '<<0;
		return 0;	
	}
	if(s3-s6==1){
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
}
*/
int n=0;
cin>>n;
int a[n];
char c[n];
for(int i=0;i<n;i++){
	cin>>a[i]>>c[i];
}
string x,y;
int m=0;
for(int i=0;i<n;i++){
	if(c[i]!=c[n-1-i]){
		m++;
	}
}
cout<<m;
return 0;
}
