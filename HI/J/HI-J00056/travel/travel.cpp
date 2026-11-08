#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a=0,b=0,c=0,d=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int sa1=s1[0]-48;
	int sb1=s1[1]-48;
	char t1=s1[2];
	int p1=sa1*10+sb1;
	int sa2=s2[0]-48;
	int sb2=s2[1]-48;
	char t2=s2[2];
	int p2=sa2*10+sb2;
	if(c1==c2){
		a=1;
		if(p1==p2){
			b=1;
			if(t1=='D' || t1=='F'){
				if(t2=='D' || t2=='F'){
					c=1;
					d=1;
				}
			}
			else if(t1=='A' || t1=='B' || t1=='C'){
				if(t2=='A' || t2=='B' || t2=='C'){
					c=1;
					if(abs(t1-t2)==1){
						d=1;
					}
				}
			}
		}
		else{
			c=0,d=0;
		}
	}
	else{
		b=0,c=0,d=0;
	}
	cout<<a<<b<<c<<d;
	return 0;
}
