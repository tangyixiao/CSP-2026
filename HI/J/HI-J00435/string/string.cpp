#include<bits/stdc++.h>
using namespace std;
const int A=2e8+10;
int n,a,x=1;
char b,s[A];
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		for(int j=x;j<=x+a-1;j++){
			s[j]=b;
		}
		x+=a;
	}
	if(x%2!=0){
		for(int i=1;i<=x/2;i++){
			if(s[i]!=s[x-i]){
				ans++;
			}
		}
    }else{
    	for(int i=1;i<=x/2-1;i++){
			if(s[i]!=s[x-i]){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
} 
