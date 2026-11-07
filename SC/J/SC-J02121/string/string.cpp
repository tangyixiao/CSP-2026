#include<bits/stdc++.h>
using namespace std;
long long n,a[200006];
char c[200006];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
    cin>>n;
    long long ans=0,sum=0;
    for(int i=1;i<=n;i++){
    	cin>>a[i]>>c[i];
    	sum+=a[i];
	} 
	if(sum%2==1){
		long long zx=(sum+1)/2;
		long long cnt=0,zt=0;
		for(int i=1;i<=n;i++){
			zt++;
			cnt+=a[i];
			if(cnt>=zx) break;
		}
		long long cy1=0,cy2=0,cnt1=1,cnt2=n;
		while(1){
			//cout<<cnt1<<" "<<cnt2<<" ";
			//cout<<cy1<<" "<<cy2<<' ';
			if(cnt1<zt||cnt2>zt){
			//	cout<<c[cnt1]<<" "<<c[cnt2]<<" ";
		    	if(cy1==0&&cy2==0){
		    	    if(c[cnt1]==c[cnt2]){
		    		    ans+=min(a[cnt1],a[cnt2]);
		    		}
		    		if(a[cnt1]<a[cnt2]){
		    			cy1=max(0ll,a[cnt1]-a[cnt2]);
				        cy2=max(0ll,a[cnt2]-a[cnt1]);
		    			cnt1++;
		    			//cout<<11111111;
		    			//cout<<zt<<' ';
					} 
					else if(a[cnt1]==a[cnt2]){
						cy1=max(0ll,a[cnt1]-a[cnt2]);
				        cy2=max(0ll,a[cnt2]-a[cnt1]);
						cnt1++,cnt2--;
						//cout<<cnt1<<" "<<cnt2;
					} 
					else {
						cy1=max(0ll,a[cnt1]-a[cnt2]);
				        cy2=max(0ll,a[cnt2]-a[cnt1]);
				        cnt2--;
					} 
				    //cout<<a[cnt1]<<" "<<a[cnt2];
				    //cout<<cy1<<" "<<cy2;
			    }
			    else{
				    if(cy1!=0){
					    if(c[cnt1]==c[cnt2]){
					    	//cout<<cy1<<" "<<a[cnt2]<<' ';
					    	ans+=min(cy1,a[cnt2]);
					    //cout<<cnt1<<' '<<cnt2<<" ";	
					    }
					    if(cy1>a[cnt2]){
					    	cy2=max(0ll,a[cnt2]-cy1);
					    	cy1=max(0ll,cy1-a[cnt2]);
					        cnt2--;
						} 
					    else if(cy1==a[cnt2]){
					    	cy1=0;
					        cy2=0;
					        cnt1++,cnt2--;
						} 
					    else {
					    	cy2=max(0ll,a[cnt2]-cy1);
					    	cy1=max(0ll,cy1-a[cnt2]);
					    	cnt1++;
						}
				    }
				    else{
				    	if(c[cnt1]==c[cnt2]){
					    	ans+=min(cy2,a[cnt1]);
					    }
					    if(cy2>a[cnt1]){
					    	cy1=max(0ll,a[cnt1]-cy2);
					    	cy2=max(0ll,cy2-a[cnt1]);
					    	cnt1++;
						} 
					    else if(cy2==a[cnt1]){
					    	cy1=max(0ll,a[cnt1]-cy2);
					    	cy2=max(0ll,cy2-a[cnt1]);
					        cnt1++,cnt2--;
						} 
					    else{
					    	cy1=max(0ll,a[cnt1]-cy2);
					    	cy2=max(0ll,cy2-a[cnt1]);
					        cnt2--;
						}
					}
				}
			}
			else{
				//cout<<cy1<<' '<<cy2;
				ans+=(max(cy1,cy2)-1)/2;
				//cout<<ans<<" ";
				break;
			}
			//cout<<ans<<" ";
		}
		cout<<(sum-2*ans-1)/2;  
	}
	else{
		long long zx=(sum)/2;
		long long cnt=0,zt=0;
		for(int i=1;i<=n;i++){
			zt++;
			cnt+=a[i];
			if(cnt>zx) break;
			else if(cnt==zx){
				ans--;
				break;
			}
		}
		long long cy1=0,cy2=0,cnt1=1,cnt2=n;
		while(1){
			//cout<<cnt1<<" "<<cnt2<<" ";
			//cout<<cy1<<" "<<cy2<<' ';
			if(cnt1<zt||cnt2>zt){
			//	cout<<c[cnt1]<<" "<<c[cnt2]<<" ";
		    	if(cy1==0&&cy2==0){
		    	    if(c[cnt1]==c[cnt2]){
		    		    ans+=min(a[cnt1],a[cnt2]);
		    		}
		    		if(a[cnt1]<a[cnt2]){
		    			cy1=max(0ll,a[cnt1]-a[cnt2]);
				        cy2=max(0ll,a[cnt2]-a[cnt1]);
		    			cnt1++;
		    			//cout<<11111111;
		    			//cout<<zt<<' ';
					} 
					else if(a[cnt1]==a[cnt2]){
						cy1=max(0ll,a[cnt1]-a[cnt2]);
				        cy2=max(0ll,a[cnt2]-a[cnt1]);
						cnt1++,cnt2--;
						//cout<<cnt1<<" "<<cnt2;
					} 
					else {
						cy1=max(0ll,a[cnt1]-a[cnt2]);
				        cy2=max(0ll,a[cnt2]-a[cnt1]);
				        cnt2--;
					} 
				    //cout<<a[cnt1]<<" "<<a[cnt2];
				    //cout<<cy1<<" "<<cy2;
			    }
			    else{
				    if(cy1!=0){
					    if(c[cnt1]==c[cnt2]){
					    	//cout<<cy1<<" "<<a[cnt2]<<' ';
					    	ans+=min(cy1,a[cnt2]);
					    //cout<<cnt1<<' '<<cnt2<<" ";	
					    }
					    if(cy1>a[cnt2]){
					    	cy2=max(0ll,a[cnt2]-cy1);
					    	cy1=max(0ll,cy1-a[cnt2]);
					        cnt2--;
						} 
					    else if(cy1==a[cnt2]){
					    	cy1=0;
					        cy2=0;
					        cnt1++,cnt2--;
						} 
					    else {
					    	cy2=max(0ll,a[cnt2]-cy1);
					    	cy1=max(0ll,cy1-a[cnt2]);
					    	cnt1++;
						}
				    }
				    else{
				    	if(c[cnt1]==c[cnt2]){
					    	ans+=min(cy2,a[cnt1]);
					    }
					    if(cy2>a[cnt1]){
					    	cy1=max(0ll,a[cnt1]-cy2);
					    	cy2=max(0ll,cy2-a[cnt1]);
					    	cnt1++;
						} 
					    else if(cy2==a[cnt1]){
					    	cy1=max(0ll,a[cnt1]-cy2);
					    	cy2=max(0ll,cy2-a[cnt1]);
					        cnt1++,cnt2--;
						} 
					    else{
					    	cy1=max(0ll,a[cnt1]-cy2);
					    	cy2=max(0ll,cy2-a[cnt1]);
					        cnt2--;
						}
					}
				}
			}
			else{
				//cout<<cy1<<' '<<cy2;
				ans+=(max(max(cy1,cy2)-2,0ll))/2;
				//cout<<ans<<" ";
				break;
			}
			//cout<<ans<<" ";
		}
		//cout<<ans;
		cout<<(sum-2*ans-2)/2;
	}
}