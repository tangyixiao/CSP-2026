#include<bits/stdc++.h>
using namespace std;

int a[500000];
bool cmp(int a,int b){
	return a>b;
}

int main(){
	freopen("and.in","r",cin);
	freopen("and.out","l",cout);
	int n,m,ans;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	ans=a[0];
	for(int i=1;i<m;i++){
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
} 