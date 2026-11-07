#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> a;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	int k;
	for(int i = 0;i<n;i++){
		cin>>k;
		a.push_back(k);
	}
	return 0;
}
