#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n];
	char ch[n];
	for(int i = 0;i < n;i++){
		cin>>a[i]>>ch[i];
	}
	unsigned long long ans = 0;
	for(int i = 0,j = n - 1;i < j;){
		if(ch[i] != ch[j]){
			ans += min(a[i],a[j]);
		}
		if(a[i] > a[j]){
			a[i] -= a[j];
			j--;
		}else if(a[i] < a[j]){
			a[j] -= a[i];
			i++;
		}else{
			i++;j--;
		}
	}
	cout<<ans;
	return 0;
}

