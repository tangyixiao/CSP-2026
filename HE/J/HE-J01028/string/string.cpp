#include<bits/stdc++.h>
using namespace std;
int l,a,r,sum=0;
char c,n;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n-'0';i++){
		scanf("%d %c",&a,&c);
		for(int j=0;j<a;j++)s+=c;
	}
	l=0;
	r=s.length()-1;
	while(l<=r){
		if(s[l]!=s[r])sum++;
		l++;
		r--;
	}
	cout<<sum;
	return 0;
}
