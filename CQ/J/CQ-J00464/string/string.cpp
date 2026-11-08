#include <bits/stdc++.h>
using namespace std;
int a[10010];
char z[10010];
string s="a";
int main(){
    freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>z[i];
		for(int j=1;j<=a[i];j++){
			s+=z[i];
		}
		sum+=a[i];
    }
	int cnt=0;
	int j=sum;
	for(int i=1;i<=sum/2;i++){
		if(s[i]!=s[j]){
			cnt++;
	    }
		j--;
	}
	cout<<cnt;
	return 0;
}
