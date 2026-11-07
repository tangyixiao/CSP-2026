#include<bits/stdc++.h>
using namespace std;
	int arr[3];
	string a;
	string b;
	string c;
	string d;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
		if(a[0]==c[0]){
			if(a[1]==c[1]){
			arr[0]=1;
		}else{
			cout<<"0000";
			return 0;
		}
	}else{
		cout<<"0000";
		return 0;
		}


		if(b[0]==d[0]){
			if(b[1]==d[1]){
			arr[1]=1;
			}
		}else{
			arr[1]=0;
		}


		if(b[0]==d[0]){
			if(b[1]==d[1]){
				if(b[2]=='A'){
					if(d[2]=='B'){
					arr[2]=1;
					}else if(d[2]=='C'){
						arr[2]=1;
					}
				}else if(b[2]=='B'){
					if(d[2]=='A'){
						arr[2]=1;
					}else if(d[2]=='C'){
						arr[2]=1;
					}
				}else if(b[2]=='C'){
					if(d[2]=='A'){
						arr[2]=1;
					}else if(d[2]=='B'){
						arr[2]=1;
					}
				}else if(b[2]=='F'){
					if(d[2]=='D'){
						arr[2]=1;
					}
				}else if(b[2]=='D'){
					if(d[2]=='F'){
						arr[2]=1;
					}
				}else{
					arr[2]=0;
				}
			}else{
				arr[2]=0;
			}
		}else{
			arr[2]=0;
		}

			if(b[0]==d[0]){
			if(b[1]==d[1]){
		if(b[2]=='A'){
			if(d[2]=='B'){
				arr[3]=1;
			}
		}else if(b[2]=='B'){
			if(d[2]=='A'){
				arr[3]=1;
			}
		}else if(b[2]=='C'){
			if(d[2]=='B'){
				arr[3]=1;
			}
		}else if(b[2]=='D'){
			if(d[2]=='F'){
				arr[3]=1;
			}
		}else if(b[2]=='F'){
			if(d[2]=='D'){
				arr[3]=1;
			}
		}else{
			arr[3]=0;
		}
	}else{
		arr[3]=0;
		}
	}else{
	arr[3]=0;
	}
	cout<<arr[0]<<arr[1]<<arr[2]<<arr[3];
	return 0;
}