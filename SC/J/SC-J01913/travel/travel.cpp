#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a,b,c,d;
bool f1,f2;
bool flag;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<2;i++){
		a=a*10+(c1[i]-'0');
		b=b*10+(c2[i]-'0');
		c=c*10+(s1[i]-'0');
		d=d*10+(s2[i]-'0');
	}
	if(s1[2]>='A'&&s1[2]<='C') f1=0;
	else f1=1;
	if(s2[2]>='A'&&s2[2]<='C') f2=0;
	else f2=1;
	if(a==b){
		flag=1;
		cout<<1;
	}
	else cout<<0;
	if(c==d&&flag) cout<<1;
	else{
	   flag=0;
		cout<<0;
	}
	if(f1==f2&&flag) cout<<1;
	else{
		flag=0;
		cout<<0;
	}
	if(abs(s1[2]-s2[2])==1&&flag) cout<<1;
	else cout<<0;
	return 0;
}