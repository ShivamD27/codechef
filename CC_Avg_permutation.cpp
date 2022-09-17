// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//   cin>>t;
//   while(t--)
//   {
//       int n;
//       cin>>n;
//       int fh = n/2;
//       int copy = n;
      
//       if(n%2)
//       {
//           copy = n;
//           fh = n/2;
//           for(int i = 0; i <= fh; ++i)
//           {
//               cout<<copy<<" ";
//               copy -= 2;
//           }
//           copy = 2;
//           for(int i = 0; i < fh; ++i)
//           {
//               cout<<copy<<" ";
//               copy += 2;
//           }
//       }
//       else
//       {
//           for(int i = 0; i < fh; ++i)
//           {
//               cout<<copy<<" ";
//               copy -= 2;
//           }
          
//           copy = 1;
//           for(int i = 0; i < fh; ++i)
//           {
//               cout<<copy<<" ";
//               copy += 2;
//           }
//           cout<<endl;
//       }
//   }
//   return 0;
// }








// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         cout<<n<<" "<<n-2<<" ";
//         for(int i=1;i<=n-3;i++){
//             cout<<i<<" ";             
//         }
//         cout<<n-1<<" ";
//         cout<<endl;
//     }

// }




vl printDivisors(ll n)
{
    ll i;
    vl ans;
    for (i = 1; i * i < n; i++) {
        if (n % i == 0){
            ans.pb(i);
        }
            //cout<<i<<" ";
    }
    if (i - (n / i) == 1) {
        i--;
    }
    for (; i >= 1; i--) {
        if (n % i == 0)
            ans.pb(n/i);
    }
    return ans;
}