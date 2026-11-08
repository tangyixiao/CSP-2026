#include<bits/stdc++.h>

using namespace std;

const int mmax=2e5+5;
struct st{
	int stn;
	char c1;
}at[mmax];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long sum;
	
	cin >> n;
	string s="";
	for(int i=1;i<=n;i++){
		cin >> at[i].stn >> at[i].c1;
		sum+=at[i].stn;
	}
	
	long long cnt=0;
	if(n%2==1){
		int zh=n/2;
		int zh1=n/2+1;
		int num=0;
		for(int i=1;i<=zh;i++){
			if(at[i].c1!=at[n-i].c1||at[i].stn!=at[n-i].stn||num!=0){
				long long  minn=min(at[i].stn,at[n-i].stn);
				if(at[i].stn>at[n-i].stn){
					num=num+at[i].stn-at[n-i].stn;
					cnt=cnt+num;
					continue;
				}
				if(at[i].c1!=at[n-i].c1){
					cnt=cnt+minn;
					continue;
				}
				
			}else{
				continue;
			}
		}
	}else{
		int zh=n/2;
		int zh1=n/2+1;
		long long  num=0;
		for(int i=1;i<=zh1;i++){
			if(at[i].c1!=at[n-i].c1||at[i].stn!=at[n-i].stn||num!=0){
				long long  minn=min(at[i].stn,at[n-i].stn);
				if(at[i].stn>at[n-i].stn){
					num=num+at[i].stn-at[n-i].stn;
					cnt=cnt+num;
					continue;
				}
				if(at[i].c1!=at[n-i].c1){
					cnt=cnt+minn;
					continue;
				}
				
			}else{
				continue;
			}
		}
	}
	
	cout << cnt;
	return 0;
}

