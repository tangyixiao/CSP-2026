#include<bits/stdc++.h>
using namespace std;

int n,m,k,t,ans;
int c1,c2;
string s1,s2;
bool b1,b2,b3,b4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		b1=1;
	}
	if(b1==1 && s1[0]+s1[1] == s2[0]+s2[1]){
		b2=1;
	}
	bool s1x=0,s2x=0;
	if(b2 == 1){
		
		if(s1[2] == 'A'|| s1[2] == 'B'|| s1[2] == 'C'){
			s1x = 1;}
		if(s2[2] == 'A'|| s2[2] == 'B'|| s2[2] == 'C'){
			s2x = 1;}
		if(s1x == s2x){
			b3 = 1;
			
		}
	}
	if(b3== 1){
		char x = s1[2],y= s2[2];
		if(x>y) swap(x,y);
		if((x == 'A' && y == 'B')||(x == 'B' && y == 'C')||(x == 'D' && y == 'E')){
			b4 = 1;
		}
	}
	cout<<b1<<b2<<b3<<b4;
	
}