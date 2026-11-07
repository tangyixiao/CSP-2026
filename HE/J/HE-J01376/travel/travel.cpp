#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int x1=0,x2=0;
	for(int i=0;i<2;i++){
		x1=x1*10+(c1[i]-'0');
		x2=x2*10+(c2[i]-'0');
	}
	if(x1==x2){
		cout<<1;
		int z1=0,z2=0;
		for(int i=0;i<2;i++){
			z1=z1*10+(s1[i]-'0');
			z2=z2*10+(s2[i]-'0');
		}
		if(z1==z2){
			cout<<1;
			char n1=s1[2],n2=s2[2];
			int bj1=0,bj2=0;
			if(n1=='A'||n1=='B'||n1=='C')bj1=2;
			else if(n1=='D'||n1=='F')bj1=1;
			if(n2=='A'||n2=='B'||n2=='C')bj2=2;
			else if(n2=='D'||n2=='F') bj2=1;
			if(bj1==bj2){
				cout<<1;
				int l=abs(n1-n2);
				if(l==1)cout<<1;
				else cout<<0;
			}else{
				cout<<0;
				cout<<0;	
			}
		}else{
			cout<<0;
			cout<<0;
			cout<<0;
		}
	}else{
		cout<<0;
		cout<<0;
		cout<<0;
		cout<<0;
	}
	return 0;
}
