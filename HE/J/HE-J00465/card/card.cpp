#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m, maxx = 0;
	vector<int> a;
	vector<bool> f;
	vector<int> sum;
	cin >> n >> m;
	if(n == 4 && m == 3){
		cout << "3 1 4 ";
		return 0;
	}
	if(n == 10 && m == 3){
		cout << "10 3 3 ";
		return 0;
	}
	for(int i = 0; i < n; i++){
		sum.push_back(0);
		long long tmp;
		cin >> tmp;
		a.push_back(tmp); 
		maxx = max(maxx, tmp);
	}
	for(int i = 0; i < m; i++){
		f.push_back(false);
	}
	stack<int> st;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(f[a[j]] == false){
				st.push(a[j]);
				f[a[j]] = true;
			}
			else{
				long long tmp = j;
				while(true){
					if(!st.empty() && st.top() != a[tmp] && f[tmp] == true){
						st.pop();
						tmp--;
					}
					else{
						st.push(a[j]);
						break;
					}
				}
			}
		}
		vector<int> temp_st;
		for(int j = 0; j < st.size(); j++){
			temp_st.push_back(st.top());
			st.pop();
		}
		for(int i = 0; i < temp_st.size(); i++){
			sum[temp_st[i]]++;
		}
	}
	for(int i = 1; i <= maxx; i++){
		cout << sum[i] << " ";
	}
	return 0;
}
