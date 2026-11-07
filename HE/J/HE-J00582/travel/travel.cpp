#include<bits/stdc++.h>
using namespace std;
long long ans=0,cnt=0,cmp=0,cns=0;
string a,b,c,d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a[1]==c[1]&&a[2]==c[2]){
		ans++;
		if(b[1]==d[1]&&b[2]==d[2]&&b[3]!=d[3]){
			cnt++;
			if(b[3]=='A'&&d[3]=='B'||b[3]=='B'&&d[3]=='C'||b[3]=='A'&&d[3]=='C'||d[3]=='A'&&b[3]=='B'||d[3]=='B'&&b[3]=='C'||d[3]=='D'&&b[3]=='F'||d[3]=='F'&&b[3]=='D'||d[3]=='A'&&b[3]=='C'){
				cmp++;
				if(b[3]=='A'&&d[3]=='B'||b[3]=='B'&&d[3]=='C'||d[3]=='A'&&b[3]=='B'||d[3]=='B'&&b[3]=='C'||d[3]=='D'&&b[3]=='F'||d[3]=='F'&&b[3]=='D'){
					cns++;
				}
				else{
					cns=0;
				}
			}
			else{
				cmp=0;
				cns=0;
			}
		}
		else{
			cnt=0;
			cmp=0;
			cns=0;
		}
	}
	else{
		ans=0;
		cnt=0;
		cmp=0;
		cns=0;
	}
	cout<<ans<<cnt<<cmp<<cns;
	return 0;
}
