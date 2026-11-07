#include<bits/stdc++.h>
using namespace std;
string s;
struct stu{
	int a;
	char c;
}a[2000001];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,l=0,ans=0;
	char x,y;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a[i].a>>a[i].c;
		if(i==0)x=a[i].c;
		if(i==n-1)y=a[i].c;
		for(long long j=i;j<=i+a[i].a-1;j++){
			s[j]=a[i].c;
		}l+=a[i].a;
	}l--;
	if(x!=y)ans++;
	for(long long i=1;i<l;i++){
		if(s[i]!=s[l-i]){
			s[i]=s[l-i];
		    ans++;
    	}
    }cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
