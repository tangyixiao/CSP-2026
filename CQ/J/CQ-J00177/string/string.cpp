#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int a;
	string b,c;
	long long longb=0;
	cin>>n;
	for(int i = 0;i < n;i++)
	{
		cin>>a>>c;
		for(int i = 1;i <= a;i++)
		{
			b+=c;
			longb++;
		}
	}
	int mid=longb/2;
	int num=0;
	for(int i = 0;i <= mid;i++)
	{
		if(b[i]==b[longb-i-1])
		{
			continue;
		}
		else
		{
			num++;
		}
	}
	cout<<num; 
	return 0;
}
