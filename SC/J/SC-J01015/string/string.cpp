#include <bits/stdc++.h>
using namespace std;
long long  n;
struct z{
	long long  num;
	char a;
};
z b[200005];
long long  ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b[i].num>>b[i].a;
	}
	for(int i=0;i<n;i++){
		for(int j=n-1;j>=i;j--){
			if(b[i].num>0){
				if(b[i].a!=b[j].a){
					long long x=min(b[i].num,b[j].num);
					ans+=x;
					b[i].num-=x;
					b[j].num-=x;
					if(b[j].num==0){
						n--;
					}
				}
				else{
					long long x=min(b[i].num,b[j].num);
					b[i].num-=x;
					b[j].num-=x;
					if(b[j].num==0){
						n--;
					}
				}
			}
		}
	}
	cout<<ans;
	return 0;
} 