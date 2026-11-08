#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int a,b;
int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		int n=s1.size(),m=s2.size();
		for(int i=0;i<n-1;i++){
			a=a*10+(s1[i]-'0');
		}
		for(int i=0;i<m-1;i++){
			b=b*10+(s2[i]-'0');
		}
		if(a==b){
			cout<<"1";
			a=s1[n-1]-'A'+1;
			b=s2[m-1]-'A'+1;
			if((a<=3 && b<=3) || (a>3 && b>3)){
				cout<<"1";
				if(abs(a-b)==1) cout<<"1";
				else cout<<"0";
			}else cout<<"00";
		}else cout<<"000";
	}else cout<<"0000";
    return 0;
}
