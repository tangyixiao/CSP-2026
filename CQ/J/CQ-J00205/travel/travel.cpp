#include <bits/stdc++.h>
using namespace std;
int c1,c2,ans;
string s1,s2;
bool q3 = false; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int n1 = int(s1[0] + s1[1]),n2 = int(s2[0] + s2[1]);
	char l1 = char(s1[2]),l2 = char(s2[2]);
	if (c1 == c2)
		ans += 1000;
	else{
		cout << "0000";
		return 0;
	}
	if (n1 == n2)
	{
		ans += 100;
		if ((l1 == 'D' || l1 == 'F') && (l2 == 'D' || l2 == 'F'))
		{
			ans += 10;
			q3 = true;
		}
		else if ((l1 == 'A' || l1 == 'B' || l1 == 'C') && (l2 == 'A' || l2 == 'B' || l2 == 'C'))
		{
			ans += 10;
			q3 = true;
		}
	}
	if (q3){
		if (l1 == 'A'){
			if (l2 == 'B')
				ans++;
		}
		else if (l1 == 'B'){
			if (l2 == 'A' || l2 == 'C')
				ans++;
		}
		else if (l1 == 'C'){
		
			if (l2 == 'B')
			ans++;
		}
		else if (l1 == 'D' || l1 == 'F'){
			if (l2 == 'D' || l2 == 'F')
				ans++;
		}
	}
	cout << ans << ' ';
	return 0;
} 
