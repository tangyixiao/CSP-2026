#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],m=1,b,ans;
char c[200005];
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		for(int j=1;j<=a[i];j++){
			s[m]=c[i];
			m++;
		}
	}
	m=m-1; 
	if(m%2==0){
		b=m/2;
	}
	else{
		b=m/2+1;
	}
	for(int i=1,j=m;i<b,j>b;i++,j--){
		if(s[i]!=s[j]){
			ans++;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
