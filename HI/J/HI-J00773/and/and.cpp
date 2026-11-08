#include<bits/stdc++.h>
using namespace std;

vector<long long> bit;

void start_bit()
{
	long long n = 1;
	
	int k = 0;
	
	for(long long i = 1;k <= 33;i *= 2)
	{
		bit.push_back(i);
		
		k ++;
	}
}

string to_two(long long n)
{
	string s = "";
	
	for(int i = bit.size() - 1;i >= 0;i --)
	{
		if(n >= bit[i])
		{
			s += '1';
			
			n -= bit[i];
		}
		else
		{
			s += '0';
		}
	}
	
	int cut = 0;
	
	for(int i = 0;i < s.size();i ++)
	{
		if(s[i] == '0')
		{
			cut ++;
		}
		else
		{
			break;
		}
	}
	
	s = s.substr(cut);
	
	return s;
}

int how_many_one(string s)
{
	int cnt = 0;
	
	for(int i = 0;i < s.size();i ++)
	{
		if(s[i] == '1')
		{
			cnt ++;
		}
	}
	
	return cnt;
}

bool cmp(pair<string, int> a, pair<string, int> b)
{
	if(a.first.size() == b.first.size())
	{
		return a.second > b.second;
	}
	
	return a.first.size() > b.first.size();
}

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	int n, m;
	
	cin>> n >> m;
	
	vector<pair<string, int>> vs;
	
	start_bit();
	
	for(int i = 0;i < n;i ++)
	{
		long long n;
		
		cin>> n;
		
		vs.push_back({to_two(n), how_many_one(to_two(n))});
	}
	
	sort(vs.begin(), vs.end(), cmp);
	
	vector<string> vsm;
	
	for(int i = 0;i < m;i ++)
	{
		vsm.push_back(vs[i].first);
	}
	
	vector<string> v(40);
	
	for(int i = 0;i < vsm[m - 1].size();i ++)
	{
		for(int j = 0;j < m;j ++)
		{
			v[i] += vsm[j][i];
		}
	}
	
	string s = "";
	
	for(int i = 0;i < vsm[m - 1].size();i ++)
	{
		size_t t = v[i].find('0');
		
		if(t == string::npos)
		{
			s += '1';
		}
		else
		{
			s += '0';
		}
	}
	
	int cut = 0;
	
	for(int i = 0;i < s.size();i ++)
	{
		if(s[i] == '0')
		{
			cut ++;
		}
		else
		{
			break;
		}
	}
	
	s = s.substr(cut);
	
	reverse(s.begin(), s.end());
	
	long long COUT = 0;
	
	for(int i = 0;i < s.size();i ++)
	{
		if(s[i] == '1')
		{
			COUT += bit[i];
		}
	}
	
	cout<< COUT <<endl;
	
	return 0;
}
