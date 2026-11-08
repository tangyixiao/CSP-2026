#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;

string a,b,c,d;
bool flag,flag2,flag3,flag4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>a>>b>>c>>d;
	if(a==c){
		flag=1;
		if(b[0]==d[0]&&b[1]==d[1]){
			flag2=1;
			if((b[2]=='A'&&(d[2]=='B'||d[2]=='C'))||(b[2]=='B'&&(d[2]=='A'||d[2]=='C'))||(b[2]=='C'&&(d[2]=='A'||d[2]=='B'))||(b[2]=='D'&&d[2]=='E')||(b[2]=='E'&&d[2]=='D')){
				flag3=1;
				if((b[2]=='A'&&d[2]=='B')||(b[2]=='B'&&(d[2]=='A'||d[2]=='C'))||(b[2]=='C'&&d[2]=='B')||(b[2]=='D'&&d[2]=='E')||(b[2]=='E'&&d[2]=='D'))flag4=1;
			}
		}
	}
	cout<<flag<<flag2<<flag3<<flag4;
	
	
	
	
	
	
	return 0;
} 
