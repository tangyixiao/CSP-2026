#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans[10];
ll a,b,va,vb;
string sa,sb,sc,sd;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>sa>>sb>>sc>>sd;
	memset(ans,0,sizeof(ans));
	if(sa==sc){
		ans[1]=1;
		if(sb[0]==sd[0]&&sb[1]==sd[1]){
			ans[2]=1;
			a=sb[2]-'A'+1;
			b=sd[2]-'A'+1;
			if(a<=3)va=1;
			if(b<=3)vb=1;
			if(va==vb){
				ans[3]=1;
				if(abs(a-b)==1)ans[4]=1;
			}
		}
	}
	for(int i=1;i<=4;i++){
		cout<<ans[i];
	}
	return 0;
}