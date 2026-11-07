#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		string a1,a2;
		for(int i=0;i<=1;i++) a1=a1+s1[i],a2=a2+s2[i];
		if(a1==a2){
			cout<<"1";
			if(s1[2]<'D'&&s2[2]<'D'){
				cout<<"1";
				char minn=min(s1[2],s2[2]);
				char maxn=max(s1[2],s2[2]);
				if(minn==maxn-1) cout<<"1";
				else cout<<"0";
			}else if(s1[2]>='D'&&s2[2]>='D') cout<<"11";
			else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
	return 0;
}