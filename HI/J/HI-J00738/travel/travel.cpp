#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool a,b,c,d;
	a=0;
	b=0;
	c=0;
	d=0;
	if(c1==c2){
		a=1;
	}
	if(a&&s1[1]==s2[1]&&s1[0]==s2[0]){
		b=1;
	}
	char q=s1[2];
	char w=s2[2];
	//cout<<q<<w<<q<<w; 
	if(a&&((q=='A'||q=='B'||q=='C')&&(w=='A'||w=='B'||w=='C'))){
		c=1;
	}
	if(a&&((q=='B'&&(w=='C'||w=='A'))||((q=='A'||q=='C')&&w=='B'))){
		d=1;
	}
	if(a&&((q=='D'||q=='F')&&(w='D'||w=='F'))){
		d=1;
		c=1;
	}
	cout<<a<<b<<c<<d;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

