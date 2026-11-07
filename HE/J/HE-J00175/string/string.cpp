#include <bits/stdc++.h>
#define int long long
using namespace std;
constexpr int N=2e5+7;
int l[N],r[N];
char a[N];
int n;
int32_t main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		int x;char c;
		cin>>x;
		cin>>c;
		for(int j=1;j<=x;j++){
			s+=c;
		}
	}
	int ans=0;
	int m=s.size();
	s=' '+s;
	for(int i=1;i<=(m+1)/2;i++){
		if(s[i]!=s[m-i+1]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
/*
#include <bits/stdc++.h>
#define int long long
using namespace std;
constexpr int N=2e5+7;
int l[N],r[N];
char a[N];
int n;
int32_t main(){
	freopen("string4.in","r",stdin);
	//freopen("string.out","w",stdout);
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;char c;
		cin>>x;
		cin>>c;
		l[i]=r[i-1]+1;
		r[i]=l[i]+x-1;
		a[i]=c;
	}
	int ans=0;
	for(int i=1;i<=(n+1)/2;i++){
		int len1=r[i]-l[i]+1;
		int len2=r[n-i+1]-l[n-i+1]+1;
		//cout<<len1<<" "<<len2<<endl;
		if(len1==len2){
			if(a[i]!=a[n-i+1]){
				ans+=len1;
			}
			continue;
		}
		if(len1<len2){
			int len3=0,j=i;
			while(j<=n&&len3<len2){
				if(a[n-i+1]!=a[j]){
					if(len3+r[j]-l[j]+1>len2){
						ans+=(len2-len3);
						r[j]-=(len2-len3);
						break;
					}
					ans+=r[j]-l[j]+1;
				}
				if(len3+r[j]-l[j]+1>len2){
					r[j]-=(len2-len3);
					break;
				}
				len3+=r[j]-l[j]+1;
				j++;
			}
		}else{
			int len3=0,j=n-i+1;
			while(j>=1&&len3<len1){
				if(a[i]!=a[j]){
					if(len3+r[j]-l[j]+1>len1){
						ans+=(len1-len3);
						r[j]-=(len1-len3);
						break;
					}
					ans+=r[j]-l[j]+1;
				}
				if(len3+r[j]-l[j]+1>len1){
					r[j]-=(len1-len3);
					break;
				}				
				len3+=r[j]-l[j]+1;
				j--;
			}			
		}	
	}
	cout<<ans;	
	return 0;
}
3
2 a
2 b
1 c
*/
