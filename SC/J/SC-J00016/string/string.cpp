#include<bits/stdc++.h>
using namespace std;
string s;
const int N=200005;
int n,t=0;
long long a[N];
char b[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=a[i];j++){
			s=s+b[i];
		}
	}
	int x=s.size();
	for(int i=0;i<=x/2-1;i++){
		if(s[i]!=s[x-i-1]){
			t++;
		}
	}
	cout<<t;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
} 