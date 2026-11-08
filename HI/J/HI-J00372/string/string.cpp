#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >>n;
	char s[200010];
	int a;
	char b;
	int las=1;
	for (int i=1;i<=n;i++){
		cin >>a>>b;
		for (int i=las;i<=a+las;i++){
			s[i]=b;
		}
		las+=a;
}
	int l=1,r=las-1,ans=0;
	while(l<r){
		if(s[l]!=s[r]){
			s[r]=s[l];
			ans++;
		}
		l++;
		r--;
	}
    cout<<ans; 
	return 0;
}
