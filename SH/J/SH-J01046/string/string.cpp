#include<bits/stdc++.h>
using namespace std;
int n,a[100009];
char c[100009];
string hw="";
void s1(){
	cout<<0;
}
void s2(){
	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++)hw+=c[i];
	}
	if(hw.size()%2==0){
		for(int i=0;i<hw.size()/2;i++){
			if(hw[i]!=hw[hw.size()-i])cnt++;
		}
	}
	else{
		for(int i=0;i<hw.size()/2;i++){
			if(hw[i]!=hw[hw.size()-i])cnt++;
		}
	}
	cout<<hw;
	cout<<cnt;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	if(n==1)s1();
	else{
		s2();
	}
	return 0;
} 
