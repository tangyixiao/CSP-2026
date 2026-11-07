#include<bits/stdc++.h>;
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n,m,a[500001];
	cin>>n>>m;
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	for(long long j=0;j<n;j++){
		if(a[j]==a[j+1]){
			break;	
		}
	}
	return 0;
}
