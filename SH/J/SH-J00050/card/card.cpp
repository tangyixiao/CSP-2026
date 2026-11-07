#include<bits/stdc++.h>
using namespace std;
const int N=500005;
int a[N],n,m;
stack<int> sta;

int main(){
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1; i<=n; ++i)
		cin>>a[i];
	for(int i=1; i<=n; ++i){
		for(int j=i; j<=n; ++j){
			sta.push(a[j]);
		}
	}
}
