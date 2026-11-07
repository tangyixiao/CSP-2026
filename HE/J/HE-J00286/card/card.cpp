#include<bits/stdc++.h>
using namespace std;
int n,a[200005],m;
bool cmp(int t1,int t2){
	return t1>t2;
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;for(int i=0;i<n;i++){cin>>a[i];}sort(a,a+n,cmp);
	cout<<a[m-1];
	fclose(stdin);
	fclose(stdout);
	return 0;
}






