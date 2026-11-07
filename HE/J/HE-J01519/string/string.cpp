#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ci,ans1=0,ans2=0;
	char a;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ci>>a;
		for(int j=1;j<=ci;j++){
			s+=a;
		}
	}
	int l=s.size();
	int zx;
	if(l%2==0)zx=l/2-1;
	else zx=l/2;
	for(int i=0;i<=zx;i++){
		if(s[i]!=s[l-i-1]){
			ans1++;
		}
	}
	if(l%2==0)zx=l/2;
	else zx=l/2;
	for(int i=zx;i<l;i++){
		if(s[i]!=s[l-i-1]){
			ans2++;
		}
	}
	cout<<min(ans1,ans2);
	return 0;
}
