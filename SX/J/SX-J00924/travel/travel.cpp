#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<1;
			if(s1[2]<='C'){
				if(s2[2]<='C'){
					cout<<1;
					if(min(s1[2],s2[2])+1==max(s1[2],s2[2])){
						cout<<1;
					}else{
						cout<<0;
					}
				}else{
					cout<<"00";
				}
			}else{
				if(s2[2]<='C'){
					cout<<"00";
				}else{
					cout<<1;
					if(min(s1[2],s2[2])+1==max(s1[2],s2[2])){
						cout<<1;
					}else{
						cout<<0;
					}
				}
			}
		}
		else{
			cout<<"000";
		}
	}else{
		cout<<"0000";
	}



	return 0;
}