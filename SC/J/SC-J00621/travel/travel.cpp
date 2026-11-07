#include<bits/stdc++.h>
using namespace std;
const int maxn=625;
string ca,sa,cb,sb,sc,sd;
int ans;
int main() {
	cin>>ca>>sa>>cb>>sb;
	freopen("travel.in",stdin);
	freopen("travel.ans",stdans);
	for(int i=1;i<=18;i++){		
        for(int j=1;j<=5;j++){
		if(sc[j]=='A'&&sd[j]=='B'||sc[j]=='B'&&sd[j]=='C'||sc[j]=='D'&&sd[j]=='E'){
			ans=1111;
		}
		if(ca==cb&&sa[i]==sb[i]){
			ans=1110;
		}else{
			cout<<'0000';
		}
	}
	}
	cout<<ans;
	return 0;
}
