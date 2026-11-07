#include<bits/stdc++.h>
using namespace std;
struct stu{
	int s;
	char z;
}a[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0,sum1=0;
	string s,s1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].s>>a[i].z;
		sum+=a[i].s;
		if(a[i].s%2==1)sum1++;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i].s;j++){
			s[j]=a[i].z;
		}
	}
	for(int i=0;i<s.size();i++){
		s1[i]=s[i];
	}
	if(s1==s){
		cout<<0;
		return 0;
	}
	else cout<<sum1+(sum-1)/2;
	return 0;
}
