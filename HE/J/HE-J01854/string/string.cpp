#include<bits/stdc++.h>
using namespace std;
char c[100010];
int a[100010];
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n; 
	for(int i=1;i<=n;i++){
		scanf("%d%s",&a[i],&c[i]);
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	long long l=s.size(),ans=0;
	if(l%2==1){
		for(int i=0,j=l-1;i<l/2,j>n/2;i++,j--){
			if(s[i]!=s[j]){
				ans++;
			}
		}
	}else{
		for(int i=0,j=l-1;i<l/2,j>=l/2;i++,j--){
			if(s[i]!=s[j]){
				ans++;
			}
		}
	}
	cout<<ans;
}
