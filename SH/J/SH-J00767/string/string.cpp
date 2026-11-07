#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int num,num_for_one,num_for_all=0,changing=0;
	char a;
	string longga="",aggonl="";
	cin>>num;
	for (int i=1;i<=num;i++)
	{
		cin>>num_for_one>>a;
		for (int j=1;j<=num_for_one;j++){
			longga+=a;
		}
		num_for_all+=num_for_one;
	}
	for (int i=num_for_all-1;i>=0;i--){
		aggonl+=longga[i];
	}
	for (int i=0;i<num_for_all;i++){
		if(longga[i]!=aggonl[i])changing++;
	}
	cout<<changing/2;
	return 0;
}
