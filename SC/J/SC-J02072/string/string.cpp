#include<bits/stdc++.h>
#define int long long
using namespace std;
ifstream fin("string.in");
ofstream fout("string.out");
struct dick{
	int n;
	char c;
}a[1000001];
signed main(){
	ios::sync_with_stdio(0),fin.tie(0),fout.tie(0);
	int t;fin>>t;
	for(int i=1;i<=t;i++)fin>>a[i].n>>a[i].c;
	int i=1,j=t,sum=0;
	while(i<j){
		if(a[i].n>a[j].n){
			if(a[i].c==a[j].c){
				a[i].n-=a[j].n;j--;
			}else{
				sum+=a[j].n;
				a[i].n-=a[j].n;j--;
			}
		}else{
			if(a[i].c==a[j].c){
				a[j].n-=a[i].n;i++;
			}else{
				sum+=a[i].n;
				a[j].n-=a[i].n;i++;
			}
		}
	}fout<<sum;
	return 0;
}