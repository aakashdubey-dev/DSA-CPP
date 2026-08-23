//revision
//code for reverse an array
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int reverse(int arr[],int n){
//     int start=0;
//     int end=n-1;
//     int ans;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int n=6;
//     reverse(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }

//code for single number by using bitwise operator
// #include<iostream>
// #include<vector>
// using namespace std;
// int singlenum(vector<int> arr,int n){
//     int ans=0;
//     for(int value:arr){
//         ans=ans^value;
//     }
//     return ans;
// }
// int main(){
//     vector<int> arr={1,1,2,3,3,4,4,2,5};
//     int n= arr.size()-1;
//     cout<<singlenum(arr,n)<<" ";
// return 0;
// }

//code for maximum subarray sum(brutefor)
// #include<iostream>
// #include<vector>
// using namespace std;
// int maxsubarray(vector<int> num,int n){
//  int maxsum =INT8_MIN;
//     for(int i=0;i<n;i++){
//          int cursum =0;
//         for(int j=i;j<n;j++){
//             cursum=cursum+num[j];
//             maxsum=max(cursum,maxsum);
//         }
//     }
//     return maxsum;
// }
// int main(){
    // vector<int> num={1,2,3,4,5};
    // int n= num.size();
    //     cout<<maxsubarray(num,n)<<endl;
// return 0;
// }

//max subarray sum by kadane algorithm
// #include<iostream>
// #include<vector>
// using namespace std;
// int maxsubarray(vector<int> num,int n){
//     int cursum=0; int maxsum= INT8_MIN;
//     for(int i=0;i<n;i++){
//         cursum=cursum+num[i];
//         maxsum=max(cursum,maxsum);
//         if(cursum<0){
//             cursum=0;
//         }
//     }
//     return maxsum;
// }
// int main(){
//         vector<int> num={1,-2,-3,4,5};
//         int n= num.size();
//         cout<<maxsubarray(num,n)<<endl;
// return 0;
// }

//code for pairsum(brute force)
// #include<iostream>
// #include<vector>
// using namespace std;
// void pairsum(vector<int> num,int target,int n){
//     for(int i=0;i<n;i++){
//          int sum=0;
//         for(int j=i+1;j<n;j++){
//             sum=num[i]+num[j];
//             if(target==sum){
//                 cout<<i<<","<<j;
//                 return;
//             }
//     }
// }
// }
// int main(){
//     vector<int> num={1,2,3,4,5,6};
//     int target=9;
//     int n=6;
//     pairsum(num,target,n);
// return 0;
// }

//code for pairsum(optimized method)
// #include<iostream>
// #include<vector>
// using namespace std;
// void pairsum(vector<int> num,int target ,int n){
//     int start=0;
//     int end =n-1;
//     int  count =0;
//     while(start<end){
//         count=num[start]+num[end];
//         if(target>count){
//             start++;
//         }
//         else if(target<count){
//             end--;
//         }
//         else if(target==count){
//         cout<<start<<","<<end;
//         return ;
//         }
//     }
// }
// int main(){
    // vector <int> num={1,2,3,4,5};
    // int target=7;
    // int n=5;
//     pairsum(num,target,n);
// return 0;
// }

//code for majority element(brute force)
// #include<iostream>
// #include<vector>
// using namespace std;
// int mj(vector<int> num,int n){
//     int maxcount=INT8_MIN;
//     for(int i=0;i<n;i++){
//          int count=0;
//         for(int j=i;j<n;j++){
//             if(num[i]==num[j]){
//                 count++;
//             }
//         }
//             if(count>n/2){
//                 cout<<"the count is:"<<count<<"\nthe no. is:"<<num[i];
//                 break;
//             }
//         }
//     }
// int main(){
//     vector <int> num={3,2,4,1,4,4,1,4,4,4};
//     int n=10;
//     mj(num,n);
// return 0;
// }

//by moore's voting algorithm
// #include<iostream>
// #include<vector>
// using namespace std;
// int mj(vector<int> vec,int n){
//     int count=0;
//     int ans =0;
//     for(int val: vec){
//         if(count==0){
//             ans=val;
//         }
//         if(ans==val){
//             count++;
//         }
//         else if(ans!=val){
//             count--;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector <int> vec={3,2,4,1,4,4,1,4,4,4};
//     int n=10;
//     cout<<mj(vec,n);
   
// return 0;
// }

//compute x^n(brute froce approach)
// #include<iostream>
// #include<vector>
// using namespace std;
// int power(int a, int n){
//     int ans=1;
//     for(int i=1;i<n+1;i++){
//         ans*=a;
//     }
//     return ans;
// }
// int main(){
//     int a=20;
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<power(a,n)<<endl;
// return 0;
// }

//optimized approach binary exponention
// #include<iostream>
// #include<vector>
// int bex(int a, int n){
//     int ans=1;
//     if(n<0){
//         a=1/a;
//         n=-n;
//     }
//     while(n>0){
//         if(n%2==1){
//             ans*=a;
//         }
//         a*=a;
//         n=n/2;
//     }
//     return ans;
// }
// using namespace std;
// int main(){
//     int a=2;
//     int n=5;
//     cout<<bex(a,n);
// return 0;
// }

//code for best buy and sell(brute force approach)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={7,1,5,3,6,4};
//     int n=6;
//     int bestbuy=0; int maxprofit=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             bestbuy=arr[j]-arr[i];
//             maxprofit=max(bestbuy,maxprofit);
//         }
//     }
//     cout<<maxprofit<<endl;
// return 0;
// }

//optimized approach
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={7,1,5,3,6,4};
//     int n=6; int bestbuy=arr[0]; int maxprofit=0;
//     for(int i=1;i<n;i++){
//         if(bestbuy<arr[i]){

//             maxprofit=max(maxprofit,arr[i]-bestbuy);
//         }
//         bestbuy=min(bestbuy,arr[i]);
//     }
//     cout<<maxprofit;
// return 0;
// }

//code for container with most water (brute force approach)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,3,2,5,4};
//     int h=0; int w=0;  int maxwater=0;
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             h=min(arr[i],arr[j]);
//             w=j-i;
//             int area=h*w;
//             maxwater=max(maxwater,area);
//         }
//     }
//     cout<<maxwater<<endl;
// return 0;
// }

//optimized approach 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,3,2,5,4};
//     int n=5; int start =0; int end =n-1; int maxwter =0;
//     while(start<end){
//         int hgt=min(arr[start],arr[end]);
//         int w=end-start;
//         int area=hgt*w;
//         maxwter=max(maxwter,area);
//         if(arr[start]>arr[end]){end--;}
//         if (arr[start]<arr[end]){start++;}
//     }
//     cout<<maxwter<<endl;

// return 0;
// }

//code for product of array except self(brute force approach)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4};
//     int n=4;
//     int ans[5];
//     for(int i=0;i<n;i++){
//         int product=1;
//         for(int j=0;j<n;j++){
//             if(i!=j){
//             product*=arr[j];
//             }
//         }
//         ans[i]=product;
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }


