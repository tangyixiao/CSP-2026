#include<bits\stdc++.h>
using namespace std;
char s[10005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int sam=0;
	int sus=0;
	int sus2=0;
	for(int i=1;i<=n;i++){
		int b;
		cin>>b;
		sam+=b;
		char c;
		cin>>c;
		for(int i=sus;i<b+sus;i++){
			s[i]=c;
		}
		sus+=b;
		
	}
	int sum=0;
	for(int i=0;i<sam/2;i++){
		if(s[sam-1-i]!=s[i]){
			sum++;
		}
	}
	cout<<sum;
}
