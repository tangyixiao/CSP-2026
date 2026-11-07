#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n;
long long a[N],numup,ans;
char c[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	for(int i=1,j=n;i<=j;){
		if(c[i]!=c[j]){
			ans+=min(a[i],a[j]);
		}
			numup=a[i]-a[j];
		if(numup>0){
			a[i]-=numup;
			j--;
		}else if(numup<0){
			a[j]+=numup;
			i++;
		}else{
			i++;j--;
		}
		numup=0;
		if(i==j)break;
	}
	cout<<ans;
	return 0;
} 

//#include<bits/stdc++.h>
//using namespace std;
//const int N=2e5+5;
//int n;
//long long a[N],numup,ans;
//char c[N];
//string s;
//int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
//	ios::sync_with_stdio(0),cin.tie(0);
//	cin>>n;
//	s=" ";
//	for(int i=1;i<=n;i++){
//		cin>>a[i]>>c[i];
//		for(long long j=1;j<=a[i];j++){
//			s+=c[i];
//		}
//	}
//	for(long long i=1,j=s.size()-1;i<=j;i++,j--){
//		if(s[i]!=s[j]){
//			ans++;
//		}
//	}
//	cout<<ans;
//	return 0;
//} 
