#include<bits/stdc++.h>
using namespace std;
string c1,c2,s1,s2;
bool q4ok(char ch1,char ch2){
	if(ch1>=ch2) swap(ch1,ch2);
	if(ch2-ch1==1&&ch1!='C') return true;
	return false;
}
bool q3ok(char ch1,char ch2){
	if(ch1>=ch2) swap(ch1,ch2);
	if(q4ok(ch1,ch2)) return true;
	if(ch1=='A'&&ch2=='C') return true;
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	string r1,r2;
	r1=s1[0];r1+=s1[1];
	r2=s2[0],r2+=s2[1];
	char l1=s1[2],l2=s2[2];
	bool q1=(c1==c2);
	bool q2=q1&&(r1==r2);
	bool q3=q2&&q3ok(l1,l2);
	bool q4=q3&&q4ok(l1,l2);
	cout<<q1<<q2<<q3<<q4<<'\n';
	return 0;
}
