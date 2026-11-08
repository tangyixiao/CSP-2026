#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int N;
	string s = "";
	
	cin>> N;
	
	while(N --)
	{
		int Q;
		char c;
		
		cin>> Q >> c;
		
		for(int i = 0;i < Q;i ++)
		{
			s += c;
		}
	}
	
	string s2 = s;
	
	reverse(s2.begin(), s2.end());
	
	if(s2 == s)
	{
		cout<< 0 <<endl;
		
		return 0;
	}
	else if(s.size() % 2 == 1)
	{
		string cut_s_first = s.substr(0, s.size() / 2);
		string cut_s_end = s.substr(s.size() / 2 + 1);
		
		int cnt = 0;
		
		for(int i = 0;i < s.size() / 2;i ++)
		{
			if(cut_s_first[i] != cut_s_end[i])
			{
				cnt ++;
			}
		}
		
		cout<< cnt <<endl;
		
		return 0;
	}
	else if(s.size() % 2 == 0)
	{
		string cut_s_first = s.substr(0, s.size() / 2);
		string cut_s_end = s.substr(s.size() / 2);
		
		int cnt = 0;
		
		for(int i = 0;i < s.size() / 2;i ++)
		{
			if(cut_s_first[i] != cut_s_end[i])
			{
				cnt ++;
			}
		}
		
		cout<< cnt <<endl;
		
		return 0;
	}
	
	return 0;
}
