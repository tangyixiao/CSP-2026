#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],m;
string f(long long x){
	string sx;//fanerjinzhi
	while(x!=0)sx+=char(x%2+'0'),x/=2;
	return sx;
}
bool check(long long k){// shifou you zhishao m ge zai k shi 1 de weizhi dou shi 1 d shu
	string fk=f(k);long long cnt=0;
	for(int i=1;i<=n;i++){//dui yv meiyige i
	string fi=f(a[i]);
		for(int i=0;i<fk.size();i++){
			if(fk[i]=='1'){
				if(fi.size()<fk.size())goto xxx;//k shi 1 ,si meiyou zhe yi wei
				if(fi[i]=='0')goto xxx;// & shang jiu bu neng baozheng  
			}
		}
		cnt++;
		xxx:;
	}	
	return cnt>=m;
}
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	long long r;
	for(int i=1;i<=n;i++){cin>>a[i];r=max(r,a[i]);}
    long long l=0;r++;
    while(l+1!=r){
    	long long mid=(l+r)/2;
    	if(check(mid))l=mid;
    	else r=mid;
	}
	cout<<l;
}
