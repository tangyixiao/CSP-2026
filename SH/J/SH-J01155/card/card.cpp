#include<bits/stdc++.h>
using namespace std;
const int N=10009;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,s;
	int m[N];
	cin>>n>>s;
	for(int i=0;i<n;i++){
		cin>>m[i];
	}
	for(int j=s;j>0;j--){
		cout<<m[j];
	}
	return 0;
	
}
