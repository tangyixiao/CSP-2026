#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	freopen("card","r",stdin);
	freopen("card","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	srand(time(0));
	int n,m;
	cin>>n>>m;
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		int p=rand()%10;
		cout<<p<<' ';
	}
	return 0;
} 
