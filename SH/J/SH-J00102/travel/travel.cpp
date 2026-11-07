#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string s1,s2,s3,s4;
	cin >> s1 >> s2 >> s3 >> s4;
	if(s3 == s1)cout << '1';
	else{
		cout << "0000";
		exit(0);
	}
	for(int i = 0;i <= 1;i++){
		if(s2[i] != s4[i])
		{
			cout << "000";
			exit(0);
		}
	}
	cout << '1';
	if((s2[2] == 'C' && s4[2] == 'D') || (s2[2] == 'D' && s4[2] == 'C'))
	{
		cout << "00";
		exit(0);
	}
	cout << '1';
	if((s2[2] == 'A' && s4[2] == 'C') || (s2[2] == 'C' && s4[2] == 'A'))cout << '0';
	else cout << '1';
	return 0;
}
