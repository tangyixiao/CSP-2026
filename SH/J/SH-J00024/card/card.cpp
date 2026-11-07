#include<bits/stdc++.h>
using namespace std;
int n , m;
int a[1000000] , cnt[1000000];
stack<int>s , k;
int main(){
	freopen("card.in" , "r" , stdin);
	freopen("card.out" , "w" , stdout);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++){
		cin >> a[i];
	}
	for(int i = 1 ; i <= n ; i++){
		for(int j = i ; j <= n ; j++){
			while(!s.empty()){
				k.push(s.top());
				s.pop();
				if(k.top() == a[j]){
					while(!k.empty()){
						k.pop();
					}
					continue;
				}
			}
			while(!k.empty()){
				s.push(k.top());
				k.pop();
			}
			s.push(a[j]);
		}
		while(!s.empty()){
			cnt[s.top()]++;
			s.pop();
		}
	}
	for(int i = 1 ; i <= m ; i++){
		cout << cnt[i] << " ";
	}
	cout << endl;
	return 0;
} 
