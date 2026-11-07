#include<bits/stdc++.h>
using namespace std;
int s[100000000];
char b[100000000];
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int a;
	cin>>a;
	bool se=false;
	if(a%2==0) {
		se=true;
	} else {
		se=false;
	}
	for(int i=1; i<=a; i++) {
		cin>>s[i];
		cin>>b[i];
	}
	//--------字符一样
	int we=0;
	for(int i=1; i<=a; i++) {
		if(b[1]==b[i]) { //字符
			we++;
		}
	}
	if(we==a) {
		cout<<"0";
		return 0;
	}
	//-------数量一样
	int ans=0,qw=0;
	for(int i=1; i<=a; i++) {
		if(s[1]==s[i]) { //shu
			if(b[1]!=b[i]) { //字符
				ans+=s[i];
				qw++;
			}
		}
	}
	if(qw==a) {
		cout<<ans;
		return 0;
	}
	//-------------------
	int wer=0;
	for(int i=1; i<=a; i++) {
		if(b[i]==b[a-i+1]) {
			if(s[i]!=s[a-i+1]) {
				if(s[i]>s[a-i+1]) {
					if(s[i]>s[i+1]) {
						wer+=s[i]-s[a-i+1];
						s[i]--;
					} else {
						s[i]++;
						wer+=s[i]-s[a-i+1];
					}
				}
			}
		}

	}
	cout<<wer;
	return 0;
}
