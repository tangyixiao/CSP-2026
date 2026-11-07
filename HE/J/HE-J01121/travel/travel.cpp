#include <bits/stdc++.h>
using namespace std;
string s1,s2;
string s3,s4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> s1 >> s2 >> s3 >> s4;
	if(s1==s3) cout << 1;
	else cout << 0;
	string pai1="",pai2="";
	for(int i=0;i<s2.size()-1;i++){
		pai1+=s2[i];
		pai2+=s4[i];
	}
	if(pai1==pai2 && s1==s3) cout << 1;
	else cout << 0;
	if((s1==s3 && pai1==pai2) && ((s2[2]<='C' && s4[2]<='C') || (s2[2]>='D' && s2[2]>='D'))) cout << 1;
	else cout << 0;
	if(((s2[2]=='C' || s2[2]=='D') && (s4[2]=='C' || s4[2]=='D')) && s2[2]!=s4[2]) cout << 0;
	else if(((s2[2]=='F' || s2[2]=='D') && (s4[2]=='F' || s4[2]=='D')) && (s2[2]!=s4[2] && (pai1==pai2 && s1==s3))) cout << 1;
	else if((s2[2]-1==s4[2] || s2[2]+1==s4[2]) && (pai1==pai2 && s1==s3)) cout << 1;
	else cout << 0;
	return 0;
}
