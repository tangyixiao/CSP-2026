#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
	freopen("and.in","r",stdin);
 	freopen("and.out","w",stdout);
 	cin >> n >>m;
 	int a[n+5],b[n+5]={0};
 	for(int i=1;i<=n;i++){
 		cin >> a[i];
	}
	for(int i=1;i<=n;i++){
		int cnt=1,num=a[i];
 		while(num){
 			b[i]+=cnt*(num%2);
 			num/=2;
 			cnt++;
		}
	}
	if(n<=2000&&m=1){
		sort(a[1],a[n+1],1);
		cout << a;
	}
	return 0;
}