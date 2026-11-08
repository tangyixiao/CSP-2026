#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    int c1,c2;
    string s1,s2;
    cin >> c1 >> s1 >> c2 >> s2;
    string f="0000";
    if(c1==c2){
    	if(s1[0]!=s2[0] || s1[1]!=s2[1]){
    		f="1000";
		}
		else{
			char ch1=s1[2],ch2=s2[2];
			if((ch1=='A' || ch1=='B' || ch1=='C') && (ch2=='A' || ch2=='B' || ch2=='C')){
				if(((ch1=='A' || ch1=='C') && ch2=='B') || (ch1=='B'))f="1111";
				else f="1110";
			}
			else if((ch1=='D' || ch1=='F') && (ch2=='D' || ch2=='F')){
				f="1111";
			}
			else f="1100";
		}
	}
	cout << f;
	return 0;
}

