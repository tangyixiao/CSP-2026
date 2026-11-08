#include <bits/stdc++.h>
using namespace std;
long long n,sum=0,cnt=0;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		long long a;
		string q;
		cin>>a;
		cin>>q;
		for(int i=1;i<=a;i++){
			s+=q;
		}
		sum+=a;
	}
	if(sum%2==0){
		long long z=sum/2,c=1;
		for(int i=z;i<=sum-2;i++){
			if(s[i]==s[i-c]){
				cnt+=0;
				c+=2;
			}
			else{
				cnt+=1;
				c+=2;
			}
		}
	}
	else{
		long long z=sum/2+1,c=2;
		for(int i=z;i<=sum-1;i++){
			if(s[i]==s[i-c]){
				cnt+=0;
				c+=2;
			}
			else{
				cnt+=1;
				c+=2;
			}
		}
	}
	cout<<cnt;
	return 0;
}
