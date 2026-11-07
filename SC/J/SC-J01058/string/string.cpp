#include<bits/stdc++.h>
using namespace std;
long long a[2000001],b[27],sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,x,y=0;
	char c;
	string s;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		cin>>c;
		for(int j=1;j<=x;j++){
			s+=c;
		}
		y+=x;
	}
	for(int i=0;i<y/2;i++){
		if(s[i]!=s[y-i-1])sum++;
	}cout<<sum;
	return 0;
	fclose(stdin);
	fclose(stdout);
} 