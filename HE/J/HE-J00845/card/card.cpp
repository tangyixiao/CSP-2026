#include<iostream>
using namespace std;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	const int N=200002;
	int a[N];
	int n,m;
	int cnt=0;
	cin>>n>>m;
	for(int f=0;f<n;++f){
		cin>>a[f];
	} 
	cout<<n<<" "<<a[0]<<" "<<a[n];
}
