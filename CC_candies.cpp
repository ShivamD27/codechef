#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[2*n];
	    int flag=0;
	    map <int,int> mp;
	    for(int i=0;i<2*n;i++){
	        cin>>a[i];
	        mp[a[i]]++;
	    }
	    for(auto it:mp){
	        if(it.second > 2){
	            flag=1;
	        }
	    }
	    if(flag){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
