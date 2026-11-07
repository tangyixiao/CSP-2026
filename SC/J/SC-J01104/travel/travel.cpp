#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
bool q1,q2,q3,q4;
bool zy(char ll){
	if(ll=='F'||ll=='D') return 0;
	else return 1;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) q1=1;
	else q1=0;
	if(s1[0]==s2[0]&&s1[1]==s2[1]&&q1) q2=1;
	else q2=0;
	if(zy(s1[2])==zy(s2[2])&&q2) q3=1;
	else q3=0;
	long long ss1,ss2;
	ss1=(long long)s1[2]-'A';
	ss2=(long long)s2[2]-'A';
	if(q3&&((ss1+1==ss2)||(ss1==ss2+1))) q4=1;
	else q4=0;
	cout<<q1<<q2<<q3<<q4;
	return 0;
}