#include<bits/stdc++.h>
using namespace std;
char a[200000005];
int main(){
    
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long p,cnt=0;
	cin>>n;
	char c;
	for(int i=1;i<=n;i++){
		cin>>p>>c;
		cnt=cnt+p;
		for(int j=1;j<=p;j++){
			a[(i-1)*p+j]=c;
		}
	}
	long long l=1,r=cnt;
	long long su=0;
	while(l<r){
		if(a[l]!=a[r]){
			su++;
		}
		l++;
		r--;
	}
	cout<<su;
	return 0;
}
