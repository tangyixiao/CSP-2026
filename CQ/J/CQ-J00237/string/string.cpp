#include <bits/stdc++.h>
using namespace std;
int a[200005];
int zh(int x){
	int j=1;
	while(x-a[j]>0){
		x-=a[j];
		j++;
	}
	return j;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,cnt=0,cnt1=0;
	char c[200005];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		cnt+=a[i];
	}
	int x=cnt/2+1;
	for(int i=x;i<=cnt;i++){
		int x1=cnt+1-i;
		if(zh(x)!=zh(x1)){
			cnt1++; 
		}
	}
	cout<<cnt1;
	return 0;
}
