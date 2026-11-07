#include<bits/stdc++.h>
using namespace std;
int c,cc;
string s,ss;
//我想上洛谷迷惑行为大赏，看我后面的文件 (下午还有)
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c>>s>>cc>>ss;
	if(c==cc){
		cout<<1;
		if(s.substr(0,2)==ss.substr(0,2)){
			cout<<1;
			if((s[2]<='C'&&ss[2]<='C')||(s[2]>'C'&&ss[2]>'C')){
				cout<<1;
				if(abs(s[2]-ss[2])==1) cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
//	cout<<" "<<s.substr(0,2)<<endl;
	
	
	return 0;
} 
