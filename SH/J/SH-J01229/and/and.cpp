#include <iostream>
#include <algorithm> 
#include <climits>
using namespace std;

int n,m;
int arr[200005];

int main(){
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	cin >> n >> m;
	bool spe = true; //special arr[i] = 2^k-1
	for(int i = 0;i < n;i++){
		cin >> arr[i];
		//special arr[i] = 2^k-1
		if(arr[i]&INT_MAX != arr[i])
			spe = false;
	}
	// special m = n
	if(m == n){
		int ans = arr[0];
		for(int i = 1;i < n;i++)
			ans &= arr[i];
		cout << ans;
		return 0;
	}
	//special m = 1
	if(m == 1){
		int ans = 0;
		for(int i = 0;i < n;i++)
			ans = max(ans,arr[i]);
		cout << ans;
		return 0;
	}
	//special m = 2
	if(m == 2){
		int ans = 0;
		for(int i = 0;i < n;i++)
			for(int j = i+1;j < n;j++)
			    ans = max(ans,arr[i]&arr[j]);
		cout << ans;
		return 0;
	}
	//special a[i] = 2^k-1
	if(spe){
		int ans = arr[0];
		for(int i = 1;i < n;i++)
			ans &= arr[i];
		cout << ans;
		return 0;
	}
	//simple
	cout << 0;
	return 0;
}
