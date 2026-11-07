#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a[15];
	for(int i=1;i<=10;i++) {
		cin>>a[i];
	}
	char answer[5];
	int c1=(a[1]*10+a[2]),c2=(a[6]*10+a[7]);
	int s1=(a[3]*10+a[4]),s2=(a[8]*10+a[9]);
	if(c1==c2) answer[1]='1';
	else {
		for(int i=1;i<=4;i++) {
			answer[i]='0';
			cout<<answer[i];
		}
		return 0;
	}
	if(s1==s2) answer[2]='1';
	else {
		answer[2]='0';
		answer[3]='0';
		answer[4]='0';
		for(int i=1;i<=4;i++) {
			cout<<answer[i];
		}
		return 0;
	}
	if((a[5]=='A'||a[5]=='B'||a[5]=='C')&&(a[10]=='A'||a[10]=='B'||a[10]=='C')) answer[3]='1';
	else if((a[5]=='D'||a[5]=='F')&&(a[10]=='D'||a[10]=='F')) answer[3]='1';
	else {
		answer[3]='0';
		answer[4]='0';
		for(int i=1;i<=4;i++) {
			cout<<answer[i];
		}
		return 0;
	}
	answer[4]='0';
	if(answer[3]!='0') {
		if((a[5]=='A'||a[5]=='B')&&(a[10]=='A'||a[10]=='B')) answer[4]='1';
		if((a[5]=='B'||a[5]=='C')&&(a[10]=='C'||a[10]=='B')) answer[4]='1';
		if((a[5]=='D'||a[5]=='F')&&(a[10]=='D'||a[10]=='F')) answer[4]='1';
	}
	for(int i=1;i<=4;i++)
		cout<<answer[i];
	return 0;
}
