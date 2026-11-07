#include<bits/stdc++.h>
#define int long long
using namespace std;
string s1,s2,t1,t2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>s1>>s2>>t1>>t2;
	if(s1==t1){
		cout<<'1';
		if(s2[0]==t2[0]&&s2[1]==t2[1]){
			cout<<'1';
			int vis1=((s2[2])<='C'),vis2=(t2[2]<='C');
			if(vis1==vis2){
				cout<<'1';
				if(vis1==1){
					if(labs(s2[2]-t2[2])==1)cout<<"1";
					else cout<<0;
				}else{
					if((s2[2]=='D'&&t2[2]=='F')||(s2[2]=='F'&&t2[2]=='D')){
						cout<<"1";
					}else cout<<0;
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
}