#include <bits/stdc++.h>

using namespace std;
//#define ll long long
//const int maxn=;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	string a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	if(a1==b1) cout<<1;
	else return cout<<"0000",0;
	int pa=(a2[0]-'0')*10+(a2[1]-'0'),pb=(b2[0]-'0')*10+(b2[1]-'0');
	if(pa==pb) cout<<1;
	else return cout<<"000",0;
	int cha=a2[2]-'A'+1,chb=b2[2]-'A'+1;
	if(cha>chb) swap(cha,chb);
	if((cha==1||cha==2||cha==3)&&(chb==4||chb==6)) return cout<<"00",0;
	else cout<<1;
	if((cha==1&&chb==2)||(cha==2&&chb==3)||(cha==4&&chb==6)) cout<<1;
	else cout<<0;
	return 0;
}