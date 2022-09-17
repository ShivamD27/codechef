#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    int a[n];
	    map <int,int> mp;
	    vector <int> v;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        mp[a[i]]++;
	    }
	    for(auto i : mp){
	        v.push_back(i.second);
	    }
	    sort(v.begin(),v.end(), greater<int>());
	    int res=v[0];
	   // cout<<v[0]<<endl;
	    int ans=n/2;
	   // cout<<ceil(ans)<<endl;
	   
	   if(n<=3 && v.size()>1){
	       cout<<"YES"<<endl;
	   }
	   else{
	    
	    if(res <= ceil(ans)){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	   }
	    
	}
	
	return 0;
}
