/*#include<bits/stdc++.h>
using namespace std;
int n;
long long a[200005];
long long m,s[200005];
bool b=0;
char c[200005];
struct A{
	int x;
	char a;
}s1[200005],s2[200005],s[200005];
int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		m+=a[i];
		s[i].x+=s[i-1].x+a[i];
		s[i].a=c[i];
	}
	if(m%2==0) b=1;
	m=(m+1)/2;
	int js=1;
	int cnt1=0,cnt2=0;
	for(int i=1;i<=n;i++){
		if(m<=s[i]){
			js=i;
			s1[1].x=m-s[i-1].x;
			s1[1].a=s[i].a;
			cnt1=2;
			if(b){
				s2[1].x=s[i].x-m;
				s2[1].a=s[i].a;
				cnt2=2;
			}
			else{
				s2[1].x=m-s[i-1].x;
				s2[1].a=s[i].a;
				s2[2].x=s[i].x-m;
				s2[2].a=s[i].a;
				cnt2=3;
			}
			break;
		}
	}
	for(int i=js-1;i>=0;i--){
		s1[cnt1].x=s1[cnt1-1]+a[i];
		s1[cnt1].a=c[i];
		cnt1++;
	}
	for(int i=js+1;i<=n;i++){
		s2[cnt2].x=s2[cnt2-1]+a[i];
		s2[cnt2].a=c[i];
		cnt2++;
	}
	int j=1;
	for(int i=1;i<=cnt2-1;i++){
		if(s2[i].x<=s1[i])
	}
}
*/
#include<bits/stdc++.h>
using namespace std;
int n;
long long a;
char c;
long long m,sum;
string s;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	int k=0;
	for(int i=1;i<=n;i++){
		cin>>a>>c;
		m+=a;
		for(long long i=1;i<=a;i++){
			s+=c;
		} 
	}
	for(int i=0;i<m/2;i++){
		if(s[i]!=s[m-i-1]){
			sum++;
		}
	}
	cout<<sum;
}
/*
2
2 a
3 a

3
2 a
2 b
1 c
*/
