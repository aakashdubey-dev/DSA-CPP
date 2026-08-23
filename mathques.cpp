//code for prime number
// #include<iostream>
// using namespace std;
// int main(){
    // int n;  bool flag=true;
    // cout<<"Enter the n:";
    // cin>>n;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             flag=false;
//             break;
//         }
//     }
//     if(flag==false){
//         cout<<"the number is not prime ";
//     }
//     else cout<<"prime no.";
//     return 0;
// }
   
//code to print the total primenumber btw 2 to n(brute force approach)
// #include<iostream>
// using namespace std;
// int prime(int n){
//     int count=0;
//     for(int i=2;i<n;i++){
//          bool flag=true;
//         for(int j=2;j*j<=i;j++){
//             if(i%j==0){
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag){count++;}
//     }
//     return count;
// }
// int main(){
//     int n;  bool flag=true;
//     cout<<"Enter the n:";
//     cin>>n;
//     cout<<prime(n);
//     return 0;
// }

//code fro count the digit 
// #include<iostream>
// using namespace std;
// int main(){
//     int num;  int count=0;
//     cout<<"Enter the number:";
//     cin>>num;
//     while(num>0){
        
//         num=num/10;
//         count++;
//     }
//     cout<<count;
// return 0;
// }

//code to count the sum of all digit
/*
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;  int count=0;
    cout<<"Enter the number:";
    cin>>num;
    while(num>0){
        int reminder=num%10;
        count+=reminder;
        num=num/10;
    }
    cout<<count;
//also 
cout<<(int)(log10(num)+1);
return 0;
}*/

//code for armstrong
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int num; int sum=0;
//     cout<<"Enter the number";
//     cin>>num;
//      int org=num;
//     while(num>0){
//         int rem=num%10;
//         int cube=rem*rem*rem;
//         sum+=cube;
//         num =num/10;
//     }
//     if(sum==org) {cout<<"the number is armstrong";}
//     else cout<<"not an armstrong number";
// return 0;
// }

//code for gcd(brute force approach)
// #include<iostream>
// using namespace std;
// int gcd(int a, int b){
//     int gcd=1;
//     if(a==0) return b;
//     if(b==0) return a;
//     if(a==b) return a;
//     for(int i=1; i<=min(a,b);i++){
//         if(a%i==0&& b%i==0){
//             gcd=i;
//         }
//     }
//     return gcd;
// }
// int main(){
//     int num1=20; int num2=28;
//     cout<<gcd(num1,num2);
// return 0;
// }

//gcd by optimized approach
// #include<iostream>
// using namespace std;
// int gcd(int a, int b){
//     while(a>0&&b>0){
//         if(a>b){
//             a=a%b;
//         }else{
//             b=b%a;
//         }
//     }
//     if(a==0) return b;
//     else return a;
// }
// int main(){
//     int num1=0; int num2=28;
//     cout<<gcd(num1,num2);
// return 0;
// }

//code for lcm
// #include<iostream>
// using namespace std;
// int gcd(int a, int b){
//     while(a>0&&b>0){
//         if(a>b){
//             a=a%b;
//         }else{
//             b=b%a;
//         }
//     }
//     if(a==0) return b;
//     else return a;
// }
// int main(){
//     int num1=20; int num2=28;
//     int a=gcd(num1,num2);
//     int lcm=(num1*num2)/a;
//     cout<<lcm;
// return 0;
// }

//code for reverse a number
// #include<iostream>
// using namespace std;
// int reverse(int num){
//     int rev=0; 
//     while(num>0){
    //     int rem=num%10;
    //     rev=rev*10+rem;
    //     num=num/10;
    // }
//     return rev;
// }
// int main(){
//     int num1 =1234;
//     cout<<reverse(num1);
// return 0;
// }

//code for check number is palindrome
// #include<iostream>
// using namespace std;
// string palindrome(int num,int org){
//     int rev=0;
    
//     while(num>0){
//         int rem=num%10;
//         rev=rev*10+rem;
//         num=num/10;
//     }
//     if(rev==org) {return "palindrome number";}
//     else {return "not palindrome";}
// }
// int main(){
//     int num=14323;
//     int org=num;
//     cout<<palindrome(num,org);
// return 0;
// }

//exponentiation
// #include<iostream>
// using namespace std;
// double power(double x, int n){
//     double ans=1;
//     if(n<0){
//         x=1/x;
//         n=-n;    
//     }
//     while(n>0){
//         if(n%2==1){
//             ans*=x;
//         }
//         x*=x;
//         n=n/2;
//     }
//     return ans;
// }
// int main(){
//     double x=-2.0;
//     int n=5;
//     cout<<"the answer is:"<<power(x,n);
// return 0;
// }