#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int a=1,b=1,c=1,d=1;
	for(int i=0;i<2;i++){
		if(c1[i]!=c2[i]){
			a=0;
			b=0;
			c=0;
			d=0;
		}
	}
	for(int i=0;i<2;i++){
		if(s1[i]!=s2[i]){
			b=0;
			c=0;
			d=0;
		} 
	}
	if(s1[2]<='C'&&s2[2]>='D'||s2[2]<='C'&&s1[2]>='D'){
		c=0;
		d=0;
	}
	if(s1[2]<='C'&&s2[2]<='C'){
		int cha=int(s1[2])-int(s2[2]);
		if(cha==2||cha==-2){
			d=0;
		}
	}
	cout<<a<<b<<c<<d;
	return 0;
}