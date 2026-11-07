#include<bits/stdc++.h>
using namespace std;
string s;
char c[100005];
int a[100005];
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","W",stdout);
	ios::sync_with_stdio(false)+cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	int i=0,j=n;
	while(i<j){
		bool bol=a[i]>a[j];
		if(c[i]!=c[j]){
			if(bol){
			  	ans+=a[j];
			  	a[i]-=a[j];
			  	j--;
			}
			else{
				ans+=a[i];
				a[j]-=a[i];
				i++;
			}
		}
		else {
			if(bol){
			  	a[i]-=a[j];
			  	j--;
			}
			else{
				a[j]-=a[i];
				i++;
			}
		}
	}
	cout<<ans;
	return 0;
}
