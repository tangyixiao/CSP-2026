#include <bits/stdc++.h>
using namespace std;
#define int long long

int f(vector <int> a,int b){
	for (int i = 0;i < a.size();i ++){
		if (a[i] == b) return i;
	}
	return -1;
}

signed main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin >> n >> m;
	vector <int> all;
	vector <int> left(m + 1);
	
	for (int i = 0;i < n;i ++){
		int e;
		cin >> e;
		all.push_back(e);
	}
	
	
	for (int j = 0;j < n;j ++){
		vector <int> lin;
		for (int i = j;i < n;i ++){
			int e = all[i];
			if (f(lin,e) == -1) lin.push_back(e);
			else {
				lin.erase(lin.begin() + f(lin,e),lin.end());
				lin.push_back(e);
			}
		}
		for (int i = 0;i < lin.size();i ++){
			left[lin[i]] ++;
		}
	}
	
	for (int i = 1;i <= m;i ++){
		cout << left[i] << " ";
	}
	
	fclose(stdin);
	fclose(stdout);
	 
	return 0;
} 
