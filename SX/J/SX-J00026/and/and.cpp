#include <bits/stdc++.h>
using namespace std;
int change(int a){
	int a_[10000000]={0};
	int i=0;
	while(a){
		a_[i]=a%2;
		i++;

		a/=2;
	}
	int a2=0;
	for(int x=i-1;x>=0;x--){
	int temp=a_[x];
	a2+=temp*(int)pow(10,x);
	}
	return a2;
}
void fenli(int x){
	char x_[10000000];
	int i=0;
	while(x){
	x_[i]=x%10;
	x/=10;
	}

}

int main(){
freopen("and.in","r",stdin);
freopen("and.out","w",stdout);
int n,m;
cin>>n>>m;
int a[n+5];
for(int i=0;i<n;i++){
	cin>>a[i];
}
sort(a,a+n-1);
cout<<a[n-1];
	return 0;
}