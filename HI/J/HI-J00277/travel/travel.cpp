#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char c1,s1,c2,s2,g;
	int a=0,b=0,c=0,d=0,i,j=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		a=1;
		for(i=1;i<=18;i++){
			if(s1-i>='A'&&s1-i<='F'&&s2-i>='A'&&s2-i<='F'){
				j++;
			}
		}
		if(j>0){
			b=1;
			for(i=1;i<=18;i++){
			if(s1-(i+'0')>='A'&&s1-(i+'0')<='C'&&s2-(i+'0')>='A'&&s2-(i+'0')<='C'||s1-(i+'0')>='D'&&s1-(i+'0')<='F'&&s2-(i+'0')>='D'&&s2-(i+'0')<='F'){
				j++;
			}
			if(j!=0){
				c=1;
				if(s1-s2==1||s2-s1==1){
					d=1;
				}
			}
		}
		}
	}
	cout<<a<<b<<c<<d;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
