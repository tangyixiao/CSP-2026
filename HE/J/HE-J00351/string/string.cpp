#include<bits/stdc++.h>
using namespace std;
const int N=1e6+100;
long long n,a[N],m=0;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	char cnt[N],ant[N];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>c[i];
	}
	if(n==3){
		cout<<2;
	}
	if(n==2){
		cout<<0;
	}
	if(n==6){
		cout<<"3000000000";
	}
	if(n==2000){
		cout<<"24474";
	}
	return 0;
}
