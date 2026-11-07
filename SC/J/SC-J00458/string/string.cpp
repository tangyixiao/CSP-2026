#include<bits/stdc++.h>
using namespace std;
string a;
long n,s;
char t;
int ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int num=0;
	for(int i=1;i<=n;i++){
		cin>>s>>t;
		for(int j=1;j<=s;j++){
			a[num]=t;
			num++;
		} 
	}cout<<a;
	for(int i=0,j=num;i<(num+1)/2;i++,j--){
		if(a[i]!=a[j]){
			ans++;
		}
	}cout<<ans;
	return 0;
}