#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,a[200005];
	cin>>n;
	int MAX = 0;
	for(int i = 1;i <= n;i++){
	    cin>>a[i];
		MAX = max(MAX,a[i]);	
	}
	cout<<MAX;
	return 0;
}
