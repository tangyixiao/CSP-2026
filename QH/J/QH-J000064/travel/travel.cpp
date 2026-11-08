#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1[10];
	string s2[10];
	char c1,c2;
	int num=0;
	string A,B,C,D,F;
	cin>>c1>>s1[0]>>s1[1]>>s1[2]>>c2>>s2[0]>>s2[1]>>s2[2];
	if(s1[0]==s2[0]&&s1[1]==s2[1]) {
		num=num+100;
	} else {
		num=num+0;
	}
	if(c1==c2) {
		num=num+1000;
	} else if(c1!=c2) {
		num=num+0;
	}

	cout<<num;
	fclose(stdin);
	fclose(stdout);

	return 0;
}
