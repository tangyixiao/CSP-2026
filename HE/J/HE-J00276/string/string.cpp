#include<bits/stdc++.h>
using namespace std;
long long a[100000000];
string s;	char c[100000000];
long long sum=0;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		sum+=a[i]; 
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<a[i];j++){
			s=s+c[i];
		}
	}
	if(sum==1){
		cout<<0;
		return 0;
	}
	long long ans=0;
	if(sum%2==0){//ou shu
	long long cha=sum-1,zho=cha/2;
		long long l1=0,r1=sum/2-1,l2=sum/2,r2=sum-1;//xia biao
		for(int i=0;i<=zho;i++){
			if(s[i]!=s[cha-i]) {
				ans++;
			}
		}
		cout<<ans;
		return 0;
	}else {// dan shu
		long long zhon=sum/2,chan=sum-1;
		for(int i=0;i<zhon;i++){
			if(s[i]!=s[chan-i]){
				ans++;
			} 
		}
		cout<<ans;
		return 0;
	}
return 0;
}
//Trick||Treat!
/* 3
2 a
2 b
1 c
*/

