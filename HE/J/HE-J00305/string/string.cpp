#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
struct node{
	int a;
	char k;
}ak[N];
int n;
string s=" ";
long long sum;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> ak[i].a >> ak[i].k;
		sum+=ak[i].a;
		for(int j=1;j<=ak[i].a;j++){
			s+=ak[i].k;
			
		}
	}
	
	long long ans=0;
	for(int i=1;i<=sum/2;i++){
		if(s[i]!=s[sum+1-i]){
			ans++;
		}
	}
	cout<<ans;
	
	

	

	return 0;
} 
