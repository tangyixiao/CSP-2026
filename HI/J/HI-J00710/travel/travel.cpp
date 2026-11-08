#include<bits/stdc++.h>
using namespace std;
string  c1,c2,s1,s2;
int f1=0,f2=0,f3=0,f4=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	int z1=(s1[0]-'0')*10+(s1[1]-'0');
	int z2=(s2[0]-'0')*10+(s2[1]-'0');
	int x1,x2;
	if(s1[2]=='A'||s1[2]=='B'||s1[2]=='C') x1=1;
	else x1=2;
	if(s2[2]=='A'||s2[2]=='B'||s2[2]=='C') x2=1;
	else x2=2;
	if(c1==c2){
		cout<<1;
		f1=1;
		
		if(z1==z2){
			cout<<1;
			f2=1;
			
			if(x1==x2){
				cout<<1;
				f3=1;
				
				if(s1[2]==s2[2]+1||s1[2]==s2[2]-1){
					cout<<1;
					f4=1;
				}
			}
		}
	}
	if(f1==0) cout<<0;
	if(f2==0) cout<<0;
	if(f3==0) cout<<0;
	if(f4==0) cout<<0;
	return 0;
} 
