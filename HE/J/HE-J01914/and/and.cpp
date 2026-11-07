#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200010];
char b[100]; 
int cmp(long long x,long long y){
	return x>y;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","r",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=m;i++){
		string s;
		while(a[i]!=0){
			s+=a[i]%2;
		}
	}
	return 0;
} 
