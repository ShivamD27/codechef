#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        char ans[n];
        int maxm=ceil(n/2.0);
        if(x>maxm){
            cout<<-1<<endl;
        }
        else{
            for (int i = 0; i < x; i++)
            {
                ans[i] = ('a'+i);
                cout<<ans[i];
            }
            for(int i=x;i<maxm;i++){
                ans[i] = 'a';
                cout<<ans[i];

            }
            for(int i=maxm;i<n;i++){
                ans[i]=ans[n-1-i];
                cout<<ans[i];
            }
            

        }
        cout<<endl;
    }
    return 0;



}