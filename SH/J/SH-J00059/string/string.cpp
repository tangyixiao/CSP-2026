#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	freopen("string4.in","r",stdin);
	//freopen("string.out","w",stdout);
	long long n,len1=0;
	cin>>n;
	//char c[200005];
	for(int i=0;i<n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(int j=0;j<a;j++){
			s[len1]=c;
			len1++;
		}
	}
	int mid=len1/2;
	if(len1%2==1){
		mid++;
	}
	long long cnt=0;
	for(int i=0;i<mid;i++){
		if(s[i]==s[len1-1-i]){
			continue;
		}else{
			cnt++;
		} 
	}
	cout<<cnt<<endl;
	return 0;
}
