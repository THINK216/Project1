#include<bits/stdc++.h>
#include<map>
#define ll long long
using namespace std;
/*bool check(ll a[],ll l,ll r){
	for(ll i=l;i<r;i++){
		if(a[i]>a[i+1]){
			return false;
		}
	}
	return true;
}*/
int main(){
	ll n;cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	ll l,r;
	for( l=0;l<n-1;l++){
		if(a[l]>a[l+1]){
			break;
		}
	}
	for(r=n-1;r>0;r--){
		if(a[r]<a[r-1]){
		
			break;
		}
	}
	//cout<<l<<" "<<r<<endl;
	
	if(l==r){
		cout<<"29tech";
		return 0;
	}
	else if(l==0&& r==(n-1)){
		cout<<"28tech";
		return 0;
	}
		else if(r==0&&l==n-1){
		cout<<"28tech";
		return 0;
	}
	
	ll res=-1;
	if(l==r-1){
		if(a[l]<a[r]){
			res=1;
		}
	}
	for(ll i=l+1;i<=r;i++){
		
		if(a[i]<a[i-1]){
			res=1;
		}
		else{
			res=-1;
			
		break;
		}	
	}
	if(res==-1){
		cout<<"29tech";
		return 0;
	}
	else if(a[l]<=a[r+1]&&a[r]>=a[l-1]){
		cout<<"28tech";
	}
	else{
		cout<<"29tech";
	}
	
	
}