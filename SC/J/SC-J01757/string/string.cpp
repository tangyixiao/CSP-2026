#include<bits/stdc++.h>
using namespace std;
struct _string{
	long long num;
	char c;
};
_string a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].num>>a[i].c; 
	}
	int first=1,last=n;
	while(first<last){
		if(a[first].num==0) first++;
		if(a[last].num==0) last--;
		if(first>=last) break;
		long long x=min(a[first].num,a[last].num);
		if(a[first].c!=a[last].c){
			ans+=x;
		}
		a[first].num-=x;
		a[last].num-=x;
	}
	cout<<ans;
	return 0;
}