#include <iostream>
using namespace std;
int main(){
	//freopen("string.in","r",stdin);
	//freopen("string.out","w",stdout);
	int n;
	cin >>n;
	int a[1000000];
	char c[1000000];
	for(int i = 1;i <= n;i++){
		cin>>a[i];
		cin >> c[i];
	}
	long long ans = 0;
	for(int i = n,j=1;i >n/2;){
		if(a[i]>a[i]){
			if(c[i]!=c[j]){
				ans++;
			}
			a[i]-=a[j];
			j++;
		}
		else{
			i++;
		}
	}
	cout <<ans;
} 
