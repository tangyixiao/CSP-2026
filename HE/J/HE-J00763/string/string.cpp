#include <bits/stdc++.h>
using namespace std;
int num[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> num[i] >> c[i];
	}
	long long cnt=0;
	int i=1,j=n;
	while(i<j){
		if(c[i]!=c[j]){
			if(num[i] == num[j]) cnt += num[i++],j--;
			else if(num[i] > num[j]){
				cnt += num[j];
				num[i] -= num[j--];
			}
			else{
				cnt += num[i];
				num[j] -= num[i++];
			}
		}
		else{
			if(num[i] == num[j]) i++,j--;
			else if(num[i] > num[j]) num[i] -= num[j--];
			else num[j] -= num[i++];
		}
	}
	cout << cnt;
	return 0;
}
