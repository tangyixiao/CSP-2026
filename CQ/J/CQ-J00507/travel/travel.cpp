#include<bits/stdc++.h>
using namespace std;
using ll = long long;
string a,aa,b,bb,ans;
ll q[2],w[2];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >>a>>aa>>b>>bb;
	for(int i=0;i<(int)a.size();i++){
		q[0]=q[0]*10+(a[i]-'0');
	}
	for(int i=0;i<(int)aa.size()-1;i++){
		q[1]=q[1]*10+(aa[i]-'0');
	}
	for(int i=0;i<(int)b.size();i++){
		w[0]=w[0]*10+(b[i]-'0');
	}
	for(int i=0;i<(int)bb.size()-1;i++){
		w[1]=w[1]*10+(bb[i]-'0');
	}
	if(q[0]==w[0]){
		ans+="1";
		if(q[1]==w[1]){
			ans+="1";
			if((aa[2]<='C'&&bb[2]<='C')||(aa[2]>'C'&&bb[2]>'C')){
				ans+="1";
				if(aa[2]<='C'&&bb[2]<='C'&&(aa[2]+1==bb[2]||bb[2]+1==aa[2])){
					ans+="1";
				}else if(aa[2]>'C'&&bb[2]>'C'){
					ans+="1";
				}else{
					ans+="0";
				}
			}else{
				ans+="00";
			}
		}else{
			ans+="000";
		}
	}else{
		cout <<"0000";
		return 0;
	}
	cout <<ans;
	return 0;
} 
