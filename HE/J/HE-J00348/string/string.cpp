#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int N = 2e5+10;
string x[N];
int a[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	int l=0;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		l+=a[i];
		cin>>x[i];
	}
	string s1=" ",s2=" ";
	int ans=0;
	if(l%2==1){
		int mid=l/2+1,p;
		int k1=0,k2=0;
		for(int i=1;i<=n;i++){
			p=i+1;
			if(k1+a[i]<=mid){
				for(int j=1;j<=a[i];j++) s1+=x[i];
				k1+=a[i];
			}
			else if(k1<mid&&k1+a[i]>mid){
				string t;
				for(int j=1;j<=a[i];j++) t+=x[i];
				s1+=t.substr(0,mid-k1-1);
				s2+=t.substr(mid-k1,k1+t.size()-mid);
				k2+=k1+t.size()-mid;
				k1+=mid-k1-1;
				break;
			}
			else break;
		}
		for(int i=p;i<=n;i++){
			for(int j=1;j<=a[i];j++) s2+=x[i];
			k2+=a[i];
		}
		int r=k2;
		for(int l=1;l<=k1;l++){
			if(s1[l]!=s2[r]) ans++;
			r--;
		}
		cout<<ans;
	}
	else{
		int mid=l/2,p;
		int k1=0,k2=0;
		for(int i=1;i<=n;i++){
			p=i+1;
			if(k1+a[i]<=mid){
				for(int j=1;j<=a[i];j++) s1+=x[i];
				k1+=a[i];
			}
			else if(k1<mid&&k1+a[i]>mid){
				string t;
				for(int j=1;j<=a[i];j++) t+=x[i];
				s1+=t.substr(0,mid-k1);
				s2+=t.substr(mid-k1,k1+t.size()-mid);
				k2+=k1+t.size()-mid;
				k1+=mid-k1;
				break;
			}
			else break;
		}
		for(int i=p;i<=n;i++){
			for(int j=1;j<=a[i];j++) s2+=x[i];
			k2+=a[i];
		}
//		cout<<s1<<" "<<k1<<endl<<s2<<" "<<k2;
		int r=k2;
		for(int l=1;l<=k1;l++){
			if(s1[l]!=s2[r]) ans++;
			r--;
		}
		cout<<ans;
	}
	return 0;
}
