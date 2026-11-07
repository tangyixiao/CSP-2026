#include<bits/stdc++.h>
using namespace std;
long long a[200020] = {}, ans = 0, sum = 0;
char c[200020];	
int n;
//void change(int x,int i){
//	while(x != 0){
//		if(a[i] > x){
//			
/////		}
////	}
////	return;
////}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	c[0] = ' ';
	for(int i = 1;i <= n;i++){
		int b;char ch;
		cin>>b>>ch;
		if(ch == c[i - 1 - sum]){
			sum++;
		}
		c[i - sum] = ch;
		a[i - sum] += b;
	}
	n -= sum;int i = 1;
	while(i <= n){
		//cout<<a[i]<<' '<<c[i]<<'\n';
		if(a[i] != a[n - i + 1] && c[i] != c[n - i + 1]){
			if(a[i] > a[n - i + 1]){
				//a[n - i + 1] -= a[i];
				//a[n - i + 2] = a[i];
				//c[n - i + 2] = c[i];
				ans += a[i];
				i += a[i];
			}else{
				//a[i] -= a[n - i + 1];
				//a[i] = a[n - i + 2];
				//c[i] = c[n - i + 2];
				ans += a[n - i + 1]; 
				i += a[n - i + 1];
			}
		}else{
			ans += a[n - i + 1]; 
			i += a[n - i + 1];
		}
	}
	cout<<ans;
	return 0;
}