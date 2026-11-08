#include<bits/stdc++.h> 
using namespace std;
int main(){
	freopen("travel.in","r",stdin); 
		freopen("travel.out","w",stdout); 
	string a,b,c,d,e,f,g,h,l,i,n,m;
	cin>>a>>b>>e>>c>>d>>f;
	m=f;
	g="A";h="B";l="C",i="D",n="F";
	if(a==c) cout<<"1";
	else cout<<"0";
	

	
	if(a==c&&b==d) cout<<"1";
	else cout<<"0";
	
	if(a==c&&b==d&&(c==g||c==h||c==l&&f==g||f==h||f==l)||(c==i||c==n&&f==i||f==n)) cout<<"1";
	else cout<<"0";
		if(a!=c||b!=d&&(c==g&&m==l)||(c==l&&m==g)) cout<<"0";
	else cout<<"1";
		return 0;
}
