#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2*1e5+5;
int n;
int a[N];
char c[N];
int cnt;
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
    cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	for(int i=1,j=n;i<j;){
		if(c[i]!=c[j]){
			if(a[i]>a[j])
				cnt+=a[j],a[i]-=a[j],j--;
			else
				cnt+=a[i],a[j]-=a[i],i++;
		}else{
			if(a[i]>a[j])
				j--;
			else
				i++;
		} 
	}	
	cout<<cnt;
	return 0;
} 
