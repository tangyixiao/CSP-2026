#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int f1,r1,f2,r2;
char p1,p2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	f1=(c1[0]-'0')*10+(c1[1]-'0');
	f2=(c2[0]-'0')*10+(c2[1]-'0');
	r1=(s1[0]-'0')*10+(s1[1]-'0');
	r2=(s1[0]-'0')*10+(s2[1]-'0');
	p1=s1[2];
	p2=s2[2];
	if(f1==f2){
		if(r1==r2){
			if(p1=='A'&&p2=='B'||p1=='B'&&p2=='A'||p1=='B'&&p2=='C'||p1=='C'&&p2=='B'||p1=='D'&&p2=='F'||p1=='F'&&p2=='D'){
				cout<<"1111";
			}else if(p1=='A'&&p2=='C'||p1=='C'&&p2=='A'){
				cout<<"1110";
			}else{
				cout<<"1100";
			}
		}else{
			cout<<"1000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
} 
