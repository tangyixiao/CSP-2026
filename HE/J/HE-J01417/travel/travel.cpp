#include<bits/stdc++.h>
using namespace std;
#define ll long long
string c1,s1,c2,s2;
ll x,y;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}cout<<1;
	if(s1[0]==s2[0]&&s1[1]==s2[1]) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	x=s1[2]-'A'+1,y=s2[2]-'A'+1;
	if((x>3&&y>3)||(x<4&&y<4)) cout<<1;
	else {
		cout<<"00";return 0;
	}
	if(abs(x-y)==1) cout<<1;
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
