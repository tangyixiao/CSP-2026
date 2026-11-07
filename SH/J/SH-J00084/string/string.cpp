#include<bits/stdc++.h>
using namespace std;
struct z{
	int size;
	char ch;
};
z a[200005];
int n,cnt=0,ans=0,f[200005],ru[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].size>>a[i].ch;
		cnt+=a[i].size;
	}
	int fffff=0;
	for(int i=0;i<cnt;i++){
		if(ru[fffff]==a[fffff].size){
			fffff++;
		}
		f[i]=a[fffff].ch;
		ru[fffff]++;
	}
	for(int i=0;i<cnt/2;i++){
		if(f[i]!=f[cnt-i-1]) ans++;
	}
	cout<<ans;
} 
