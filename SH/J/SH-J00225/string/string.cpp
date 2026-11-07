#include<bits/stdc++.h>
using namespace std;
using ll=long long;
struct node{
	ll cnt;
	char c;
};
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	ll sum=0;
	int n;
	ll num=0;
	char cc;
	cin>>n;
	vector<node> a(n,{0,0});
	for(int i=0;i<n;i++){
		cin>>num>>cc;
		a[i].cnt=num;
		a[i].c=cc;
	}
	int i=0,j=n-1;
	while(i<j){
//		cout<<i<<" "<<j<<"\n";
//		cout<<sum<<"\n"; 
		if(a[i].c!=a[j].c){
//			cout<<i<<" "<<j<<"b\n";
//			cout<<a[i].cnt<<" "<<a[j].cnt<<"\n";
			if(a[i].cnt<a[j].cnt){
				sum+=a[i].cnt;
				a[j].cnt-=a[i].cnt;
				i++;
			}else if(a[i].cnt>a[j].cnt){
				sum+=a[j].cnt;
				a[i].cnt-=a[j].cnt;
				j--;
			}else{
				sum+=a[i].cnt;
				i++;
				j--;
			}
		}else{
			if(a[i].cnt>a[j].cnt){
				a[i].cnt-=a[j].cnt;
				j--;
			}else if(a[i].cnt<a[j].cnt){
				a[j].cnt-=a[i].cnt;
				i++;
			}else{
				i++;
				j--;
			}
		}
	}
	cout<<sum;
	return 0;
}
