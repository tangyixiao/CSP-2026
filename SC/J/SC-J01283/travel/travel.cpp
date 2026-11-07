#include<bits/stdc++.h>
using namespace std;
int c1,c2,h1,h2,ans[5];
string s1,s2;
char a1,a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) ans[1]=1;else {cout<<"0000";return 0;}
	for(int i=0;i<3;i++){
		if(i<2){
			h1=h1*10+s1[i],h2=h2*10+s2[i];
		}
		else a1=s1[i],a2=s2[i];
	}
	if(h1==h2)ans[2]=1;
	if(ans[2]&&('A'<=a1&&a1<='C'&&'A'<=a2&&a2<='C')||(a1=='D'||a1=='F'&&a2=='D'||a2=='F'))ans[3]=1;
	if(ans[3]&&abs(int(a1)-int(a2))==1) ans[4]=1;
	for(int i=1;i<=4;i++) cout<<ans[i];
	return 0;
}