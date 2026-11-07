#include<iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,c1,c2;
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) cout<<"0000";
	else{
		int suma=0,sumb=0;
		for(int i=0;i<=1;i++) suma=suma*10+s1[i]-'0';
		for(int i=0;i<=1;i++) sumb=sumb*10+s2[i]-'0';
		if(suma!=sumb) cout<<"1000";
		else{
			if((s1[2]<='C' && s2[2]<='C') || (s1[2]>='D' && s2[2]>='D')){
				if((s1[2]=='A' && s2[2]=='C') || (s1[2]=='C' && s2[2]=='A')) cout<<"1110";
				else cout<<"1111";
			}
			else cout<<"1100";
		}
	}
	return 0;
}
