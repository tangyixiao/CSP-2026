#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1,s1,c2,s2;
string p1,p2;
char w1,w2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	p1=s1.substr(0,2);
	p2=s2.substr(0,2);
	w1=s1[2];
	w2=s2[2];
	if(c1!=c2){
		printf("0000");
		return 0;
	}
	if(p1!=p2){
		printf("1000");
		return 0;
	}
	if(!((w1>='A'&&w1<='C')&&(w2>='A'&&w2<='C'))&&!((w1=='D'||w1=='F')&&(w2=='D'||w2=='F'))){
		printf("1100");
		return 0;
	}
	if(abs(w1-w2)!=1){
		printf("1110");
		return 0;
	}
	printf("1111");
	return 0;
}