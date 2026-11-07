#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
bool q1(int a1,int b1,string c1,string d1){
	return a1==b1;
}
bool q2(int a2,int b2,string c2,string d2){
	return (q1(a2,b2,c2,d2)&&c2[0]==d2[0]&&c2[1]==d2[1]);
}
bool q3(int a3,int b3,string c3,string d3){
	bool t1=0;
	if(c3[2]<='C'&&d3[2]<='C'||c3[2]>='D'&&d3[2]>='D') t1=1;
	return (q2(a3,b3,c3,d3)&&t1);
}
bool q4(int a4,int b4,string c4,string d4){
	bool t2=0;
	if(abs(c4[2]-d4[2])==1&&c4[2]!='D'&&d4[2]!='D'||c4[2]=='D'&&d4[2]=='F'||d4[2]=='D'&&c4[2]=='F') t2=1;
	return (q3(a4,b4,c4,d4)&&t2);
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	cout<<q1(c1,c2,s1,s2)<<q2(c1,c2,s1,s2)<<q3(c1,c2,s1,s2)<<q4(c1,c2,s1,s2);
	return 0;
} 
