#include <iostream>
#include <stdio.h>
using namespace std;


int a[200005];
char c[200005];


int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	
	int n;
	cin >> n;
	int l=0;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		l+=a[i];
	}
	int sum=0,p=0,s[2]={};
	for(int i=1;s[0]+s[1]<l;i++){
		if(c[i]==c[n-i-p+1]){
			if(a[i]==a[n-i-p+1]){
				s[0]+=a[i];
				s[1]+=a[i];
				continue;
			}else if(a[i]>a[n-i-p+1]){
				s[1]+=a[n-i-p+1];
				p++;
				i--;
			}else{
				s[0]+=a[i];
				p--;
			}
		}else{
			if(a[i]==a[n-i-p+1]){
				s[0]+=a[i];
				s[1]+=a[i];
				sum+=a[i];
				continue;
			}else if(a[i]>a[n-i-p+1]){
				sum+=a[n-i-p+1];
				s[1]+=a[n-i-p+1];
				p++;
				i--;
			}else{
				sum +=a[i];
				s[0]+=a[i];
				p--;
			}
		}
	}
	
	cout << sum;
	
	return 0;
}