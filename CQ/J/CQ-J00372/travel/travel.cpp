#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define f(i,x,y) for(int i=x;i<=y;++i)
#define ff(i,x,y) for(int i=x;i>=y;--i)
#define gcd(x) __gcd(x)
#define fi first
#define se second
string a,b,c,d;
int cx1,cx2,ps1,ps2,zw1,zw2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	cin>>a>>b>>c>>d;
	int l1=a.size(),l2=b.size(),l3=c.size(),l4=d.size();
	f(i,0,l1-1){
		if(i==0&&a[i]=='0')continue;
		cx1=cx1*10+a[i]-'0';
	}
	f(i,0,l2-1){
		if(i==0&&b[i]=='0')continue;
		if(b[i]>='A'&&b[i]<='Z')zw1=1+b[i]-'A'; 
		else ps1=ps1*10+b[i]-'0';
	}
	f(i,0,l3-1){
		if(i==0&&c[i]=='0')continue;
		cx2=cx2*10+c[i]-'0';
	}
	f(i,0,l4-1){
		if(i==0&&d[i]=='0')continue;
		if(d[i]>='A'&&d[i]<='Z')zw2=1+d[i]-'A'; 
		else ps2=ps2*10+d[i]-'0';}
	if(cx1!=cx2||zw1==zw2){cout<<"0000";return 0;}else cout<<"1";
	if(ps1!=ps2){cout<<"000";return 0;}else cout<<"1";
	if(!((zw1>=1&&zw2>=1&&zw1<=3&&zw2<=3)||(zw1>=4&&zw2>=4&&zw1<=5&&zw2<=5))){
	cout<<"00";return 0;}else cout<<"1";
	if(abs(zw1-zw2)==1)cout<<1;else cout<<0;
	fclose(stdin);fclose(stdout);
	return 0;
}
