#include <iostream>
#include <cmath>
using namespace std;
string c1,s1,c2,s2,ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1==c2){
		ans+='1';
		string n1="",n2="";
		n1+=s1[0];n1+=s1[1];n2+=s2[0];n2+=s2[1];
		if (n1==n2){
			int a1,a2;
			if (s1[2]=='D'||s1[2]=='E') a1=1;
			else a1=2;
			if (s2[2]=='D'||s2[2]=='E') a2=1;
			else a2=2;
			if (a1==a2){
				int k=abs((int)(s1[2])-(int)(s2[2]));
				if (k==1) ans="1111";
				else ans="1110";
			}
			else ans="1100";
		}
		else ans="1000";
	}
	else ans="0000";
	cout << ans << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
