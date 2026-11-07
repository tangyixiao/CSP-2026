#include<bits/stdc++.h>
using namespace std;
long long a[1000005];
char c[1000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int sum=0;
	int num=0;
	int k=0;
	int b,h;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];	
	}
	for(int i=1;i<=n;i++){
		k+=a[i];
	}
	
	b=k;
	for(int i=1;i<n;i++){
		for(int j=a[i];j>0;j--){
			s[i]=c[i];
		}
	}
	h=k/2;
	for(int i=1;i<=h;i++){
		if(s[i]==s[b]){
			b--;
		}else{
			num++;
		}
	}
	cout<<num;
	return 0;
}
