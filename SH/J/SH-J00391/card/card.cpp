#include<bits/stdc++.h> 
using namespace std;
const int max_n=1e5+10; 
int n,m,a[max_n];
int num[max_n];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		num[a[i]]++;
	}
	//sort(num,num+n);
	for(int i=1;i<=m;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}
