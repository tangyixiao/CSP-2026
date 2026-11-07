#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,arr[5000000],ad=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<m;i++) ad=ad&arr[n-1];

	cout<<ad;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
