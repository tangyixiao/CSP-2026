#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,ans1=0,ans2=0;
	string s,s1,test1,test2;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i]>>s[i];
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=a[i];j++){
			s1+=s[i];
		}
	}
	long long len=s1.size();
	if (len%2==0){
		for (int i=0;i<len/2;i++){
			test1[i]+=s1[i];
			test1[len-i-1]+=s1[i];
		}
		for (int i=len/2;i<len;i++){
			test2[i]+=s1[i];
		}
		for (int i=len-1;i>=len/2;i--){
			if (test1[i]!=test2[i]){
				ans1++;
			}
		}
		cout<<ans1;
	}
	if (len%2!=0){
		for (int i=0;i<len/2;i++){
			test1[i]+=s1[i];
			test1[len-i-1]+=s1[i];
		}
		for (int i=len/2+1;i<=len;i++){
			test2[i]+=s1[i];
		}
		for (int i=len-1;i>len/2;i--){
			if (test1[i]!=test2[i]){
				ans2++;
			}
		}
		cout<<ans2;
	}
	return 0;
}