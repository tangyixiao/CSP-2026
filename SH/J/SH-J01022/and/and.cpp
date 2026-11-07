#include <bits/stdc++.h>

using namespace std;

int m,n;
long long num1[100005]={},num2[100005]={};
int ans=0;

bool cmp(int a,int b){
	return a>b;
}


int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>num1[i];
	}
	
	
	sort(num1+1,num1+1+n,cmp);
	
	cout<<num1[1];
	return 0;
}
