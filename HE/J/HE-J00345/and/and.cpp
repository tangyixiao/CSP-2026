#include<bits/stdc++.h>
using namespace std;
int a[200005];
int ten_two(int x){
	int twoo[15];
	int cnt=0;
	while(x!=0){
		cnt++;
		twoo[cnt]=x%2;
		x/=2;
	}
	int chuan=0;
	for(int i=1;i<=cnt;i++){
		int p=pow(10,i-1);
		if(twoo[i]==1){
			chuan+=p;
		}
	}
	return chuan;
}
int two_ten(int x){
	int tenn[15];
	int cnt=0;
	while(x!=0){
		cnt++;
		tenn[cnt]=x%10;
		x/=10;
	}
	int sum=0;
	for(int i=1;i<=cnt;i++){
		int p=pow(2,i-1);
		if(tenn[i]==1){
			sum+=p;
		}
	}
	return sum;
}
int yu_and(int x,int y){
	int xxx=ten_two(min(x,y));
	int yyy=ten_two(max(y,x));
	int two_x[15];
	int two_y[15];
	int cnt_x=0;
	int cnt_y=0;
	while(xxx!=0){
		cnt_x++;
		two_x[cnt_x]=xxx%10;
		xxx/=10;
	}
	while(yyy!=0){
		if(cnt_y<cnt_x){
			cnt_y++;
			two_y[cnt_y]=yyy%10;
			yyy/=10;
		}
		else{
			break;
		}
	}
	int summ=0;
	for(int i=1;i<=cnt_x;i++){
		if(two_x[i]==1&&two_y[i]==1){
			int p=pow(2,i-1);
			summ+=p;
		}
	}
	return summ;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
	}
	else if(m==2){
		int big=0;
		for(int i=2;i<=n;i++){
			int andd=yu_and(a[i],a[i-1]);
			if(andd>big){
				big=andd;
			}
		}
		cout<<big;
	}
	else if(m==n){
		int bian=yu_and(a[1],a[2]);
		int sum=bian;
		for(int i=3;i<=n;i++){
			sum+=yu_and(a[i],bian);
		}
		cout<<sum;
	}
	return 0;
}

