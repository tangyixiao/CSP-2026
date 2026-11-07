#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string train_a,position_a,train_b,position_b;
	cin>>train_a>>position_a>>train_b>>position_b;
	int ans1,ans2,ans3,ans4;
	if(train_a == train_b){
		ans1 = 1;
		if(position_a[0] == position_b[0] && position_a[1] == position_b[1]){
			ans2 = 1;
			int as_a = position_a[2],as_b = position_b[2];
			if(as_a>as_b) swap(as_a,as_b);
			char spec = as_b;
			if((as_a <= 67 && as_b<=67) || (as_a>67 && as_b>67)){
				ans3 = 1;
				if(as_a+1==as_b && spec !='C' || (as_a+2==as_b && as_a == 68)){
					ans4 = 1;
				}else{
					ans4 = 0;
				}
			}else{
				ans3 = ans4 = 0;
			}
		}else{
			ans2 = ans3 = ans4 = 0;
		}
	}else{
		ans1 = ans2 = ans3 = ans4 = 0; 
	}
	cout<<ans1<<ans2<<ans3<<ans4;
	
	
	return 0;
} 