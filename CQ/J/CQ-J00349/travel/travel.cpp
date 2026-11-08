#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int a,b,n,m,s,f[N];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	if(s1==s3){
		f[1]=1;
		if(s2[0]==s4[0]&&s2[1]==s4[1]){
			f[2]=1;
			if(s2[2]<='C'&&s4[2]<='C'||s2[2]>'C'&&s4[2]>'C'){
				f[3]=1;
				if(abs(s2[2]-s4[2])==1)f[4]=1;
			}
		}
	}
	cout<<f[1]<<f[2]<<f[3]<<f[4];
	return 0;
}

