#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;

int a[N] , b[N];

int main(){
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	stack<int> st;
	map<int , int> mp , mpp;
	set<int> se;
	int n , m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b + 1 , b + 1 + n);
	for(int i = 1;i <= n;i++){
		se.insert(b[i]);
	}
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= n;j++){
			mp[a[j]]++;
			if(mp[a[j]] > 1){
				while(!st.empty()){
					if(st.top() == a[j]){
						mp[st.top()]--;
						st.pop();
						break;
					}
					else{
						mp[st.top()]--;
						st.pop();
					}
				}
			}
			st.push(a[j]);
		}
		for(auto i : se){
			mpp[i] += mp[i];
			mp[i] = 0;
		}
		while(!st.empty()){
			st.pop();
		}
	}
	
	for(auto i : se){
		cout << mpp[i] << ' ';
	}
	return 0;
}