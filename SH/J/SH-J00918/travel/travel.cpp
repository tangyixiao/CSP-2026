#include <bits/stdc++.h>
using namespace std;

int a[7];

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c,s,cc,ss;
	cin>>c>>s>>cc>>ss;
	if(c==cc){
		a[1]=1;
		if(s[0]==ss[0]&&s[1]==ss[1]){
			a[2]=1;
			if(('A'<=s[2]&&'C'>=s[2]&&'A'<=ss[2]&&'C'>=ss[2])||('D'<=s[2]&&'F'>=s[2]&&'D'<=ss[2]&&'F'>=ss[2])){
				a[3]=1;
				if(abs(s[2]-ss[2])==1){
					a[4]=1;
					if((s[2]=='C'&&ss[2]=='D')||(s[2]=='D'&&ss[2]=='C'))a[4]=0;
				}
		
			}
		}
	}
	
	cout<<a[1]<<a[2]<<a[3]<<a[4];
	return 0;
}
