#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m;
int a[N];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int s=0;
	long long s1;
	sort(a+1,a+1+n,cmp);
	for(int i=1;i<=n;i++){
		if(i==1){
			s1=a[i];
		}
		else{
			s1&=a[i];
		}
		s++;
		if(s==m){
			cout<<s1;
			return 0;
		}
	}
	return 0;
}
