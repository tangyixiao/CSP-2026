#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n=0,m=0,q=0,w=0;
	string s,d,f,g;
	cin>>s>>d>>f>>g;
	char b1=d[0],b2=d[1],b=d[2],v1=g[0],v2=g[1],v=g[2];
	if(s==f)n=1;
	cout<<n;
	if(n!=1){
	    cout<<"000";
	    return 0;
}
    
	if(b1==v1&&b2==v2)m=1;
	cout<<m;
	if(m!=1){
		cout<<"00";
		return 0;
	}
	if(b=='D'&&v=='F'||b=='F'&&v=='D'||b=='A'&&v=='B'||b=='A'&&v=='C'||b=='B'&&v=='C'||b=='B'&&v=='A'||b=='C'&&v=='A'||b=='C'&&v=='B')q=1;
	cout<<q;
	if(b=='D'&&v=='F'||b=='F'&&v=='D'||b=='A'&&v=='B'||b=='B'&&v=='C'||b=='B'&&v=='A'||b=='C'&&v=='B')w=1;
	cout<<w;
	fclose(stdin);
	fclose(stdout);

	return 0;
}
