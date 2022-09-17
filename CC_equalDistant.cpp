#include <bits/stdc++.h>
using namespace std;

// void solve()
// {
//     int n;
//     cin>>n;
    
//     vector<set<int>>a(n);
    
//     for(int i = 0; i < n; ++i)
//     {
//         int que;
//         cin>>que;
//         for(int j = 0; j < que; ++j)
//         {
//             int t;
//             cin>>t;
//             a[i].insert(t);
//         }
//     }
   
//     for(int i = 0; i < n; ++i)
//     {
//         for(int j = i+1; j < n; ++j)
//         {
//             bool flag = true;
//             for(int k = 1; k <= 5; ++k)
//             {
//                 flag &= a[i].count(k) || a[j].count(k);
//             }
//             if(flag)
//             {
//                 cout<<"YES"<<endl; 
//                 return;
//             }
//         }
//     }   
//     cout<<"NO"<<endl;
// }

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    // solve();
            int n;
    cin>>n;
    
    vector<set<int> >a(n);
    
    for(int i = 0; i < n; ++i)
    {
        int que;
        cin>>que;
        for(int j = 0; j < que; ++j)
        {
            int t;
            cin>>t;
            a[i].insert(t);
        }
    }
   
    for(int i = 0; i < n; ++i)
    {
        for(int j = i+1; j < n; ++j)
        {
            bool flag = true;
            for(int k = 1; k <= 5; ++k)
            {
                flag &= a[i].count(k) || a[j].count(k);
            }
            if(flag)
            {
                cout<<"YES"<<endl; 
                // return;
                break;
            }
        }
    }   
    cout<<"NO"<<endl;
    // break;
    
	}
	return 0;
}