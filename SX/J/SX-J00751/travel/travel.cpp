#include <bits/stdc++.h>
using namespace std;
int pai(string s){
	int n=s.size(),a=0;
	for(int i=0;i<n-1;i++){
		a=a*10+s[i];
	}
	return a;
}
char zuo(string s){
	char c=s[s.size()-1];
	return c;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool q1,q2,q3,q4;
	q1=(c1==c2);
	q2=(q1&&(pai(s1)==pai(s2)));
	q3=(q2&&((zuo(s1)<='C')&&(zuo(s2)<='C')||(zuo(s1)>='D')&&(zuo(s2)>='D')));
	q4=(q3&&(abs(zuo(s1)-zuo(s2))==1));
	cout<<q1<<q2<<q3<<q4;
	return 0;
}
