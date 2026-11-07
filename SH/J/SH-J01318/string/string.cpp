#include<iostream>
using namespace std;
int n,a[2000005];
char s[2000005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long sum = 0;
	cin>>n;
	for(int i = 1;i <= n;i++){
		cin>>a[i]>>s[i];
		sum += a[i];
	}
	sum /=2;
	long long i = 1,j = n,l = 0,r = 0,ans = 0,just = 0; 
	while(i-1 < j+1){
		if(l > r){
			if(s[i-1] == s[j+1]){
				r += a[j];
			}
			else{
				ans += min(l,r)-ans;
				r+=a[j];
			}
			j--;
		}
		else if(l < r){
			if(s[i-1] == s[j+1]){
				l += a[i];
			}
			else{
				ans += min(r,l)-ans;
				l+=a[i];
			}
			i++;
		}
		else{
			if(s[i-1] != s[j+1]){
				ans += min(a[i-1],a[j+1]);
			}
			l+=a[i],r+=a[j];
			i++,j--;
		}
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0; 
} 
