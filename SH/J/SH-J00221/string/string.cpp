//#include<bits/stdc++.h>
//using namespace std;
//int n;
//struct node{
//	long long a;
//	string str;
//}a[2000004]; 
//int main(){
//	freopen("string.in","r",stdin);
//	freopen("string.out","w",stdout);
//	cin>>n;
//	for(int i=1;i<=n;i++) cin>>a[i].a>>a[i].str;
//	int l=1,r=n;
//	long long cnt=0;
//	while(l<=r){
//		if(a[l].str!=a[r].str){
//			cnt=cnt+min(a[l].a,a[r].a);  
//		}
//		a[l].a=a[l].a-min(a[l].a,a[r].a);
//		a[r].a=a[l].a-min(a[l].a,a[r].a);
//		if(a[l].a==0) l++;
//		if(a[r].a==0) r--;
//	} 
//	cout<<cnt;
//	fclose(stdin);
//	fclose(stdout);
//	return 0;
//} 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
string s="";
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		ll a;
		string str;
		cin>>a>>str;
		while(a--) s+=str;
	}
	int length=s.size();
	int cnt=0;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[length-1-i]) cnt++;
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
