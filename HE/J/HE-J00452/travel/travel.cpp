#include<bits/stdc++.h>
using namespace std;
int a,b;
char c[3],d[3];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>c>>b>>d;
	
	if(a==b) cout<<"1";
	else cout<<"0";

	if(c[0]==d[0]&&c[1]==d[1]) cout<<"1";
	else cout<<"0";

	if(c[2]=='A'&&d[2]=='B'||c[2]=='A'&&d[2]=='C'||c[2]=='B'&&d[2]=='A'||c[2]=='B'&&d[2]=='C'||c[2]=='C'&&d[2]=='A'||c[2]=='C'&&d[2]=='B'||c[2]=='D'&&d[2]=='F'||c[2]=='F'&&d[2]=='D') cout<<"1";
	else cout<<"0";

	
	if(c[2]=='A'&&d[2]=='B'||c[2]=='B'&&d[2]=='C'||c[2]=='B'&&d[2]=='A'||c[2]=='C'&&d[2]=='B'||c[2]=='D'&&d[2]=='F'||c[2]=='F'&&d[2]=='D') cout<<"1";
	else cout<<"0";
	
	
	
	
	return 0;
	fclose(stdin);
	fclose(stdout);
}
