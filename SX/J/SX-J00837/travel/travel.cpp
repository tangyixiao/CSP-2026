#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a1,b1,t1,a2,b2,t2;
int x,p,c,l;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++){
		a1=a1*10+(c1[i]-'0');
		a2=a2*10+(c2[i]-'0');
	}
	for(int i=0;i<3;i++){
		if(i<2){
			b1=b1*10+(s1[i]-'0');
			b2=b2*10+(s2[i]-'0');
		}else{
			t1=s1[i]-'A'+21;
			t2=s2[i]-'A'+21;
		}
	}
	if(a1==a2){
		x=1;
		if(b1==b2){
			p=1;
			if((t1>23&&t2>23)||(t1<24&&t2<24)){
				c=1;
				if(t1>t2){
					if(t1-t2==1)l=1;
				}else{
					if(t2-t1==1)l=1;
				}
			}
		}
	}
	cout<<x<<p<<c<<l;
	return 0;
}