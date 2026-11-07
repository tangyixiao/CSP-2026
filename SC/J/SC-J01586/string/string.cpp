#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
int t[200005];
ull sum[200005];
char ch[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	string str;
	for(int i=0;i<n;i++){
		cin>>t[i];
		if(i==0){
			sum[i]=t[i];
		}
		else{
			sum[i]=sum[i-1]+t[i];
		}
		cin>>ch[i];
	}
	cout<<str;
	ull long long len=0,mid=0;
	len=sum[n-1];
//	cout<<len;
	mid=floor(len/2);
	
	cout<<mid;
	return 0;
}


