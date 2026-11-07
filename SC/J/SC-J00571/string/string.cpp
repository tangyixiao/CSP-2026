#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("string6.in","r",stdin);
	freopen("string.out","w",stdout);
	string s;
	int n;
	cin >>n;
	int cnt=0;
	int num=0;
	for (int i=0;i<n;i++){
		int a;
		cin >>a;
		num+=a;
		char c;
		cin >>c;
		int l=s.length();
		for (int j=l;j<l+a;j++){
			s[j]=c;
		}
	}
	int l2=s.length();
	if (num%2==1){
		int sum=2;
		for (int i=n/2+2;i<=l2;i++){
			char c1=s[i-1];
			char c2=s[i-sum-1];
			int a1=c1-'a';
			int a2=c2-'a';
			sum+=2;
			if (a1!=a2){
				cnt++;
			}
		}
	}
	else{
		int sum=1;
		for (int i=n/2+1;i<=l2;i++){
			char c1=s[i];
			char c2=s[i-sum];
			int a1=c1-'a';
			int a2=c2-'a';
			sum+=2;
			if (a1!=a2){
				cnt++;
			}
		}
	}
	cout <<cnt;
	return 0;
}