#include<bits/stdc++.h>
using namespace std;
long long n, a[200010], m, ans;
string s, x;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		cin>>s[i];
	}
	for(int i=1; i<n; i++){
		if(s[i]==s[i-1]){
			a[i-1]+=a[i];
			for(int j=i; j<n-1; j++){
				a[j]=a[j+1];
				s[j]=s[j+1];
			}
			n--;
			i--;
		}
	}
	m=n-1;
	for(int i=0; i<n; i++){
		long long x=a[i];
		if(i==m){
			break;
		}
		while(x>=a[m]){
			x-=a[m];
			if(s[i]!=s[m]){
				ans+=a[m];
			}
			a[m]=0;
			m--;
		}
		if(x<a[m]&&x>0){
			a[m]-=x;
			if(s[i]!=s[m]){
				ans+=x;
			}
			x=0;
			a[i]=0;
		}
	}
	cout<<ans;
	return 0;
}#include<bits/stdc++.h>
using namespace std;
long long n, a[200010], m, ans;
string s, x;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		cin>>s[i];
	}
	for(int i=1; i<n; i++){
		if(s[i]==s[i-1]){
			a[i-1]+=a[i];
			for(int j=i; j<n-1; j++){
				a[j]=a[j+1];
				s[j]=s[j+1];
			}
			n--;
			i--;
		}
	}
	m=n-1;
	for(int i=0; i<n; i++){
		long long x=a[i];
		if(i==m){
			break;
		}
		while(x>=a[m]){
			x-=a[m];
			if(s[i]!=s[m]){
				ans+=a[m];
			}
			a[m]=0;
			m--;
		}
		if(x<a[m]&&x>0){
			a[m]-=x;
			if(s[i]!=s[m]){
				ans+=x;
			}
			x=0;
			a[i]=0;
		}
	}
	cout<<ans;
	return 0;
}#include<bits/stdc++.h>
using namespace std;
long long n, a[200010], m, ans;
string s, x;
int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
		cin>>s[i];
	}
	for(int i=1; i<n; i++){
		if(s[i]==s[i-1]){
			a[i-1]+=a[i];
			for(int j=i; j<n-1; j++){
				a[j]=a[j+1];
				s[j]=s[j+1];
			}
			n--;
			i--;
		}
	}
	m=n-1;
	for(int i=0; i<n; i++){
		long long x=a[i];
		if(i==m){
			break;
		}
		while(x>=a[m]){
			x-=a[m];
			if(s[i]!=s[m]){
				ans+=a[m];
			}
			a[m]=0;
			m--;
		}
		if(x<a[m]&&x>0){
			a[m]-=x;
			if(s[i]!=s[m]){
				ans+=x;
			}
			x=0;
			a[i]=0;
		}
	}
	cout<<ans;
	return 0;
}
