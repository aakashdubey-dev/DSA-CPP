//code to print n pattern at n number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// return 0;
// }

//code to same print above code but with star
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// return 0;
// }

//same code but print the pattern 
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         char ch='A';
//         for(int j=1;j<=n;j++){
//              cout<<ch;
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
// return 0;
// }

//same code but in increasing order like 123 456
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     int num=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//              cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     cout<<"after ending the loop the num is:"<<num;
// return 0;
// }

//same above code but with character and in increasing order
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     char ch='A';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<ch;
//             ch=ch+1;
//         }
//        cout<< endl;
//     }
//     cout<<"after ending the loop ch is:"<<ch;
// return 0;
// }

//code to print the pattern in increasing order like * ** ***
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//        for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<"*";
//         }
//        cout<< endl;
//     }
// return 0;
// }

//same above code but with intergers
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//        for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<i+1;
//         }
//        cout<<endl;
//     }
// return 0;
// }

//same above code but with intergers like 1 12 123
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//        for(int i=1;i<=n;i++){
//         for(int j=1;j<i+1;j++){
//             cout<<j;
//         }
//        cout<<endl;
//     }
// return 0;
// }

//same above code but in reverse order like 1 21 321
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//        for(int i=1;i<=n;i++){
//         for(int j=i;j>0;j--){
//             cout<<j;
//         }
//        cout<<endl;
//     }
// return 0;
// }

//code for floyyd triangle like 1 23 345
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     int num=1;
//        for(int i=1;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<num<<" ";
//             num=num+1;
//         }
//        cout<<endl;
//     }
// return 0;
// }

//inverted triangle patter
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter n:";
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<i;j++){
//         cout<<" ";
//     }
//         for(int k=0;k<n-i;k++){
//             cout<<i;
//         }
//     cout<<endl;
// }

// return 0;
// }

//pyramid triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i+1;k++){
//             cout<<k;
//         }
//         for(int l=i;l>0;l--){
//             cout<<l;
//         }
//         cout<<endl;
//     }
// return 0;
// }

//hollow diamond problem
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     //top
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1-i;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//         if(i!=0){
//         for(int j=0;j<2*i-1;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//     }
//      cout<<endl;
// }
// //bottom
//      for(int i=0;i<n-1;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//      if(n-2!=i){
//         for(int j=0;j<2*(n-i)-5;j++){
//             cout<<" ";
//         }
//         cout<<"*";
//      }
//      cout<<endl;
//     }
// return 0;
// }

//self practice 


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     int num=1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//            cout<<num<<" ";
//            num=num+1;
//         }
//         cout<<endl;
//     }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     char ch='A';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int k=n-i;k>0;k--){
//             cout<<k;
//         }
//         cout<<endl;
//     }
// return 0;
// }

//code for decimal to binary
// #include<iostream>
// using namespace std;
// int main(){
//     int num=5;
//     int result=0;
//     int power=1;
//     while(num>0){
//         int rem=num%2;
//         num=num/2;
//         result=result+(rem*power);
//         power=power*10;
//     }
//     cout<<result;
// return 0;
// }

//code for decimal to binary
// #include<iostream>
// using namespace std;
// int main(){
//     int num=101010;
//     int result=0;
//     int power=1;
//     while(num>0){
//         int last=num%10;
//         result=result+(last*power);
//         num=num/10;
//         power=power*2;
//     }
//     cout<<"the binary form is:"<<"("<<result<<")";
// }

//code for bitwise operator
//and bitwise
// #include<iostream>
// using namespace std;
// int main(){
//     int a=4;
//     int b=8;
//     cout<<(a&b)<<endl;
// return 0;
// }

//or bitwise
// #include<iostream>
// using namespace std;
// int main(){
//     int a=4;
//     int b=8;
//     cout<<(a|b)<<endl;
// return 0;
// }

//xor operator
// #include<iostream>
// using namespace std;
// int main(){
//     int a=4;
//     int b=8;
//     cout<<(a^b)<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=6;
//     int b=10;
//     cout<<(a^b)<<endl;
// return 0;
// }

//wap to check the number is power of 2 or not by using bitwise operator
//left shift operator
// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     cout<<(n<<2)<<endl;
// return 0;
// }

//right shift operator
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     cout<<(n>>1)<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//       short int x;
//     cout<<sizeof( x)<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     while(n<=0){
//         cout<<"not power of 2";
//         return 0;
//     }
//     while(n>1){
//         if(n%2!=0){
//             cout<<"not the power of 2";
//             return 0;
//     }
//     n=n>>1;
// }
// cout<<"power of 2";
// return 0;
// }

//wap to reverse an number
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter num:";
//     cin>>num;
//     int rev=0;
//     while(num>0){
//         int rem=num%10;
//         rev=rev*10+rem;
//         num=num/10;
//     }
//     cout<<rev;
// return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[4]={1,2,3,4};
//     int n=4;
//     int start=0;
//     int end=3;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }