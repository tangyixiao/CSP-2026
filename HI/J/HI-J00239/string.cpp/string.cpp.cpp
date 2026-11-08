#include<bits/stdc++.h>
using namespace std;
int a[100000005];
int main()
{
	freopen("string,in","r",stdin);
	freopen("string,out","w",stdout);
	
	int s,num=0,ant=0;
	cin>>s;
	for(int i=0;i<=s;i++){
		cin>>a[i];
		ant=a[i];
	}
	cout<<num;
	return 0;
}
