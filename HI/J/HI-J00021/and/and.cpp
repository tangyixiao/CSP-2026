#include<bits/stdc++.h>
using namespace std;
int arr[200005];

int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=a;i++){
		cin>>arr[i]; 
	}
	
	int maxn=0;
	for(int i=1;i<=a;i++){
		maxn=max(arr[i],maxn);
	}
	cout<<maxn;
	

	
	return 0;	
}
