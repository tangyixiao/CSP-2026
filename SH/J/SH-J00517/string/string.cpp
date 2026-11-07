#include<iostream>
using namespace std;
char s[20000000000010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,l=0,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		char c;
		cin>>a>>c;
		for(int i=0;i<a;i++){
			l++;
			s[l]=c;
		}
	}
	for(int i=1;i<=l/2;i++){
		if(s[i]!=s[l+1-i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
