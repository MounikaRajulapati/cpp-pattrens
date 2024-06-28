// * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *

// #include<iostream>
// using namespace std;
// void function(int n){
//     for(int i = 0; i<n; i++){
//         for(int i=0; i<n; i++){
//             cout<< " *";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n = 5;
//     function(n);
//     return 0;
// }


// ------------------problem 2:----------------
// 0 1 2 3 4 5 
// 0 1 2 3 4 5
// 0 1 2 3 4 5
// 0 1 2 3 4 5
// 0 1 2 3 4 5
// 0 1 2 3 4 5

// #include<iostream>
// using namespace std;
// void function(int n){

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//         cout<< j <<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n = 6;
//     function(n);
//     return 0;
// }

//----------------------------problem 3: ------------
// 0 0 0 0 0 0 
// 1 1 1 1 1 1
// 2 2 2 2 2 2
// 3 3 3 3 3 3
// 4 4 4 4 4 4
// 5 5 5 5 5 5

// #include<iostream>
// using namespace std;
// void function(int n){

//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//         cout<< i <<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n = 6;
//     function(n);
//     return 0;
// }


// --------------problem 4:---------------
//  *
//  * *
//  * * *
//  * * * *
//  * * * * *

// #include<iostream>
// using namespace std;
// void function(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n = 6;
// function(n);
// }

//  -------pattern 5:------
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// #include<iostream>
// using namespace std;
// void function(int n){
//     for(int i=1; i<n; i++){
//         for(int j=1; j<i; j++){
//             cout<<j<<" ";

//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n = 7;
//     function(n);
// }

//--------------------problem 6:-----------

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6

// #include<iostream>
// using namespace std;
// void function(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<i<<" ";

//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n = 7;
//     function(n);
// }

//------------problem 7:----------
//  * * * * * * *
//  * * * * * *
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *
//  * 
// #include<iostream>
// using namespace std;
// void function(int n){
//     for(int i =0; i<n; i++){
//         for(int j=n; j>i; j--){
//             cout<<" *";

//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n = 7;
//     function(n);
//     return 0;
// }

// ------problem 8:-------
// 5 4 3 2 1 
// 5 4 3 2
// 5 4 3
// 5 4
// 5
// #include<iostream>
// using namespace std;
// void function(int n){
//     for(int i=0; i<n; i++){
// for(int j=n; j>i; j--){
//     cout <<j<<" ";
// }
// cout<< endl;
//     }
// }
// int main(){
// int n = 5;
// function(n);
// }

//----------------problem 9:-----------
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// #include<iostream>
// using namespace std;
// void function(int n){
//     for(int i=0; i<n;i++){
//         for(int j=n; j>i; j--){
//             cout<< n-j+1<<" ";

//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n = 5;
//     function(n);
//     return 0;

// }

//-------------------problem 10:-----------------
// 1 1 1 1 
// 2 2 2
// 3 3
// 4
// #include<iostream>
// using namespace std;
// void function(int n){
//     for(int i=0; i<n; i++){
//         for(int j=n; j>i; j--){
//             cout<<i<<" ";
// }
// cout<<endl;
//     }
// }
// int main(){
//     int n =6;
//     function(n);
//     return 0;
// }

//----------------problem 11:--------------
//      *     
//     ***
//    *****
//   *******
//  *********
// ***********

// #include<iostream>
// using namespace std;
// void function(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*i+1; j++){
//             cout <<"*";
//         }
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     }
    
// int main(){
//     int n =6;
//     function(n);
//     return 0;
// }
//------------another approach-----
// #include<iostream>
// using namespace std;
// int main(){
//   int n=5;
//   for(int i=0; i<n; i++){
//     for(int j=0; j<n-i-1; j++){
//       cout<<" ";
//     }
//     for(int j=0; j<2*i+1; j++){
//       cout<<"*";
//     }
    
//     cout<<endl;
//   }
// }


//---------------problem 12:-----------
// *********
//  *******
//   *****
//    ***
//     *

// #include<iostream>
// using namespace std;
// void function(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout <<" ";
//         }
//         for(int j=0; j<2*n-(2*i+1); j++){
//             cout<<"*";
//         }
//         for(int j=0; j<i; j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n = 5;
//    function(n);
//    return 0;

//    } 

//---------problem 13:------------
//     ***********    
//    ***********   
//   ***********  
//  *********** 
// ***********
// #include<iostream>
// using namespace std;
// void function(int n){
//     for(int i = 0; i<n; i++){
// for(int j=0; j<n-i-1; j++){
//     cout<<" ";
// }
// for(int j=0; j<2*n+1; j++){
//     cout<<"*";
// }
//   cout<<endl;  
// }
// }
// int main(){
//     int n = 5;
//     function(n);
//     return 0;
// }

//----------------problem 14--------------
//      *     
//     ***
//    *****
//   *******
//  *********
// ***********
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
// #include<iostream>
// using namespace std;
// void function(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*i+1; j++){
//             cout <<"*";
//         }
//         cout<<endl;
//     }
//         for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout <<" ";
//         }
//         for(int j=0; j<2*n-(2*i+1); j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     }
    
// int main(){
//     int n =6;
//     function(n);
//     return 0;
// }

//-------------------problem 14-----------
//      *     
//     ***
//    *****
//   *******
//  *********
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
     

// #include<iostream>
// using namespace std;
// void function(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<2*i+1; j++){
//             cout <<"*";
//         }
//         cout<<endl;
//     }
//        for (int i = n - 2; i >= 0; i--) {
//            for (int j = 0; j < n - i - 1; j
//                ++) {
//                cout << " ";
//            }
//            for (int j = 0; j < 2 * i + 1; j++) {
//                cout << "*";
//            }
//            cout << endl;
//        }
//     }

// int main(){
//     int n =6;
//     function(n);
//     return 0;
// }
// =====another approach====
// #include<iostream>
// using namespace std;
// int main(){
//   int n=5;
//   for(int i=0; i<n; i++){
//     for(int j=0; j<n-i-1; j++){
//       cout<<" ";
//     }
//     for(int j=0; j<2*i+1; j++){
//       cout<<"*";
//     }
    
//     cout<<endl;
//   }

//   for(int i=n-2; i>=0; i--){
//     for(int j=0; j<n-i-1; j++){
//       cout<<" ";
//     }
//     for(int j=0; j<2*i+1; j++){
//       cout<<"*";
//     }
    
// cout<<endl;
//   }
// }

//------------problem 15------------
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
// #include<iostream>
// using namespace std;
// int main(){
//   int n = 5;
//   for(int i=0; i<n; i++){
//     for(int j=0; j<i; j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
//   for(int i=0; i<n; i++){
//     for(int j=n; j>i; j--){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
// }
// ----------------problem 16:-----------
// 1
// 01
// 101
// 0101
// 10101

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; 

//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             if ((i + j) % 2 == 0) {
//                 cout << "1";
//             } else {
//                 cout << "0";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

//---------------problem 17:--------------
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i =1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }    
    for(int i = n-1; i>=1; i--){ // Corrected loop for the second pattern
        for(int j=0; j<2*(n-i)+1; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}