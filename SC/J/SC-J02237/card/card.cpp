#include<bits/stdc++.h>
const int N=5e5+1;
using namespace std;
#define ll long long
int a[N]={};
int main(){
	freopen("card","r",stdin);
	freopen("card","w",stdout);
	int n,m;
	cin >> n >> m;
	int cnt=0;

    bool yi(int a[N]){
    	for (int i = 1;i <= N;i++){
    		if(i==a[i]){
    			return 1;
			}
		}
		return 0;
	}
	for(int i = 1;i <= n;i++){
		cin >> a[i];
		if(yi(a)) cnt++;
	}
	
	for(int i = 1;i <= m;i++){
		cout << cnt;
	}
	return 0;
} 