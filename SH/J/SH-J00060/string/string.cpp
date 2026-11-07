#include<bits/stdc++.h>
using namespace std;
struct ss{
	char c;
	int v;
}a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	//cout<<n<<endl;
	string s = "";
	int mx = 0;
	for(int i = 1;i<=n;i++){
		cin>>a[i].v>>a[i].c;
		//cout<<a[i].c<<" "<<a[i].v<<endl;
		mx = max(mx,a[i].v);
	}
	if(mx<=500){
		for(int i = 1;i<=n;i++){
			for(int j = 0;j<a[i].v;j++){
				s+=a[i].c;
			}
		}
		int cnt = 0;
		int len = s.size(); 
		s = " "+s;
		for(int i = 1;i<=len-i+1;i++){
			if(s[i]!=s[len-i+1]){
				cnt+=1;
			}
		}
		cout<<cnt;
	}
//	long long sum = 0;
//	int lst = 1;
//	for(int i = 1;i<=n;i++){
//		s tmp;
//		cin>>tmp.v>>tmp.c;
//		sum+=tmp.v;
//		if(a[lst].c == tmp.c){
//			a[lst].v+=tmp.v;
//		}else{
//			a[lst] = tmp;
//			lst+=1;
//		}
//	}
//	if(sum/2*2!=sum){
//		sum/=2;
//		sum+=1;
//	}else{
//		sum/=2;
//	}
//	int ct = 0;
//	int mid = 0;
//	long long s2 = 0;
//	for(int i = 1;i<=lst;i++){
//		//cout<<a[i].c<<" "<<a[i].v<<endl;
//		s2+=a[i].v;
//		if(s2>=sum){
//			//cout<<s2<<" "<<sum<<endl;
//			ct = i;
//			mid = a[i].v-(s2-sum);
//			break;
//		}
//	}
//	
//	//cout<<ct<<" "<<mid;
//	if()
}
