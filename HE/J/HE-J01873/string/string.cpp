#include<bits/stdc++.h>
using namespace std;
string str;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a;
	char c;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		for(int j=1;j<=a;j++){
			str+=c;
		}
	}
	long long l=str.size();
	long long x=0;
	if(l%2==0){
		long long s=l/2;
		for(int i=0;i<s;i++){
			if(str[i]!=str[i+s]){
				x++;
			}
		}
	}
	if(l%2!=0){
		long long s=(l-1)/2;
		for(int i=0;i<s;i++){
			if(str[i]!=str[i+1+s]){
				x++;
			}
		}
	}
	cout<<x;
	return 0;
}
