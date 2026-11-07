#include<bits/stdc++.h>
using namespace std;
long long a[200005];
char b[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long x;
	int n;
	cin>>n;
	long long ans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>b[i];
		ans+=a[i];
	}
	long long answer=0;
	for(int i=1;i<=n;i++){
		if(i==n){
			break;
		}
		if(b[i]==b[n]){
			if(a[i]<a[n])a[n]-=a[i];
			else {
				a[i]-=a[n];
				i--;
				n--;
			}
		}
		else {
			if(a[i]<a[n]){
				a[n]-=a[i];
				answer+=a[i]; 
			}
			else {
				a[i]-=a[n];
				answer+=a[n];
				i--;
				n--;
			}
		}
	}
	cout<<answer;
	return 0;
} 