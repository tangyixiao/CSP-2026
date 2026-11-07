#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
    freopen("travel.in","r",stdin);
    freopen("travel.out","w",stdout);
	int a=1,b=1,c=0,d=0;
    cin>>c1>>s1>>c2>>s2;
    for(int i=0;i<=1;i++){
    	if(c1[i]!=c2[i]){
    		a=0;
		}
		if(s1[i]!=s2[i]){
			b=0;
		}
	}
	if(a==0||b==0){
		c=0;
		d=0;
	}
	int t=s1[2]-'A';
	int s=s2[2]-'A';
	if(a==1&&b==1){
		if(s1[2]<='C'&&s2[2]<='C'){
			c=1;
			d=0;
			if(abs(t-s)==1){
				d=1;
			}
		}else if(s1[2]=='D'&&s2[2]=='F'){
			c=1;
			d=1;
		}else if(s1[2]=='F'&&s2[2]=='D'){
			c=1;
			d=1;
		}
	}
	if(a==0){
		b=0;
		c=0;
		d=0;
	}
	cout<<a<<b<<c<<d;
	return 0;
}

