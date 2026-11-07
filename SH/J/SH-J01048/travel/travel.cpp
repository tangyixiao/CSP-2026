#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int x,y;
char a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2){
		cout<<1;
	}
	else {
		cout<<"0000";
		return 0;
	}
	x+=s1[0]-'0';
	y+=s2[0]-'0';
	x*=10;
	y*=10; 
	x+=s1[1]-'0';
	y+=s2[1]-'0';
	if (x==y){
		cout<<1;
	}
	else {
		cout<<"000";
		return 0;
	}
	a=s1[2];
	b=s2[2];
	if (b-'A'<a-'A'){
		swap(a,b);
	}
	if (a=='A' && b=='B'){
		cout<<11;
	}
	else if (a=='A' && b=='C'){
		cout<<10;
	}
	else if (a=='B' && b=='C'){
		cout<<11;
	}
	else if (a=='D' && b=='F'){
		cout<<11;
	}
	else {
		cout<<"00";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
