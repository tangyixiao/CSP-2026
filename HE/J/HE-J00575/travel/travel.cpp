#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int check(char c){
	if(c<='D')return c-'A'+1;
	else return 5;
} 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000"<<"\n";
		return 0;
	}
	cout<<"1";
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"000"<<"\n";
		return 0;
	}
	cout<<"1";
	if(check(s1[2])<=3&&check(s2[2])>=4||check(s1[2])>=4&&check(s2[2])<=3){
		cout<<"00"<<"\n";
		return 0;
	}
	cout<<"1";
	if(abs(check(s1[2])-check(s2[2]))==1){
		cout<<"1"<<"\n";
		return 0;
	}
	cout<<"0"<<"\n";
	return 0;
}
