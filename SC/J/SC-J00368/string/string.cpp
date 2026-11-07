#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N];
long long s;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1,j=n;i<j;){
		if(c[i]!=c[j]){
			s+=min(a[i],a[j]);
		}
		if(a[i]>a[j]){
			a[i]-=a[j];
			j--;
		}
		else{
			a[j]-=a[i];
			i++;
		}
	}
	cout<<s;
	return 0;
}