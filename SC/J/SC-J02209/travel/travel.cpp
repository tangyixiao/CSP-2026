#include<bits/stdc++.h>
#define int long long

using namespace std;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int k1,k2;
	string s1,s2;
	cin>>k1>>s1>>k2>>s2;
	int n = (s1[0]-'0')*10+s1[1]-'0',m = (s2[0]-'0')*10+s2[1]-'0';
	if(k1==k2){
		if(n==m){
			char c1 = s1[2],c2 = s2[2];
			if((c1>='A'&&c1<='C'&&c2>='A'&&c2<='C')||(c1>='D'&&c1<='E'&&c2>='D'&&c2<='E')){
				if(c1-c2==1||c2-c1==1){
					cout<<"1111";
				}else{
					cout<<"1110";
				}
			}else{
				cout<<"1100";
			}
		}else{
			cout<<"1000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
} 