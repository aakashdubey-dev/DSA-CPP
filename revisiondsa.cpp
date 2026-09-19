// //more's voting algorithm(majorty element)
// #include<iostream>
// #include<map>
// using namespace std;
// int majel(int nums[]){
//     int freq=0; int ans =0;
//     int n=3;
//     for(int i=0;i<n;i++){
//     if(freq==0){
//         ans=nums[i];
//     }
//     if(nums[i]==ans){
//         freq++;
//     }else{
//         freq--;
//     }
//     if(freq>n/2){
//         return nums[i];
//     }
// }
// }
// int main(){
//     int nums[]={3,2,3};
//     cout<<majel(nums);
// return 0;
// }

//brut force approach
// #include<iostream>
// using namespace std;
// int majorityel(int arr[]){
//     int n=3;
//     for(int i=0;i<3;i++){
//         int freq=0;
//         for(int j=0;j<3;j++){
//             if(arr[i]==arr[j]){
//                 freq++;
//             }
//         }
//         if(freq>n/2){
//             return arr[i];
//         }
//     }
// }
// int main(){
//     int arr[]={2,3,3};
//     cout<<majorityel(arr);
// return 0;
// }

//pattern printing 
//code for reverse triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// return 0;
// }

//code for reverse right triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<n-i;k++){
//             cout<<n-k;
//         }
//         cout<<endl;
//     }
// return 0;
// }

//code for pyramid pattern 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<(i*2)+1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// return 0;
// }

