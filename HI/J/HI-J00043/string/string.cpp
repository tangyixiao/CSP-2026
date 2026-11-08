#include <bits/stdc++.h>
using namespace std;
int const N = 1e5+10;
int a[N];
char s[N];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long cnt=0;
	cin >> n;
	if (n==1) {
		cout << 0;
		return 0;	
	}
	for (int i=1;i<=n;i++)
		cin >> a[i] >> s[i];
	int left =1;
	int right = n;
	while (left<right)
	{
		if (s[left]==s[right])
		{
			if (a[left]<a[right]){
				a[right]-=a[left];
				left++;
			}
			else if (a[left]==a[right])
			{			
				left++;
				right--;
			}
			else{
				a[left]-=a[right];
				right--;	
			}
		}
		else{
			if (a[left]<a[right]){
				cnt+=a[left];
				a[right]-=a[left];
				left++;
				
			}
			else if (a[left]==a[right])
			{
				cnt+=a[left];
				left++;
				right--;
			}
			else{
				cnt+=a[right];
				a[left]-=a[right];
				right--;
						
			}
		}
	}
	cout << cnt;
		
	
	
			
}
