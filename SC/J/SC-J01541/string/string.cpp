#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e6+5;
int n;
struct node{
	int a;
	char s;
}a[N];
string k;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int sum=1;
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].s;
		for(int j=1;j<=a[i].a;j++){
			k[sum++]=a[i].s;
		}
	}

	int cnt=0;
	int i=1,j=sum-1;
	while(i<j){
		if(k[i]==k[j]) {
			i++;j--;
			continue;
		}
		i++;j--;
		cnt++;
	}
	cout<<cnt;
	
	return 0;
}

