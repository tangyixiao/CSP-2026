#include <bits/stdc++.h>
using namespace std;
namespace contest{
	string C,S,C2,S2;
	int c,s,c2,s2;
	int main(){
		cin>>C>>S>>C2>>S2;
		int len=C.size(),len2=S.size();
		for (int i=0;i<len;i++){
			c=c*10+(C[i]-'0');
			c2=c2*10+(C2[i]-'0');
		}
		for (int i=0;i<len2-1;i++){
			s=s*10+(S[i]-'0');
			s2=s2*10+(S2[i]-'0');
		}
		if (c==c2) cout<<1;
		else{
			cout<<"0000";
			return 0;	
		}
		if (s==s2) cout<<1;
		else{
			cout<<"000";
			return 0;
		}
		int ss=S[len2-1]-'A'+1,ss2=S2[len2-1]-'A'+1;
		if ((ss<=3&&ss2<=3)||(ss>=4&&ss2>=4)) cout<<1;
		else{
			cout<<"00";
			return 0;
		}
		if ((ss<=3&&ss2<=3&&abs(ss-ss2)==1)||(ss>=4&&ss2>=4&&abs(ss-ss2)==1)) cout<<1;
		else cout<<0;
		return 0;
	}	
};
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	contest::main();
	return 0;
}
