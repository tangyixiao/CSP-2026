#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
freopen("migrate.in", "r", stdin);
freopen("migrate.out", "w", stdout);
	int c,t,n,d;
	cin>>c>>t;
	vector<int>a(100)
	for(int i=0;i<t;i++){
		cin>>n>>d;
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
	}
return 0;
}
