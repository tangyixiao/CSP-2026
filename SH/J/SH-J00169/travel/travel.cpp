#include<iostream>
using namespace std;
string c1,s1,c2,s2;
int main(){
//	ios::sync_with_stdio(0);
//	cin.tie(0),cout.tie(0);
	freopen("travel.in" ,"r",stdin );
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	//????
	if(c1!=c2){
		cout<<"0000\n";
		return 0;
	}
	//1???
	if(s1[0]!=s2[0]||s1[1]!=s2[1]){
		cout<<"1000\n";
		return 0;
	}
	//11??
	char c_1=s1[2],c_2=s2[2];
	if(c_1=='D'||c_1=='F'){
		if(c_2=='D'||c_2=='F')
			cout<<"1111\n";
		else
			cout<<"1100\n";
	}
	if(c_1=='A'){
		if(c_2=='B')
			cout<<"1111\n";
		else if(c_2=='C')
			cout<<"1110\n";
		else
			cout<<"1100\n";
		return 0;
	}
	else if(c_1=='B'){
		if(c_2=='A'||c_2=='C')
			cout<<"1111\n";
		else
			cout<<"1100\n";
		return 0;
	}
	else{
		if(c_2=='B')
			cout<<"1111\n";
		else if(c_2=='A')
			cout<<"1110\n";
		else
			cout<<"1100\n";
		return 0;
	}
	return 0;
}
//0000 1000 1100 1110 1111
