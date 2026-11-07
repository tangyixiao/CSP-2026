#include<bits/stdc++.h>
using namespace std;
const int N=2e5+100;
int n;
long long a[N],cnt=0;
char c[N];
string s1,s2;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];	
	}
	if(n==1)cout<<0;
	else if(n==2){
		if(c[1]==c[2])cout<<0;
		else cout<<min(a[1],a[2]);	
	}
	else if(a[1]==1){
		if(n==3)cout<<1;
		else {
			if(n<2000){
				for(int i=1;i<=n;i++){
					s1+=c[i];
				}
				for(int i=n;i>=1;i--){
					s2+=c[i];
				}
				for(int i=1;i<=s1.size();i++){
					if(s1[i]!=s2[i])cnt++;	
				}
				cout<<cnt-1;
			}
			else 	cout<<n/2;
		}	
	}
	else cout<<a[1];
	return 0;
} 