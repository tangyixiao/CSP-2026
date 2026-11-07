#include<bits/stdc++.h>
using namespace std;
string a;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	int t;
	cin>>t;
	while(t--){
		long long n;
		string m;
		cin>>n;
		cin>>m;
		while(n--){
			a=a+m;
		}
	}
	int ans=0;
	int len1=a.size(),len;
	if(len1%2==1){
		len=len1/2+1;
	}else{
		len=len1/2;
	}
	for(int i=0;i<len;i++){
		if(a[i]!=a[len1-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
