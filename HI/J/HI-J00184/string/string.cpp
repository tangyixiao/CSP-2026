#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
    freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int count_str;
	string input_str;
	string str="";
	string ans_if;
	for(int i=1;i<=n;i++)
	{
		cin>>count_str;
		cin>>input_str;
		for(int j=1;j<=count_str;j++)
		{
			str+=input_str;
		}
	}
	for(int i=str.length()-1;i>=0;i--)
	{
		ans_if+=str[i];
	}
	if(ans_if==str)
	{
		cout<<0;
	}
	return 0;
}

