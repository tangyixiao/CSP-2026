#include<bits/stdc++.h>
using ll=long long;
using namespace std;
string c1,c2,s1,s2;
bool ans[4];
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>c1>>s1>>c2>>s2;
	bool f=0;
	if(c1==c2) ans[0]=1,f=1;
	else if(c1!=c2) ans[0]=0;
	if(f){
		string a=s1.substr(0,2);
		string b=s2.substr(0,2);
		bool g=0;
		if((a[0]==b[0])&&(a[1]==b[1])) ans[1]=1,g=1;
		else if((a[0]!=b[0])||(a[1]!=b[1])) ans[1]=0;
		if(g){
			char c=s1[2];
			char d=s2[2];
			bool flag=0;
			if((c=='A')||(c=='B')||(c=='C')){
				if((d=='A')||(d=='B')||(d=='C')) ans[2]=1,flag=1;
				else ans[2]=0;
			}else if((c=='D')||(c=='F')){
				if((d=='D')||(d=='F')) ans[2]=1,flag=1;
				else ans[2]=0;
			}
			if(flag){
				if(((c=='A')&&(d=='B'))||((c=='B')&&(d=='C'))||((c=='D')&&(d=='F'))) ans[3]=1;
				else if(((c=='B')&&(d=='A'))||((c=='C')&&(d=='B'))||((c=='F')&&(d=='D'))) ans[3]=1;
				else ans[3]=0;
			}
		}
	}
	for(int i=0;i<4;++i) cout<<ans[i];
}