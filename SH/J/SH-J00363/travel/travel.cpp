#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdout);
	freopen("travel.out","w",stdin);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	cout<<(c1==c2)+1-1;
	if(c1!=c2){
		cout<<"000";
		return 0;
	}
	cout<<(s1[0]==s2[0]&&s1[1]==s2[1]);
	if(!(s1[0]==s2[0]&&s1[1]==s2[1])){
		cout<<"00";
		return 0;
	}
	int side1,side2;
	if(s1[2]-'A'<3) side1=-1;
	else side1=1;
	if(s2[2]-'A'<3) side2=-1;
	else side2=1;
	cout<<(side1*side2+1)/2;
	side1=s1[2]-'A'; side2=s2[2]-'A';
	if(side1==3) side1++;
	if(side2==3) side2++;
	cout<<(abs(side1-side2)==1);
	return 0;
}
