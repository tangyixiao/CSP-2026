#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
#define ll long long
string s;
ll a[N],n,b[N],d[N],ans1,ans2;
char c[N];
ll search(int x){
	int l=1,r = n,mid;
	while(l<=r){
		mid = (l+r)/2;
		if(b[mid]>x){
			r = mid -1;
		}else{
			l = mid +1;
		}
	}
	return r;
}
void input(int i){
	for(int i=1;i<=a[i];i++){
		s.push_back(c[i]);
	}
}
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		b[i] = b[i-1]+a[i];
		input(i);
	}
//	for(int i=1;i<=n;i++){
//		d[i] =  b[n]-b[i];
//	}
//	for(int i=1;i<=n;i++){
//	//	int l1 = b[i-1],r1 = b[i]; 
//		int p = search(d[i]);
//		if(c[p]==c[i]){
//			ans
//		}
//	}
	for(int i=0;i<b[n]/2-1;i++){
		if(s[i]==s[n-i-1]){
			ans1++;
		}
	}
	int f = b[n]-(b[n]+1)/2;
	for(int i=f;i<b[n];i++){
		if(s[i]==s[n-i-1]){
			ans2++;
		}
	}
	cout<<f-max(ans1,ans2);
	return 0;
}