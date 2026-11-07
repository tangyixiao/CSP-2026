#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	char p11=s1[0],p12=s1[1],p21=s2[0],p22=s2[1];
	int f1,f2;
	if(s1[2]<='C') f1=1;
	else f1=2;
	if(s2[2]<='C') f2=1;
	else f2=2;
	int a1=0,a2=0,a3=0,a4=0;
	if(c1==c2) a1=1;
	if(a1==1&&p11==p21&&p12==p22) a2=1;
	if(a2==1&&f1==f2) a3=1;
	if(a3==1){
		if(f1==1){
			if(s1[2]+1==s2[2]||s1[2]-1==s2[2]) a4=1;
		}else a4=1;
	}
	if(a1==0){
		cout<<"0000";
		return 0;
	}if(a2==0){
		cout<<"1000";
		return 0;
	}if(a3==0){
		cout<<"1100";
		return 0;
	}if(a4==0){
		cout<<"1110";
		return 0;
	}
	cout<<"1111";
	return 0;
}