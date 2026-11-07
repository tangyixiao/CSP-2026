#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int t[1000000000];
    int x[1000000000];
	int a,k=0,b=0;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>t[i]>>x[i];
		b+=t[i];
	}
	cout<<b/k;
	return 0;
}
