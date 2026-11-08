#include<bits/stdc++.h>
using namespace std;
long long n,sum=0;
string s,a,b;
long long x,lena;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	while(n--){
		cin >> x >> s;
		for(int i=1 ; i<=x ; i++){
			a+=s;
		} 		
	}
	b=a;
	reverse(a.begin(),a.end());
	if(a==b){
		cout << 0;
		return 0;
	}
	if(!(a.size()%2)){
		lena=a.size()/2+a.size()%2;
	}
	else{
		lena=a.size()/2+a.size()%2-1;
	}
	for(long long i=lena ; i<a.size() ; i++){
		if(a[i]!=b[i]){
			sum++;
		}
	}
	cout << sum ;
	return 0;
}
