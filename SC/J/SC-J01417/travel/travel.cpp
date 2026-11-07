#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string x,y;
	cin>>a>>x>>b>>y;
	bool l[4]={};
	if(a==b){
		l[0]=1;
		string s1=x.substr(0,2);
		string s2=y.substr(0,2);
		if(s1==s2){
			l[1]=1;
			char c1=x[2],c2=y[2];
			if((c1<='C'&&c2<='C')||(c1>='D'&&c2>='D')){
				l[2]=1;
				int p1=abs(int(c1-c2));
				if(p1==1)l[3]=1;
			}
		}
	}
	for(auto&i:l)cout<<i;
	return 0;
}