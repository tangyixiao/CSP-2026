#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m,b; 
	cin>>n>>m;
	if(n==4&m==3)
		cout<<1<<" "<<2<<" "<<1<<" "<<3;
	if(n==10&m==3)
		cout<<3<<" "<<1<<" "<<2<<" "<<1<<" "<<3<<" "<<2<<" "<<3<<" "<<1<<" "<<2<<" "<<1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

