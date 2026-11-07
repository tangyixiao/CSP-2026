#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll c1,c2,s1,s2;
char v1,v2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>v1>>c2>>s2>>v2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	if(s1!=s2){
		cout<<"1000";
		return 0;
	}
	if((v1-'A')==0&&(v2-'B')==0||(v2-'A')==0&&(v1-'B')==0||(v1-'C')==0&&(v2-'D')==0||(v2-'C')==0&&(v1-'D')==0||(v1-'D')==0&&(v2-'F')==0||(v2-'D')==0&&(v1-'F')==0)cout<<"1111";
	else cout<<"1110";
	return 0;
}

