#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int t1,t2,l1,l2,r1,r2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	t1=(c1[0]-'0')*10+c1[1]-'0';
	t2=(c2[0]-'0')*10+c2[1]-'0';
	l1=(s1[0]-'0')*10+s1[1]-'0';
	l2=(s2[0]-'0')*10+s2[1]-'0';
	r1=s1[2];
	r2=s2[2];
	if(t1==t2){
		cout<<1;
		if(l1==l2){
			cout<<1;
			if((r1<='C' && r2<='C') || (r1>='D' && r2>='D')){
				cout<<1;
				if(abs(r1-r2)==1)cout<<1;
				else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}
