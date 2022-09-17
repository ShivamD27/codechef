#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector <ll> a(n),b(n);
	    for(int i=0;i<n;i++)cin>>a[i];
	    for(int i=0;i<n;i++)cin>>b[i];	    
	    map <ll,ll> mp;
	    for(int i=0;i<n;i++){
	        mp[a[i]^b[i]]++;
	    }
	    ll ans=0;
	    for(auto i:mp){
	        ans+=(i.second*(i.second - 1))/2;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
