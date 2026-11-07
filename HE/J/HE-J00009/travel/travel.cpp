#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
inline void solve(){
	if(c1==c2){
		cout<<"1";
		int t1=0,t2=0,len1=s1.size()-1,len2=s2.size()-1;
		for(int i=0;i<len1;++i)t1+=t1*10+s1[i]-'0';
		for(int i=0;i<len2;++i)t2+=t2*10+s2[i]-'0';
//		cout<<t<<' '<<t<<'\n'; 
		if(t1==t2){
			cout<<"1";
			if((s1[len1]<='C'&&s2[len2]<='C')||(s1[len1]>'C'&&s2[len2]>'C')){
				cout<<"1";
				if(abs((int)(s1[len1]-s2[len2]))==1)cout<<"1";
				else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	solve();
	return 0;
}  
