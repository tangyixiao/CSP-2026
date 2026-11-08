#include<iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
freopen("subway.in", "r", stdin);
freopen("subway.out", "w", stdout);
	int c,n,m,d,p,k;
	cin>>c>>n>>m>>d>>p;
	vector<int>w(m);
	for(int i=0;i<m;i++){
		cin>>w[i];
	}
	for(int i=0;i<n;i++){
		cin>>k;
		for(int j=0;j<2k;j++){
			cin>>w[i][j];
		}
	}
return 0;
}
