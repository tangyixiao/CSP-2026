#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int cnt1,cnt2;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0; i<2; i++) {
		cnt1*=10;
		cnt1+=s1[i];
		cnt2*=10;
		cnt2+=s2[i];
	}
	if(c1==c2) {
		cout<<"1";

	} else {
		cout<<"0";
	}

	if(cnt1==cnt2&&c1==c2) {
		cout<<"1";
	} else {
		cout<<"0";
	}
	if(c1==c2&&cnt1==cnt2&&(((s1[2]=='A'||s1[2]=='B'||s1[2]=='C')&&(s2[2]=='A'||s2[2]=='B'||s2[2]=='C'))||((s1[2]=='D'||s1[2]=='F')&&(s2[2]=='D'||s2[2]=='F')))) {
		cout<<"1";
	} else {
		cout<<"0";
	}
	if(((s1[2]-s2[2]==1)||(s2[2]-s1[2]==1))&&cnt1==cnt2&&c1==c2) {
		if((s1[2]!='C'&&s2[2]!='D')&&((s1[2]!='D')&&(s2[2]!='C'))) {
			cout<<"1";
		} else {
			cout<<"0";
		}
	} else {
		cout<<"0";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
