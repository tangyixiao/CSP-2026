#include<bits/stdc++.h>
using namespace std;
long long cnt=0,num=0;
string str;
int n,a;
char b;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		num+=a;
		for(int j=0;j<a;j++){
			str=str+b;
		}
	}
	for(int i=1;i*2<=num;i++){
		if(str[i-1]!=str[num+1-i-1]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
