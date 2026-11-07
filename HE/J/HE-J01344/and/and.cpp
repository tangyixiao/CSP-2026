#include<bits/stdc++.h>
using namespace std;
int n,m;
struct stu{
	int b;
	string s;
}a[200005];
bool cmp(stu x,stu y){
	return x.b>y.b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> a[i].b;
	}
	sort(a,a+n,cmp);
	if(m==1){
		cout << a[0].b;
		return 0;
	}
	for(int i=0;i<n;i++){
		int c=a[i].b;
		while(c){
			if(c%2==1) a[i].s+='1';
			else a[i].s+='0';
			c/=2;
		}
	}
	string s2;
	for(int i=0;i<m-1;i++){
		int l=max(a[i].s.size(),a[i+1].s.size());
		for(int j=0;j<l;j++){
			if(a[i].s[j]==1&&a[i+1].s[j]==1){
				s2+='1';
			}else{
				s2+='0';
			}
		}
	}
	int cnt=0;
	for(int i=0;i<s2.size();i++){
		int d=1;
		if(s2[i]=='1'){
			cnt+=d;
		}
		d*=2;
	}
	cout << cnt;
	return 0;
} 
