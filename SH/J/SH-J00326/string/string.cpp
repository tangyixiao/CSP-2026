#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node{
	int a;
	char c;
}t[200005];
string sum;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,len=0,cnt=0;
	cin>>n;
	int s=0;
	for(int i=0;i<n;i++){
		cin>>t[i].a;
		cin>>t[i].c;
		for(int j=len;j<len+t[i].a;j++){
			sum[j]=t[i].c;
			s++;
		}
		len+=t[i].a;
	}
	for(int i=0,j=len-1;i<j;i++,j--){
		if(sum[i]!=sum[j]){
			cnt++;
		}
	}
	cout<<cnt;
}
