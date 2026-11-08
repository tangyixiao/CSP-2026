#include<bits/stdc++.h>
using namespace std;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	long long a;
	cin>>a;
	string b;
	long long x=0;
	for (long long i=0;i<a;i++)
	{
		long long c;
	    char d;
	    cin>>c>>d;
	    x+=c;
	}
	cout<<x/2;
	return 0;
}
