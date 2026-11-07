#include<bits/stdc++.h>
using namespace std;
int n;
long long cnt;
string s;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	vector<pair<int,char>> s(n + 1);
	for(int i = 1;i <= n;i++){
		int a;
		cin >> a;
		char c;
		cin >> c;
		s[i] = {a,c};
	}
	for(int i = 1,j = n;i < j;){
		if(s[i].second != s[j].second){
			int mn = min(s[i].first,s[j].first);
			if(mn == s[i].first){
				i++;
				s[j].first -= mn;
			}
			else{
				j--;
				s[i].first -= mn;
			}
			cnt += mn;
		}
		else{
			int mn = min(s[i].first,s[j].first);
			if(mn == s[i].first){
				i++;
				s[j].first -= mn;
			}
			else{
				j--;
				s[i].first -= mn;
			}
		}
		if(!s[i].first){
			i++;
		}
		if(!s[j].first){
			j--;
		}
	}
	cout << cnt;
	return 0;
}