#include<bits/stdc++.h>
#define int long long

using namespace std;

int n;
int ans;
int a[200010];
char c[200010];

void bigsol(){
	int l=1, r=n+1;
	int mc = 0;
	
	mc += a[1];
	char nc = c[1];
	
	while(l < r){
		if(mc == 0){
			mc -= a[r-1];
			nc = c[r-1];
		}
		else{
			while(mc > 0){
				r --;
				if(r <= l) break;
				if(c[r] != nc){
					ans += a[r];
					mc -= a[r];
					if(mc < 0) {
						ans += mc;
						nc = c[r];
					}
				}
				else{
					mc -= a[r];
					if(mc < 0){
						nc = c[r];
					}
				}
				
				//cerr<<"r"<<r<<" "<<mc<<" "<<nc<<" "<<ans<<"\n";
			}
		}
			
		if(mc == 0){
			mc += a[l+1];
			nc = c[l+1];
		}
		else{
			while(mc < 0){
				l ++;
				if(l >= r) break;
				if(c[l] != nc){
					ans += a[l];
					mc += a[l];
					if(mc > 0){
						ans -= mc;
						nc = c[l];
					}
				}
				else{
					mc += a[l];
					if(mc > 0){
						nc = c[l];
					}
				}
				
				//cerr<<"l"<<l<<" "<<mc<<" "<<nc<<" "<<ans<<"\n";
			}
		}	
	}
}

signed main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	
	cin>>n;
	
	string s = "";
	bool usbgs = 0;
	
	for(int i=1; i<=n; i++){
		cin>>a[i]>>c[i];
		if(a[i] > 500){
			usbgs = 1;
		}
		if(!usbgs){
			for(int j=1; j<=a[i]; j++){
				s += c[i];
			}
		}
	}
	
	if(usbgs){
		bigsol();
	}
	else{
		int l = s.size();
		for(int i=0; i<l/2; i++){
			if(s[i] != s[l-i-1]) ans ++;
		}
	}
	
	cout<<ans<<endl;
	
	
	return 0;
}
/*

only bigsol: WA
only baoli: TLE

bigsol with baoli: AC

???????

may AFO after this time

but I'm not getting a good score.

QwQ QwQ QwQ QwQ

//freopen

*/