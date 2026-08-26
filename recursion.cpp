//code for print n to 1 number
// #include<iostream>
// using namespace std;
// void printn(int n){
//     if(n==1){
//         cout<<1;
//         return;
//     }
//     cout<<n<<" ";
//     printn(n-1);
// }
// int main(){
//     int n=5;
//     printn(n);return 0;
// }

//code for print the factorial 
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int n=4;
//     cout<<fact(n);
// return 0;
// }

//code for print the sum of n to 1
// #include<iostream>
// using namespace std;
// int summ(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+summ(n-1);
// }
// int main(){
//     int n=5;
//     cout<<summ(n)<<"\n";
// return 0;
// }

//code for print 1 to n
// #include<iostream>
// using namespace std;
// void printn(int n){
//     if(n==5){
//         cout<<n<<"\n";
//         return ;
//     }
//     cout<<n<<" ";
//     printn(n+1);

// }
// int main(){
//     int n=1;
//     printn(n);
// return 0;
// }

//code for print n to 1 bu using return
// #include<iostream>
// using namespace std;
// void display(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     display(n-1);

// }
// int main(){
//     int n=5;
//     display(n);
// return 0;
// }

//code for print the power
// #include<iostream>
// using namespace std;
// int power(int n){
//     if(n==1){
//         return 2;
//     }
//     return 2*power(n-1);
// }
// int main(){
//     int n=5;
//     cout<<power(n);
// return 0;
// }

//code for count the digit of a number
// #include<iostream>
// using namespace std;
// int countdigit(int num){
//     if(num==0){
//         return 0 ;
//     }
//     return 1+countdigit(num/10);
// }
// int main(){
//     int num=1234786;
//     int count =0;
//     cout<<countdigit(num)<<"\n";
// return 0;
// }

//code for sum the digits of a number
// #include<iostream>
// using namespace std;
// int sumdigit(int num){
//     if(num==0){
//         return 0;
//     }
//     int rem =num%10;
//     return rem+sumdigit(num/10);
// }
// int main(){
//     int num=15345;
//     cout<<sumdigit(num)<<"\n";
// return 0;
// }

//code for product the digit of a number
// #include<iostream>
// using namespace std;
// int productdigit(int num){
//     if(num==0){
//         return 1;
//     }
//     int rem =num%10;
//     return rem*productdigit(num/10);
// }
// int main(){
//     int num=15345;
//     cout<<productdigit(num)<<"\n";
// return 0;
// }

//code to find the array is sorted or not
// #include<iostream>
// using namespace std;
// int issorted(int arr[],int n){
//     if(n==0||n==1){
//         return true;
//     }
//     return arr[n-1]>=arr[n-2] && issorted(arr,n-1);
// }
// int main(){
//     int arr[]={1};
//     int n=5;
//     cout<<issorted(arr,n);
// return 0;
// }

// fibonnaci code in recursion
// #include<iostream>
// using namespace std;
// int fibonnaci(int n){
//     if(n==0||n==1){
//         return n;
//     }
//     return fibonnaci(n-1)+fibonnaci(n-2);
// }
// int main(){
//     int n=4;
//     cout<<fibonnaci(n);
// return 0;
// } 

//code for check the palindrome no.
// #include<iostream>
// using namespace std;
// int  palindrome(int num,int rev){
//     if(num==0){
//         return rev;
//     }
//     int digit=num%10;
//     rev=rev*10+digit;
//     return palindrome(num/10,rev);

// }
// int main(){
//     int num=1241;
//     int orgnum=1241; 
//     int rev=palindrome(num,0);
//     if(rev==orgnum){
//         cout<<"number is palindrome";
//     }else{
//         cout<<"not palindrome";
//     }
// return 0;
// }

//code for max element in array using rcursion
// #include<iostream>
// using namespace std;
// int maxelement(int arr[],int st,int end,int maxelmt){
//     if(st<=end){
//     maxelmt=max(maxelmt,arr[st]);
//     return maxelement(arr,st+1,end,maxelmt);
//     }
//     return maxelmt;
// }
// int main(){
//     int arr[]={1,3,54,6,8,4};
//     int st=0; 
//     int n=5;  
//     cout<<maxelement(arr,st,n,INT8_MIN);

// return 0;
// }

//code for gcd by recursion
// #include<iostream>
// using namespace std;
// int gcd(int a,int b,int lastcheck,int st,int gcdd){
//     if(a==b) return a;
//     if(b==0) return a;
//     if(a==0) return b;
//     if(st<=lastcheck){
//         if(a%st==0&&b%st==0){
//             gcdd=max(gcdd,st);
//         }
//         return gcd(a,b,lastcheck,st+1,gcdd);
//     }
//     return gcdd;
// }
// int main(){
//     int num1=12;
//     int num2=16;  
//     cout<<gcd(num1,num2,min(num1,num2),1,-1);
// return 0;
// }

//code for count the occurance
// #include<iostream>
// using namespace std;
// int count(int arr[],int target,int st,int end,int occurance){
//     if(st<=end){
//         if(target==arr[st]){
//             occurance=occurance +1;
//         }
//         return count(arr,target,st+1,end,occurance);
//     }
//     return occurance;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,2,2,2,2,2};
//     int target=2;
//     cout<<count(arr,target,0,10,0);
// return 0;
// }

//code for check array is sorted or not
// #include<iostream>
// using namespace std;
// bool check(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     return arr[n-1]>=arr[n-2]&&check(arr,n-1);
// }
// int main(){
//     int arr[]={1,2,3,7,5,6};
//     int n=6;
//     cout<<check(arr,n);
// }

//code for binary search in recursion
//#include<iostream>
//using namespace std;
// bool binarysearch(int arr[],int target ,int st,int end){
//     if(st<=end){
//         int mid=(st+end)/2;
//         if(arr[mid]>target){
//             return binarysearch(arr,target,st,mid-1);
//         }
//         else if(arr[mid]<target){
//             return binarysearch(arr,target,mid+1,end);
//         }
//         else {
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int target=2;
//     cout<<binarysearch(arr,target,0,4);
// return 0;
// }

//function for print all subsets
/*void printsubset(int arr[], int i, int &ans[]){
if(i==arrr.size()){
for(int val: ans){
cout<<val<<" ";
}cout<<endl;
return ;
}
ans.push_back(arr[i]);
printsubset(arr,i+1,ans[]);
ans.pop_back();
printsubset(arr,i+1,ans[]);}
*/
