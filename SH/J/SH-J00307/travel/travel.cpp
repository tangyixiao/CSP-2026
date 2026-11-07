#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
int a1=0,a2=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	a1=(s1[0]-'0')*10+(s1[1]-'0');
	a2=(s2[0]-'0')*10+(s2[1]-'0');
	if(c1!=c2)cout<<0<<0<<0<<0;
	else{
		cout<<1;
		if(a1!=a2)cout<<0<<0<<0;
		else{
			cout<<1;
			a1=s1[2]-'A';
			a2=s2[2]-'A';
			if((a1<3&&a2<3)||(a1>2&&a2>2)){
				cout<<1;
			if(abs(a1-a2)==1){
					cout<<1;
				}
				else cout<<0;
			}	
			else cout<<0<<0;
		}
	}
	return 0;
} 
