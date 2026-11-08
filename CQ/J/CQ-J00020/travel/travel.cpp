#include <bits/stdc++.h>
using namespace std;
//µ÷ÊÔ£º1 2 3 4 5 ans ***%
//		T T T T T 5/5 100%
//					 20/20
// Can Use!!!
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int n1,n2;
	string s1,s2;
	cin>>n1>>s1>>n2>>s2;
	if(n1==n2) {
		n1=(s1[0]-'0')*10+(s1[1]-'0');
		n2=(s2[0]-'0')*10+(s2[1]-'0');
		if(n1==n2) {
			char a=s1[2]-'A',b=s2[2]-'A';
			if(a==5) {
				--a;
			}
			if(b==5) {
				--b;
			}
			if(a<3&&b<3||a>2&&b>2) {
				if(a<b) {
					swap(a,b);
				}
				if(a-b==1) {
					cout<<"1111";
				} else {
					cout<<"1110";
				}
			} else {
				cout<<"1100";
			}
		} else {
			cout<<"1000";
		}
	} else {
		cout<<"0000";
	}
	return 0;
}
