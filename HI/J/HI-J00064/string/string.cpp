#include<bits/stdc++.h>
using namespace std;
typedef long ll;
const int N=2e5+10;
ll a[N];
char c[N];
ll all=0;
ll ans=0;
ll n;
ll sum;
vector<char> A;
set<char> B;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	//A.push_back(' ');
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		all+=a[i];
		B.insert(c[i]);
	}
	if(B.size()==1){
		cout<<0;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(ll j=1;j<=a[i];j++){
			ans++;
			if(all%2!=0){
				if(ans==all/2+1)continue;
			}
			if(ans<=all/2){
				A.push_back(c[i]);
			}
			else{
				if(A[all-ans]!=c[i])sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}  

//3 
//2 a
//2 b
//1 c
//a a
//b c
//6
//1000000000 a
//1000000000 a
//1000000000 a
//1000000000 a
//1000000000 a
//1000000000 a
