#include<iostream>
#include<cmath>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool t1,t2,t3,t4;
	if(c1[0] == c2[0]&&c1[1] == c2[1])
		t1 = 1;
	else
		t1 = 0;
	if(s1[0] == s2[0]&&s1[1] == s2[1]&&t1)
		t2 = 1;
	else
		t2 = 0;
	int a = s1[2] - 'A',b = s2[2] - 'A';
	if(((a > 2&&b > 2)||(a < 3&&b < 3))&&t2)
		t3 = 1;
	else
		t3 = 0;
	if(abs(a - b) == 1&&t3)
		t4 = 1;
	else
		t4 = 0;
	cout<<t1<<t2<<t3<<t4;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 