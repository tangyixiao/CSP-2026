#include <iostream> 
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,c;
	string b,d;
	cin >> a>>b>>c>>d;
	if(a=c) cout << 0;
	else cout << 1;
	if(b==d) cout << 111;
	else cout << 000; 
	return 0;
}
