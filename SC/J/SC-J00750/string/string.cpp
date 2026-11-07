#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];
char c[200005];
char s[200005];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int x=0;
	int num=0;
	int ans=0;
	int z=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		num+=a[i];
		for(int j=1;j<=a[i];j++){
		    x++;
			s[x]=c[i];
		}
	}
	if(num%2==0){
		z=num/2;
	}else{
		z=num/2+1;
	}
	for(int i=1;i<=z;i++){
		if(s[i]==s[num-i+1]){
			ans+=0;
		}else{
			ans++;
		}
	}
	cout<<ans;
}
