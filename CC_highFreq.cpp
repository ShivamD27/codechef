#include<bits/stdc++.h>
using namespace std;
#define tt 					int T;cin>>T;while(T--)
#define ll					long long
#define pb 					push_back
#define rep(i,a,b)      	for(int i=a;i<b;i++)
//#define maxx 				1000000007


void func(){
	
	int n;cin>>n;
	int max1=0,max2=0;
	map<int,int> mp;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		mp[arr[i]]++;
	}
	map<int,int> :: iterator it;
	for(it=mp.begin();it!=mp.end();it++){
		if(it->second > max1){
			max2=max1;
			max1=it->second;
		}
		else if(it->second > max2){
			max2=it->second;
		}
	}
	cout<<max(max2,((max1+1)/2))<<"\n";
}


int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	tt
	func();


    return 0;
}








// method 2 :  instead of using maps can simply use vector to take single input at a time and store it in vector accordingly



