#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int n;
int a;
char c;
int sum=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		while(a--){
			s1+=c;
		}
	}
	for(int i=n;i>=1;i--){
		s2=s1[i];
	}
	for(int i=1;i<=n;i++){
		if(s1[i]!=s2[i]){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}