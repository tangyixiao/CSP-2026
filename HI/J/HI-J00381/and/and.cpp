#include<bits/stdc++.h>
using namespace std;
long long s[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int a,b;long long c = 0;
	scanf("%d%d",&a,&b);
	for(int i = 1;i <= a;i++){
		scanf("%lld",&s[i]);
	}long long d = 1,z = 1;
	for(int i = 1;i<= a;i++){
		d *= 2;
	}d -= 1;
	
	for(int i = 1;i <= d;i++){
		string s1 = bitset<20>(i).to_string();
		int x = 0,y;
		for(int j = 0;j < a;j++){
			if(s1[19-j] == '1'){
				if(x == 0){
					y = s[j+1];
				}else{
					y = y & s[1+j];
				}x++;
				
			}
		}
		if(x == b && y >= c) c = y;
	}printf("%d",c);
	return 0;
}
