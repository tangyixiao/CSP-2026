#include<bits/stdc++.h>
using namespace std;
long long num[500010];
long long n,m;
string arr1;
string arr2[200010];
string arr3;
int main(){
	//freopen("and.in","r",stdin);
	//freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>num[i];
	}
	sort(num+1,num+n+1);
	cout<<num[n-m+1]; 
	return 0;
}