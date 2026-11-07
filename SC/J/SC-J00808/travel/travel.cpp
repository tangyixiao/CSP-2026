#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e6+10;
string c1,s1,c2,s2;
ll jl1,jl2,cx1,cx2;
void solve(){
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]=='0'){
		cx1=c1[1]-'0';
	}else{
		cx1=(c1[0]-'0')*10+c1[1]-'0';
	}
	if(c2[0]=='0'){
		cx2=c2[1]-'0';
	}else{
		cx2=(c2[0]-'0')*10+c2[1]-'0';
	}
	if(cx2==cx1){
		cout<<1;
	}else{
		cout<<"0000";
		return ;
	}
	if(s1[0]=='0'){
		jl1=s1[1]-'0';
	}else{
		jl1=(s1[0]-'0')*10+s1[1]-'0';
	}
	if(s2[0]=='0'){
		jl2=s2[1]-'0';
	}else{
		jl2=(s2[0]-'0')*10+s2[1]-'0';
	}
	if(jl1==jl2){
		cout<<1;
	}else{
		cout<<"000";
		return ;
	}
	ll x1=s1[2]-'0';
	ll x2=s2[2]-'0';
	ll xx1=x1/10%10;
	ll xx2=x2/10%10;
	if(xx1!=xx2){
		cout<<0;
	}else{
		cout<<1;
	}
	if(x1>x2){
		if((x2==x1-1)&&xx1==xx2){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		if((x2==x1+1)&&xx1==xx2){
			cout<<1;
		}else{
			cout<<0;
		}
	}
}
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	solve();
	fclose(stdin);
	fclose(stdout);
	return 0;
}