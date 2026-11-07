#include <bits/stdc++.h>
using namespace std;
int c1, c2;
string s1, s2;
int main() {
	freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	//cout<<c1<<" "<<s1<<" "<<c2<<" "<<s2<<"  "<<s1[1]<<" "<<s2[1]<<" "<<s1[2]<<" "<<s2[2];
	if(c1==c2){
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout<<"1";
			bool g1=0,g2=0;
			if(s1[2]<='C') g1=0;else g1=1;if(s2[2]<='C') g2=0;else g2=1;
			if(g1==g2){
				cout<<"1";
				if(abs(int(s1[2]-s2[2]))==1){
					cout<<"1";
				}
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
