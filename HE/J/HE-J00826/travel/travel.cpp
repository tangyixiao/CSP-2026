#include<bits/stdc++.h>
using namespace std;
int c1,c2;
string s1,s2;
int t1,t2,t12,t22,t13,t23;
bool onside(int x,int y)
{
	if(x<=2 && y<=2) return 1;
	else if(y>2 && x>2) return 1;
	else return 0;
 } 
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2) cout << 1;
	else
	{
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
		return 0;
	} 
	t1=s1[0]-'0';
	t12=s1[1]-'0';
	t2=s2[0]-'0';
	t22=s2[1]-'0';
	t13=s1[2]-'A';
	t23=s2[2]-'A';
	if(t1==t2 && t12==t22) cout << 1;
	else
	{
		cout << 0;
		cout << 0;
		cout << 0;
		return 0;
		
	} 
	if(onside(t13,t23))cout << 1;
	else cout << 0;
	int maxt=max(t13,t23);
	int mint=min(t13,t23);
	if(onside(t13,t23) && maxt-mint==1) cout << 1;
	else cout << 0;
	return 0;
}
