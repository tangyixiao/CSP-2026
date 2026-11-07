#include<bits/stdc++.h>
#define int long long
using namespace std;
int c1,c2;
string s1,s2;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) {
		cout<<1;
		bool T=0;
		if(s1[0]==s2[0]&&s1[1]==s2[1]) {
			cout<<1;
			T=1;
			if((s1[2]<='C'&&s2[2]<='C')||(s1[2]>='D'&&s2[2]>='D')){
				cout<<1;
				if(T) {
					if(abs(s1[2]-s2[2])==1) {
						cout<<1;
					}
					else cout<<0;
				}
				else {
					if(s1[2]==s2[2]&&abs(s1[1]-s2[1])==1){
						cout<<1;
					}
					else cout<<0;
				}
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	fclose(stdin);
	fclose(stdout);
	return 0;
}
