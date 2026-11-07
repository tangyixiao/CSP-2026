#include <iostream>
using namespace std;

int n,m;
int arr2[200005][35];
int pow2[35];
bool usable[200005];
int ans;

int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int gunmu=1;
	for(int i=0;i<=30;i++){
		pow2[i]=gunmu;
		gunmu*=2;
	}
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		int temp,pow=0;
		usable[i]=true;
		cin >> temp;
		while(temp){
			arr2[i][pow]=temp%2;
			temp/=2;
			pow++;
		}
	}
	for(int i=29;i>=0;i--){
		int ctr=0;
		for(int j=1;j<=n;j++){
			if(usable[j]&&arr2[j][i])ctr++;
		}
		if(ctr>=m){
			ans+=pow2[i];
			for(int j=1;j<=n;j++){
				if(!arr2[j][i])usable[j]=false;
			}
		}
	}
	cout << ans;
	
	
	return 0;
}
