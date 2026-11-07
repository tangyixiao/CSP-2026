#include<bits/stdc++.h> 
using namespace std;
long long a[200050];
char c[200050];
string s="0";
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long z=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
		z=z+a[i];
		for(int j=1;j<=a[i];j++){
			s=s+c[i];
		}
	}
	long long b=0;
	if(z%2==0){
		for(int i=1;i<=z/2;i++){
			if(s[i]!=s[z-i+1]){
				b++;
			}
		}
	}else{
		for(int i=1;i<=(z-1)/2;i++){
			if(s[i]!=s[z-i+1]){
				b++;
			}
		}
	}
	cout<<b;
}

