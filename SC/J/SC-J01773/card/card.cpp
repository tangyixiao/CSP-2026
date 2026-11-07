#include <bits/stdc++.h>
#include <vector>
using namespace std;
int n,m;
vector<int>a(n);
vector<int>s(n);
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int ai;
		cin>>ai;
		a.push_back(ai);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				a.pop_back();
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i]==m){
				s[m]++;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout <<s[i];
	}
	return 0;
}