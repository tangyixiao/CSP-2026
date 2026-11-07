#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int num[3],num1[3],ans=0,ad=0;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	for(int i=0; i<a.size();i++) {
		num[i]=a[i]-'0';
	}
	for(int i=0; i<c.size(); i++) {
		num1[i]=c[i]-'0';
	}
	num[0]=num[0]*10+num[1];
	num1[0]=num1[0]*10+num1[1];
	if(num[0]==num1[0]) {
		cout<<1;
	} else {
		cout<<0<<0<<0<<0;
		return 0;
	}
	for(int i=0; i<b.size()-1; i++) {
		if(b[i]!=d[i]) {
			cout<<0;
			ad=0;
			break;
		} else {
			ans++;
		}
	}
	if(ans==2) {
		cout<<1;
		ad=1;
	}
	if(ad==0) {
		cout<<0<<0;
		return 0;
	} else {
		if(b[2]>='A'&&b[2]<'D' && d[2]>='A'&&d[2]<'D'   ||   b[2]>='D'&&b[2]<='F' && d[2]>='D'&&d[2]<='F') {
			cout<<1;
			if(b[2]-d[2]==1||d[2]-b[2]==1&&(b[2]!='C'&&d[2]!='D')&&(d[2]!='C'&&b[2]!='D')  ||  b[2]=='D'&&d[2]=='F'||b[2]=='F'&&d[2]=='D') {
				cout<<1;
			} else {
				cout<<0;
			}
		} else {
			cout<<0<<0;
			return 0;
		}
	}
	return 0;
}
