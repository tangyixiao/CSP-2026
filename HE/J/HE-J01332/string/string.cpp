#include<bits/stdc++.h>
using namespace  std;
string c;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int h;
		cin>>h;
		char a;
		cin>>a;
		while(h--){
			sum++;
			c+=a;
		}
	}
	int i=0,j=sum-1;
	while(i<j){
		if(c[i]!=c[j]) ans++;
		i++;
		j--;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
