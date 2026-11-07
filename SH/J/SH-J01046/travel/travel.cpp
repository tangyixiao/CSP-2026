#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
bool cx(){
	return a1==b1;
}
bool pai(){
	if(!cx())return 0;
	if(a2[0]==b2[0]&&a2[1]==b2[1])return 1;
	return 0;
}
bool tyc(){
	if(!pai())return 0;
	if((a2[2]>='D'&&b2[2]>='D')||(a2[2]<'D'&&b2[2]<'D'))return 1;
	return 0;
}
bool xl(){
	if(!tyc())return 0;
	if((a2[2]<'D'&&b2[2]<'D'&&abs(int(a2[2])-int(b2[2]))==1)||(a2[2]=='D'&&b2[2]=='F')||(a2[2]=='F'&&b2[2]=='D'))return 1;
	return abs(1)==1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>a1>>a2>>b1>>b2;
	cout<<cx()<<pai()<<tyc()<<xl();
	return 0;
}
