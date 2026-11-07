#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    string  s,s1,s2;
    int n,a[200001],b,tmp;
	char c[200001];
	tmp=0;
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i]>>c[i];
	}
	for(int i=1;i<=n;i++){
		b+=a[i];
	}
	for(int i=n;i>1;i--){
		for(int j=i-1;j>=1;j--){
			if(c[i]!=c[j]){
				tmp+=1;
			}
		}
	}
	if(tmp==0){
		cout<<"0";
	}
	else{
		if(b%2==1){
			cout<<(b-1)/2;
		}
		else{
			cout<<b/2;
		}
	}
	fclose(stdin);
	fclose(stdin);
	return 0;
}
