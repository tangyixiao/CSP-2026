#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,c;
	cin>>n>>c;
	long long a[n];
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a+0,a+n,cmp);
	cout<<a[c-1];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
