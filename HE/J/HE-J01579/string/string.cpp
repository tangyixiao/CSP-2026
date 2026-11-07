#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);	
	int n,a[100000],cnt=0,sum=0;
	string s,s1;
	char c[100000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<a[i];j++) {
			s+=c[i];
		}
	}
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<a[i];j++) {
			s1+=c[i];
		}
	}
	if(sum%2){
		sum=ceil(sum/2)+1;
	}else{
		sum/=2;
	}
	for(int i=0;i<sum;i++){
		//cout<<s[i]<<" "<<s1[i]<<endl;
		if(s[i]!=s1[i]) cnt++;
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
