#include<bits/stdc++.h>
using namespace std;
long long ans,n,l,s1 = 1,e1,s2,e2,cnt,cnt2,s,e,tmp,ts[2000005];
long long a[200005];
char c[200005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i]>>c[i];
		l += a[i];
	}
	int m = 0;
	if (n % 2 != 0) m =1;
	int fi = n / 2 + m;
	for(int i = 1;i<=n / 2 + m;i++){
		s1 += a[i - 1];
		e1 += a[i];
	    s2 = l - e1 + 1;
		e2 = l - s1 + 1;
	    cnt = n - i + 1;
	    if (s1 == s2 && s1 == e2){
   	 	   continue;
		}
	    else if (e1 > s2){
	    	ans+=e2-e1; 
			
		}
		else{
		    for (long long j = e2;j >= s2;j -= a[cnt]){
		    	if (c[cnt] != c[i]){
		    		if (j - a[cnt] < s2){
		    			ans += j - s2 + 1;
		    			tmp = j - s2 + 1;
					}
		    		else if (j == e2){
		    			ans += a[cnt] - tmp;
					}
					else{
						ans += a[cnt];
					}
				}
		    	cnt--;
			}
		}
		fi--;
	}
	
	cout<<ans;
	return 0;
}



