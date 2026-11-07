/*#include<bits/stdc++.h>
using namespace std;
long long ans;
long long a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int flag=1;
	for(int i=1;i<=n;i++){
		long long a1;
		char c1;
		cin>>a1>>c1;
		a[i]=a1;
		c[i]=c1;
	}
	int c2=c[1];
	for(int i=1;i<=n;i++){
		if(c[i]!=c2){
			flag=0;
		}
	}
	if(flag==1){
		cout<<0;
		return 0;
	}
	int i=1,j=n;
	while(i<j){
		if(c[i]!=c[j]&&a[i]>a[j]){
			int galf=0;
			while(a[i]>a[j]&&i<j){
				if(i>=j){
					galf=1;
					break;
				}
				ans+=a[j];
				a[i]-=a[j];
				a[j]=0;
				j--;
			}
			if(galf==1){
				break;
			}
		}
		else if(c[i]!=c[j]&&a[i]==a[j]){
			ans+=a[i];
			a[i]=0;
			a[j]=0;
			i++;
			j--;
		}
		else{
			int galf=0;
			while(a[j]>a[i]&&i<j){
				if(i>=j){
					galf=1;
					break;
				}
				ans+=a[i];
				a[j]-=a[i];
				a[i]=0;
				i++;
			}
			if(galf==1){
				break;
			}
			a[i]-=a[j];
			a[j]=0;
		}
	}
	cout<<ans;
	return 0;
} */
#include<bits/stdc++.h>
using namespace std;
long long n;
string s="";
long long ans=0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++){
		long long a;
		char c;
		cin>>a>>c;
		for(long long j=1;j<=a;j++){
			s+=c;
		}
	}
	for(long long i=0;i<(s.size()+1)/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
