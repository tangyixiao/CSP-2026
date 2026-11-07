#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
int n,t;
string a;
char c;
ull ch(string x){	
	ull len=a.length(),ans=0;
	for(ull i=0;i<len/2;i++){		
		if(a[i]!=a[len-i-1])
			ans++;
	}
	return ans;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	
	cin>>n;
	while(n--){
		cin>>t>>c;
		for(ull i=0;i<t;i++)
			a+=c;
	}
	cout<<ch(a);
	return 0;
} 
