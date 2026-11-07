#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
ll n,a[N],ans;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> a[i] >> c[i];
	}
	int i=1,j=n;
	while(i<j){
		if(a[i]==a[j]){
			if(c[i]!=c[j]) ans+=a[i];
			i++,j--;
		} else if(a[i]>a[j]){
			if(c[i]!=c[j]) ans+=a[j];
			a[i]-=a[j];
			j--;
		} else if(a[i]<a[j]){
			if(c[i]!=c[j]) ans+=a[i];
			a[j]-=a[i];
			i++;
		}
		//for(int k=1;k<=n;k++) cout << a[k] <<" ";
		//cout <<'\n'<< i <<" "<< j <<'\n';
	}
	cout << ans;
	return 0;
}