//different queston on pyramid patern printing
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<i+1;k++){
//             cout<<k+1;
//         }
//         if(i>=1){
//         for(int r=i;r>=1;r--){
//             cout<<r;
//         }}
//         cout<<endl;
//     }
// return 0;
// }

//code for hollow traingle 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1-i;j++){
//             cout<<" ";
//         }
//         for(int t=0;t<1;t++){
//             cout<<"*";
//         }
//         if(i>=1){
//             for(int k=0;k<(i*2);k++){
//                 cout<<" ";
//             }
//         for(int r=0;r<1;r++){
//             cout<<"*";
//         }}      cout<<endl;
//     }
// return 0;
// }

//code for reverse an array
// #include<iostream>
// using namespace std;
// int reversearray(int arr[],int n){
//     int st=0;
//     int end=n-1;
//     while(st<end){
//         swap(arr[st],arr[end]);
//         st++;
//         end--;
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     reversearray(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }

//single number 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int singlenumber(vector<int> vec){
//     int ans =0;
//     for(int i=0;i<vec.size();i++){
//         ans=ans^vec[i];
//     }
//     return ans;
// }
// int main(){
//     vector<int> vec={1,2,1,2,4};
//     cout<<singlenumber(vec);
// return 0;
// }

//print all subarray
// #include<iostream>
// #include<vector>
// using namespace std;
// int subarray(vector<int> vec){
//     for(int i=0;i<=vec.size();i++){
//         for(int j=i;j<=vec.size();j++){
//             for(int k=i;k<j;k++){
//             cout<<vec[k]<<" "; 
//         }
//         cout<<endl;
//     }}
// }
// int main(){
//     vector<int> vec={1,2,3,4};
//     subarray(vec);
// return 0;
// }

//max subarray sum(brute force approach)
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int subarray(vector<int> vec){
//     int maxx=INT8_MIN;
//     for(int i=0;i<=vec.size();i++){
//         for(int j=i;j<=vec.size();j++){
//             int sum=0;
//             for(int k=i;k<j;k++){
//             sum=sum+vec[k];
//             maxx=max(maxx,sum);
//         }
//         cout<<endl;
//     }}
//     return maxx;
// }
// int main(){
//     vector<int> vec={1,2,3,4};
//     cout<<subarray(vec);
// return 0;
// }

//max subarraysum (optimized approach) //kadanne algorithm
// #include<iostream>
// #include<vector>
// using namespace std;
// int subarray(vector<int> vec){
//     int sum=0;
//     int maxsum=INT8_MIN;
//     for(int i=0;i<vec.size();i++){
//         sum=sum+vec[i];
//         maxsum= max(sum,maxsum);
//         if(sum<0){
//             sum=0;
//         }
//     }
      
//     return maxsum;
// }
// int main(){
//     vector<int> vec={-1,2,3,-10};
//     cout<<subarray(vec);
// return 0;
// }

// pair sum (brute force)
// #include<iostream>
// #include<vector>
// using namespace std;
// void pairsum(vector<int> vec,int target){
//     int n= vec.size();
//     if(target==vec[0]){
//         cout<<vec[0];
//         return;
//     }
//      int i=0;
//     if(vec[0]>target){
//         i=1;
//     }
//     for(;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<n;k++){
//                 sum+= vec[k];
//                 if(sum==target){
//                     cout<<vec[k-1]<<","<<vec[k];
//                     return;
//                 }
//             }
//         }
//     }
// }
// int main(){
//     vector<int> vec={12,4,3,8};
//     int target =11;
//     pairsum(vec,target);
// return 0;
// }

//pairsum (optimized approach)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>  pairsum(vector<int> vec,int target,vector<int> &v){
//     int st=0,end =vec.size()-1;
//     if(target==vec[0]){
//         v.push_back(vec[0]);
//         return v;
//     }
//     if(vec[0]>target){
//         st=1;
//     }
//     while(st<end){
//         int sum=vec[st]+vec[end];
//         if(sum>target){
//             end--;
//         }
//         if(sum<target){
//             st++;
//         }
//         if(sum==target){
//             v.push_back(vec[st]);
//             v.push_back(vec[end]);
//             return {v};
//         }
//     }
//     v.push_back(-1);
//     return v;
// }
// int main(){
//     vector<int> vec={7,4,7,2,8};
//     int target =6;
//     vector<int> v;
//     pairsum(vec,target,v);
//     for(int val:v){
//         cout<<val<<" ";
//     }
//     return 0;
// }

//majority element practice code 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int majorityel(vector<int> vec){
//     int n= vec.size();
//     sort(vec.begin(),vec.end());
//     int maxappear=INT8_MIN;  int count=1;  int majorityele=0;
//     for(int i=0;i<n;i++){
//         if(vec[i]==vec[i+1]){
//             count++;
//         }
//         if(maxappear<count){
//             majorityele=vec[i];
//         }
//         if(vec[i]!=vec[i+1]){
//             maxappear=max(maxappear,count);
//             count=1;
//         }
//     }
//     return majorityele;
// }
// int main(){
//     vector<int> vec={1,2,2,3,3,3,4,4,4};
//     int target =11;
//     cout<<majorityel(vec);
// return 0;
// }

//code for majorityelement
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int majorityel(vector<int> vec){
//     int n= vec.size();
//     sort(vec.begin(),vec.end());
//     int maxappear=INT8_MIN;  int count=1;  int majorityele=0;
//     for(int i=0;i<n-1;i++){
//         if(vec[i]==vec[i+1]){
//             count++;
//             maxappear=max(maxappear,count);
//         }
//         if(vec[i]!=vec[i+1]){
//             count=1;
//         }
//         if(maxappear>n/2){
//             return vec[i];
//         }
//     }
// }
// int main(){
//     vector<int> vec={1,2,5,5,6,5,5,7,7,5,5};
//     cout<<majorityel(vec);
// return 0;
// }

//code  for compute x^n(brute force approch)
// #include<iostream>
// using namespace std;
// int power(int x ,int n){
//     int ans=x;
//     for(int i=1;i<n;i++){
//         ans*=x;
//     }
//     return ans;
// }
// int main(){
//     int x=2;
//     int n=5;
//     cout<<power(x,n);
// return 0;
// }

//optimized approach
// #include<iostream>
// using namespace std;
// double power(double x,double n){
//     //edge case
//     if(x<0){return x;}
//     if(n=0){return 1;}
//     if(x==0){return 0;}
//     long bf=n; 
//     double ans=1;
//     if(bf<0){
//         x=1/x;
//         bf=-(bf);
//     }
//     while(bf>0){
//         if(bf%2==1){
//             ans*=x;
//         } 
//         x*=x;
//         bf=bf/2;
//     }
//     return ans;  
// }
// int main(){
//     double x=2;
//     double n=5;
//     cout<<power(x,n);
// return 0;
// }

//code for stock buy and sell
#include<iostream>
using namespace std;
int stockBS(int arr[],int n){
    int bestbuy=arr[0];
    int maxprofit=INT8_MIN;
    for(int i=1;i<n;i++){
        if(bestbuy<arr[i]){
            maxprofit=max(maxprofit,arr[i]-bestbuy);
        }
        bestbuy=min(bestbuy,arr[i]);
    }
    return maxprofit;
}
int main(){
    int arr[]={2,1,6,4,3,4,6};
    int n=7;
    cout<<stockBS(arr,n);
return 0;
}