#include<bits/stdc++.h>
using namespace std;
const int N=1e5+3;
#define ll long long
ll n,m,k,ans;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			int f1=(s1[2]>='A'&&s1[2]<='C');
			int f2=(s2[2]>='A'&&s2[2]<='C');
			if(f1==f2){
				cout<<1;
				if(f1==0){
					cout<<1;
				}else if(abs(s1[2]-s2[2])==1){
					cout<<1;
				}else{
					cout<<0;
				}
			}else{
				cout<<"00";
			}
		}else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}
	return 0;
}