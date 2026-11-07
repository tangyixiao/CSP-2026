#include <bits/stdc++.h>
using namespace std;
int a1,a2,s1,s2;
char c1,c2;
bool l(char d,char e){
	if(d=='A' || d=='B' || d=='C'){
		if(e=='A' || e=='B' || e=='C'){
			return true;
		}
		else{
			return false;
		}
	}
	if(d=='D' || d=='F'){
		if(e=='D' || e=='F'){
			return true;
		}
		else{
			return false;
		}
	}
}
bool n(char f,char g){
	if(f=='A' && g=='B') return true;
	if(f=='C' && g=='B') return true;
	if(f=='B' && g=='A') return true;
	if(f=='B' && g=='C') return true;
	if(f=='D' && g=='F') return true;
	if(f=='F' && g=='D') return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>s1;
	c1=getchar();
	cin>>a2>>s2;
	c2=getchar();
	cout<<int(a1==a2)<<int(a1==a2 && s1==s2)<<int(a1==a2 && s1==s2 && l(c1,c2))<<int(a1==a2 && s1==s2 && l(c1,c2) && n(c1,c2));
	return 0;
}
