#include<bits/stdc++.h>
using namespace std;
int n;
long long cnt;
string s;
long long l;
long long a[200005];
char ch[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>ch[i];
	}
	int l=1,r=n;
	while(r>l){
		if(ch[l]!=ch[r]){
			cnt+=min(a[r],a[l]);
		}
		if(a[l]==a[r]){
			l++;
			r--; 
		}else if(a[l]<a[r]){
			a[r]-=a[l];
			l++;
		}else if(a[l]>a[r]){
			a[l]-=a[r];
			r--;
		} 
	}
	cout<<cnt;
	return 0;
} 