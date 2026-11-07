#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int s=int(s1[0]-'0'),g=int(s1[1]-'0');
	int p1=s*10+g;
	s=int(s2[0]-'0');
	g=int(s2[1]-'0');
	int p2=s*10+g;
	int z1=int(s1[2]),z2=int(s2[2]);
	if(c1==c2){
		cout<<1;
		if(p1==p2){
			cout<<1;
			if(z1<=int('C')&&z2<=int('C')){
				cout<<1;
				if(z1-1==z2||z1+1==z2){
					cout<<1;
				}else{
					cout<<0;
				}
			}else if(z1>int('C')&&z2>int('C')){
				cout<<1;
				if(z1-1==z2||z1+1==z2){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<0<<0;
			}
		}else{
			cout<<0<<0<<0;
		}
	}else{
		cout<<0<<0<<0<<0;
	}
	return 0;
}