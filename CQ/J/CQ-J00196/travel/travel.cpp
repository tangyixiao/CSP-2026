#include<bits/stdc++.h>
using namespace std;
int q,w,e,r;
int main()
{
	//freopen("travel","r",stdin);
	//freopen("travel","w",stdout);
	
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c){
		q=1;
		if(b[0]==d[0]&&b[1]==d[1]){
			w=1;
			if((b[2]=='C'&&d[2]=='D')||(b[2]=='D'&&d[2]=='C')){
				e=0;
			}else{
				e=1;
				if((b[2]+1==d[2])||(b[2]-1==d[2])){
					r=1;
				}
			}
		}
	}
	
	cout<<q<<w<<e<<r;
	return 0;
}
