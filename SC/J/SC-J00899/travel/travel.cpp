#include <bits/stdc++.h>
using namespace std;
bool issameside(char a,char b)
{
	bool a1=0,b1=0;
	if(a-'A'<3)a1=1;
	if(b-'A'<3)b1=1;
	return a1==b1;
}
bool isnear(char a,char b)
{
	if(issameside(a,b)==false)return false;
	return abs((double)(a-'A')-(double)(b-'A'))<=1;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	char s1,s2;
	
	cin >> c1;
	int sum1=0;
	for(int i=0;i<2;i++)
	{
		cin >> s1;
		sum1*=10;
		sum1+=(s1-'0');
	}
	cin >> s1;
	
	cin >> c2;
	int sum2=0;
	for(int i=0;i<2;i++)
	{
		cin >> s2;
		sum2*=10;
		sum2+=(s2-'0');
	}
	cin >> s2;
	
	if(c1==c2)cout << 1;
	else cout << 0;
	if(c1==c2&&sum1==sum2)cout << 1;
	else cout << 0;
	if(c1==c2&&sum1==sum2&&issameside(s1,s2))cout << 1;
	else cout << 0;
	if(c1==c2&&sum1==sum2&&issameside(s1,s2)&&isnear(s1,s2))cout << 1;
	else cout << 0;
    fclose(stdin);
    fclose(stdout);
	return 0;
}