#include<bits/stdc++.h>
using namespace std;
int n,m,x,b[300010];
vector<int>a;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>x;
		b[x]++;
		a.push_back(x);
	}for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
} 
