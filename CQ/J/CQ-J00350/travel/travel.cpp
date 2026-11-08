#include<bits/stdc++.h>
#define int long long
using namespace std;
namespace T1{
	string s1,s2,t1,t2;
	signed main(){
		freopen("travel.in","r",stdin);
		freopen("travel.out","w",stdout);
		ios::sync_with_stdio(0);
		cin.tie(0);cout.tie(0);
		cin>>s1>>s2>>t1>>t2;
		if(s1==t1){
			cout<<"1";
			string z1=s2.substr(0,2);
			string z2=t2.substr(0,2);
			if(z1==z2){
				cout<<"1";
				char c1=s2[2],c2=t2[2];
				if(c1>='A'&&c2<='C'&&c2>='A'&&c2<='C'){
					cout<<"1";
					if(abs(c1-c2)==1)cout<<"1";
					else cout<<"0";
				}
				else if(c1>='D'&&c2<='F'&&c2>='D'&&c2<='F'){
					cout<<"1";
					if(abs(c1-c2)==1)cout<<"1";
					else cout<<"0";
				}
				else cout<<"00";
			}
			else cout<<"000";
		}
		else cout<<"0000";
		return 0;
	}
}
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	T1::main();
	return 0;
}
//内存：592KB
//时间：O(1)
//预估分数：100pts 
