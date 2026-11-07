#include<bits/stdc++.h>
using namespace std;
string s;
long long a[200005];
char c[200005];
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	if(n==1){
		cout<<"0";
		return 0;
	}else if(n==2){
		long long a1,b1;
		char c1,d1;
		cin>>a1>>c1>>b1>>d1;
		if(c1==d1){
			cout<<"0";
			return 0;
		}else{
			cout<<min(a1,b1);
			return 0;
		}
	}
	long long cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long k=a[1];
	bool k1=false;
	for(int i=2;i<=n;i++){
		if(a[i]!=k){
			k1=true;
		}
	}
	//map<char,long long> ma;
	if(k1==false){
//		long long ji=0;
//		for(int i=1;i<=n;i++){
//			ma[c[i]]+=a[i];
//			ji+=a[i];
//			//cout<<c[i]<<endl;
//		}
//		long long num=0;
//		for(int i=0;i<=127;i++){
//			num=max(num,ma[char(i)]);
//		}
//		cout<<ji-num;
//		return 0;
		if(n%2==0){
			long long f=0;
			for(int j=n/2+1;j<=n;j++){
				char db=c[n];
				for(int i=1;i<=n;i++){
					if(db==c[i]){
						f+=a[i];
					}
				}
			}
			cout<<f;
			return 0;
		}else{
			long long f=0;
			for(int j=n/2+2;j<=n;j++){
				char db=c[n];
				for(int i=1;i<=n;i++){
					if(db==c[i]){
						f+=a[i];
					}
				}
			}
			cout<<f;
			return 0;
		}
	}
	for(int i=1;i<=n;i++){
		for(long long j=1;j<=a[i];j++){
			s[cnt]=c[i];
			cnt++;
		}
	}
	if(cnt%2==0){
		if(s[cnt/2-1]!=s[cnt/2]){
			ans++;
			s[cnt/2-1]=s[cnt/2];
		}
	}
	for(long long i=0;i<cnt/2;i++){
		if(s[cnt-i-1]!=s[i]){
			ans++;
			s[cnt-i-1]=s[i];
		}
	}
	cout<<ans;
	return 0;
}