#include<bits/stdc++.h>
#define int long long
using namespace std;
void io(){ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);}
void fp(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
}
const int N = 3e5 + 10;
int a[N],n;
int s[N];
char c[N];
int len;
main(){
	io();fp();
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
		len += a[i];s[i]=s[i-1]+a[i];
	}int li=0,lj=0;//目前指针i/j访问的第几个字符
	int ans = 0; 
	for(int i=1,j=n;i<j;i=i){
		if(c[i]==c[j]){
			if(a[i]==a[j]){
				i++;j--;
				li=a[i];lj=n-a[j]+1;
			}
			else if(a[i]>a[j]){
				a[i]-=a[j];
				j--;
			}
			else {
				a[j]-=a[i];
				i++;
			}
		}
		else {
			if(a[i]==a[j]){
				ans+=a[i];
				i++;j--;
			}
			else if(a[i]>a[j]){
				ans+=a[j];a[i]-=a[j];
				j--;
			}
			else {
				ans+=a[i];a[j]-=a[i];
				i++;
			}
		}
	}
	cout << ans <<"\n";
}
