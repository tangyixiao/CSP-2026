#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n, m;
	
	cin>> n >> m;
	
	vector<int> v(n);
	
	for(int i = 0;i < n;i ++)
	{
		cin>> v[i];
	} 
	
	vector<int> v2(m + 1);
	
	int k = 0;
	
	int T = n;
	
	while(T --)
	{
		string s = "";
		
		for(int i = k;i < n;i ++)
		{
			size_t t = s.find(to_string(v[i]));
			
			if(t == string::npos)
			{
				s += to_string(v[i]);
			}
			else
			{
				s = s.substr(0, t);
				
				s += to_string(v[i]);
			}
		}
		
		for(int i = 0;i < s.size();i ++)
		{
			int temp = s[i] - '0';
			
			v2[temp] += 1;
		}
		
		k ++;
	}
	
	for(int i = 0;i < v2.size();i ++)
	{
		if(v2[i] != 0)
		{
			cout<< v2[i] <<" ";
		}
	}
	
	return 0;
}
