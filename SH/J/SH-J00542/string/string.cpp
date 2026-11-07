#include<bits/stdc++.h>
using namespace std;
long long a[200010];
char c[200010];
int n;
void solve2(){
	long long cnt=0;
	int i=1;
	while(i<=n/2){
		if(a[i]==0) continue;
		if(c[i]!=c[n-i+1]){
			int w=i;
			int nw=n-i+1;
			if(a[i]<a[n-i+1]){
				while(a[i]<a[n-i+1])a[i]+=a[++w];
				a[w]=a[i]-a[n-i+1];
				for(int j=i;j<w;j++){
					a[j]=0;
				}
				cnt+=a[n-i+1];
			}
			else if(a[i]>a[n-i+1]){
				while(a[i]>a[n-i+1]) a[n-i+1]+=a[--nw]; 
				a[nw]=a[n-i+1]-a[i];
				for(int j=nw+1;j<=n-i+1;j++){
					a[j]=0;
				}
				cnt+=a[i];
			}
			else if(c[i]!=c[n-i+1] && a[i]==a[n-i+1]){
				a[i]=0;a[n-i+1]=0;
				cnt+=a[n-i+1];
			}
		}
		i++;
	}
	cout<<cnt;
}
void solve1(){
	string s;
	long long sum=0;
	for(int i=1;i<=n;i++){
		sum+=a[i];
		for(int j=1;j<=a[i];j++){
			s+=c[i];
		}
	}
	long long cnt=0;
	for(int i=0;i<s.size();i++){
		if(s[i]!=s[sum-i-1]){
			s[sum-i-1]=s[i];
			cnt++;
		}
	}
	cout<<cnt;
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout); 
	long long maxa=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		maxa=max(maxa,a[i]);
	}
	if(maxa>=1e7){
		solve2();
	}
	else solve1();
	return 0;
}
/*
aabbaac
 
4
2 a
2 b
2 a
1 c
*/
