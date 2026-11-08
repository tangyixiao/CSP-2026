#include <bits/stdc++.h>
using namespace std;
//#define int long long
const int N=200005;
long long n,a[N];
long long cnt=0;
char c[N];
string s;
int main(){
	freopen("string6.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	bool ok=true;
	s+=' ';
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
//		maxx=max(maxx,a[i]);
		if(c[i]!=c[i-1]&&i!=1)
			ok=false;
	}
	if(ok){
		cout<<0;
		return 0;
	}
	int j=n,i=1;
		while(j!=i){
			if(a[j]<=a[i]){
				if(c[i]==c[j]){
					a[i]-=a[j];
					a[j]=0;
					j--;
				}
				else{
					cnt+=a[j];
					a[i]-=a[j];
					a[j]=0;
					j--;
				}
			}
			else{
				if(c[i]==c[j]){
					a[j]-=a[i];
					a[i]=0;
					i++;
				}
				else{
					a[j]-=a[i];
					cnt+=a[i];
					a[i]=0;
					i++;
				}
			}
			if(a[i]==0)
				i++;
			if(a[j]==0)
				j--;
		}
	cout<<cnt;
	return 0;
}
