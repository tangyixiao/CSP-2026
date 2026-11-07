#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	//cout<<c<<" "<<s<<" "<<cc<<" "<<ss<<"\n";
	bool b1,b2,b3,b4;
	b1=(c==cc);
	b2=(b1 && (s[0]==ss[0] && s[1]==ss[1]));
	b3=(b2 && ((s[2]<='C' && ss[2]<='C') || (s[2]>='D' && ss[2]>='D')));
	b4=(b3 && abs(s[2]-ss[2])==1);
	cout<<b1<<b2<<b3<<b4;
	return 0;
} //Trick||Treat!