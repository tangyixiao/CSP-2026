#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b,A,B;
	char c,d;
	char ans[4];
	for (int i=0;i<=3;i++) {
		ans[i]='0';
	}
	cin>>a>>A>>c>>b>>B>>d;
	if (a==b) {
		ans[0]='1';
		if (A==B) {
			ans[1]='1';
			if (c<='C'&&d<='C') {
				ans[2]='1';
				if (c-d==1||d-c==1) {
					ans[3]='1';
				}
			}
			if (c>='D'&&d>='D') {
				ans[2]='1';
				if ((c=='D'&&d=='F')||(c=='F'&&d=='D')) {
					ans[3]='1';
				}
			}
		}
	}
	for (int i=0;i<=3;i++) {
		cout<<ans[i];
	}
	return 0;
}


