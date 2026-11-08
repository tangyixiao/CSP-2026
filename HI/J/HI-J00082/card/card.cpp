#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin >> n >> m;
	string card;
	set<char> s;
	for(int i = 0;i < n;i++)
	{
		char x;
		cin >> x;
		card.push_back(x);
		s.insert(x);
	}
	
	string zs = "";
	for(auto x : s)
		zs += x;
	
	vector<long long> ans(m);
	for(long long i = 0;i < n;i++)
	{
		string zm = "";
		for(long long j = i;j < n;j++)
		{
			char x = card[j];
			size_t p = zm.find(x);
			if(p != string :: npos)
				zm.erase(p,j);
			zm.push_back(x);
//			cout  << "zm: " << zm << endl;
//			if(j == n-1)
//				cout <<"end"<<endl;
		}
		
		for(long long p = 0;p < zs.size();p++)
		{
//			cout <<"p : " << p << endl;
//			cout << "size: "<<zs.size() << endl;
			size_t pos = zm.find(zs[p]);

//			cout << "zs : " << zs[p] <<endl;
			if(pos != string::npos)//1213
			{
				ans[p]++;
				//cout << "p : " << p <<endl;
			}
		}
	}
	for(long long i = 0;i < m;i++)
		cout << ans[i] << " ";
	
	return 0;
}
