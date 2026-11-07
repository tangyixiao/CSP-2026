#include <bits/stdc++.h>
using namespace std;

long long ans1,ans2,ans3,ans4;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a == c){
		ans1 = 1;
	}else{
		ans1 = 0;
		ans2 = 0;
		ans3 = 0;
		ans4 = 0;
	}
	if(ans1 == 1 && b[0] == d[0] && b[1] == d[1]){
		ans2 = 1;
	}else{
		ans2 = 0;
		ans3 = 0;
		ans4 = 0;
	}
	if(ans2 == 1){
		if(b[2] == 'A' && d[2] == 'B' || b[2] == 'B' && d[2] == 'A'){
			ans3 = 1;
			ans4 = 1;
		}
		if(b[2] == 'A' && d[2] == 'C' || b[2] == 'C' && d[2] == 'A'){
			ans3 = 1;
			ans4 = 0;
		}
		if(b[2] == 'B' && d[2] == 'C' || b[2] == 'C' && d[2] == 'B'){
			ans3 = 1;
			ans4 = 1;
		}
		if(b[2] == 'D' && d[2] == 'F' || b[2] == 'F' && d[2] == 'D'){
			ans3 = 1;
			ans4 = 1;
		}
	}
	cout<<ans1<<ans2<<ans3<<ans4; 
} 
