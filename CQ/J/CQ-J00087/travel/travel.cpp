#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr),cout.tie(nullptr);
	
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<< "0000";
		return 0;
	}
	string t1,t2;
	for(int i=0;i<2;i++){
		t1+=s1[i];
		t2+=s2[i];
	}
	if(t1!=t2){
		cout<<"1000";
		return 0;
	}
	char m1=s1[2],m2=s2[2];
	if(m1>='A'&&m1<='C'&&m2>='D'&&m2<='F'||m2>='A'&&m2<='C'&&m1>='D'&&m1<='F'){
		cout<<"1100";
		return 0;
	}
	if(m1=='A'&&m2=='C'||m2=='A'&&m1=='C'){
		cout<<"1110";
		return 0;
	}
	else cout<<"1111";
	
	return 0;
} 
