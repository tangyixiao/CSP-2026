#include<bits\stdc++.h> 
using namespace std;
string b;
long long a;
long long cnt=0,n;
string c;
bool d;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=0;i<n;i++){
		scanf("%lld",&a);
		cin>>c;
		for(int j=0;j<a;j++){
			b+=c;
		}
	}
	for(int i=0;i<b.size()/2;i++){//3 2 a 2 c 2 b
		if(b[i]!=b[b.size()-i]){
			cnt++;	
		}
	}
	cout<<cnt;
	return 0;
}