//optimized
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4};
//     int n=4;
//     int suffix[5]; int prefix[5]; int ans[5];
//     prefix[0]=1;
//     for(int i=1;i<n;i++){
//         prefix[i]=prefix[i-1]*arr[i-1];
//     }
//     suffix[n-1]=1;
//     for(int i=n-2;i>=0;i--){
//         suffix[i]=suffix[i+1]*arr[i+1];
//     }
//     for(int i=0;i<n;i++){
//         ans[i]=prefix[i]*suffix[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<ans[i]<<" ";
//     }
// return 0;
// }

//code for reverese the string
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s="spiderman";
//     // int st=0; int end=s.length()-1;
//     // while(st<end){
//     //     swap(s[st++],s[end--]);  
//     // }
// reverse(s.begin(),s.end());
// cout<<s<<endl;
// return 0;
// }

//code for validpalindrome
// #include<iostream>
// #include<string>
// using namespace std;
//  bool isvalid(char ch){
//         if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){return true;}
//         else return false;
//     }
// int main(){
//     bool flag=true;
//     string s="2a@3!3#gshdsj2";
//     int st=0; int end=s.length()-1;
//     while(st<end){
//         if(!isvalid(s[st])){st++; continue;}
//         if(!isvalid(s[end])){end--; continue;}

//         if(tolower(s[st])!=tolower(s[end])){
//             flag=false;
//             break;
//         }


//         st++;
//         end--;
//     }
//     if(flag==false){cout<<"not palindrome";}
//     else {cout<<"palindrome";}
// }

//code for remove all the occurance
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s="abcabdabbaab";
//     string part="ab";
//     while(0<s.length()&& s.find(part)<s.length()){
//         s.erase(s.find(part),part.length());
//     }
//     cout<<s<<" ";
// }

//code for permutation in string 
// #include<iostream>
// #include<string>
// using namespace std;
// bool isfreqmatch(int freq[],int windowfreq[]){
//     for(int i=0;i<26;i++){
//         if(freq[i]!=windowfreq[i])return false;
//     }
//     return true;
// }
// bool perstr(string str,string part){
//     int freq[]={0};
//     for(int i=0;i<part.length();i++){
//         freq[part[i]-'a']++;
//     }
//     for(int i=0;i<str.length();i++){
//         int windowidx=0;  int idx=i;
//         int windowfrq[]={0};
//         while(windowidx<part.length()&& idx<str.length()){
//             windowfrq[str[idx]-'a']++;
//             windowidx++;
//             idx++;
//         }
//         if(isfreqmatch(freq,windowfrq)){
//             return true;
//         } 
//     }
//     return false;

// }
// int main(){
//     string s="aaeakba";
//     string part="ab";
//     cout<<perstr(s,part);
// return 0;
// }

//code for resize the array
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// string rev(string str){
//     reverse(str.begin(),str.end());
//     string ans;
//     for(int i=0;i<str.length();i++){
//         string s;
//         while(str[i]!=' '&& i<str.length()){
//             s+=str[i];
//             i++;
//         }
//         reverse(s.begin(),s.end());
//             ans+=" "+s;
        
//     }
//     return ans.substr(1);
// }

// int main(){
//     string s="aakash dubey ";
//     cout<<rev(s);
// return 0;
// }

//search an element(brute force)
// #include<iostream>
// using namespace std;
// int search(int arr[],int target){
//     int n=5;
//     for(int i=0 ;i<n;i++){
//         if(target ==arr[i]){
//             return i;
//         }
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int target=4;
//     cout<<":"<<search(arr,target);
// return 0;
// }

// binary search
// #include<iostream>
// using namespace std;
// int bsearch(int arr[],int target,int n){
//     int st=0; int end=n-1;
//     while(st<end){
//         int mid= (st+end)/2;
//         if(target>arr[mid]){
//             st=st+1;
//         }
//         if(target< arr[mid]){
//             end=end-1;
//         }
//         if(target ==arr[mid]){
//             return mid;
//         }
//     }
// }
// int main(){
//     int arr[]={-1,0,3,4,5,6,12};
//     int target=-1;  int n=7;
//     cout<<bsearch(arr,target ,n);
// return 0;
// }

