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
// #include<iostream>
// using namespace std;
// int stockBS(int arr[],int n){
//     int bestbuy=arr[0];
//     int maxprofit=INT8_MIN;
//     for(int i=1;i<n;i++){
//         if(bestbuy<arr[i]){
//             maxprofit=max(maxprofit,arr[i]-bestbuy);
//         }
//         bestbuy=min(bestbuy,arr[i]);
//     }
//     return maxprofit;
// }
// int main(){
//     int arr[]={2,1,6,4,3,4,6};
//     int n=7;
//     cout<<stockBS(arr,n);
// return 0;
// }

//container with most water
// #include<iostream>
// using namespace std;
// void most_water(int arr[],int n){
//     int st=0;int end=n-1;int hgt=0;int length=0;
//     int max_container=INT8_MIN;
//     while(st<end){
//         hgt=min(arr[st],arr[end]);
//         length=end-st;
//         max_container=max(max_container,(hgt*length));
//         if(arr[st]<arr[end]){
//             st++;
//         }else{
//             end--;
//         }
//     }
//     cout<<max_container;
// }
// int main(){
//     int h[5]={5,4,3,2,1};
//     most_water(h,5);
// return 0;
// }

//product of array except itself(brute force)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> product(vector<int>& vec,vector<int> ans){
//     int n=vec.size();
//     for(int i=0;i<n;i++){
//         int multiply=1;
//         for(int j=0;j<n;j++){
//             if(vec[i]==vec[j]){
//                 continue;
//             }
//             multiply*=vec[j];
//         }
//         ans.push_back(multiply);
//     }
//     return ans;
// }
// int main(){
//     vector<int> ans;
//     vector<int> vec={1,2,3,4};
//     vector<int> anss=product(vec,ans);
//     for(int val:anss){
//         cout<<val<<" ";
//     }
// return 0;
// }

//code for binary search
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int binarysearch(vector<int> vec,int target){
//     int st=0; int end=vec.size()-1;
//     while(st<=end){
//         int mid=(st + end)/2;
//         if(target==vec[mid]){
//             return mid;
//         }
//         if(target>vec[mid]){
//             st=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
// }
// int main(){
//     vector<int> vec={1,3,4,6,8,9};
//     int target=8;
//     cout<<binarysearch(vec,target);
// return 0;
// }

//code for search in rotated sorted array
// #include<iostream>
// #include<vector>
// using namespace std;
// int search(vector<int> vec,int target){
//     int st=0;  int end =vec.size()-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(target==vec[mid]){
//             return mid;
//         }
//         if(vec[st]<=vec[mid]){
//         if(target>=vec[st]&& target<vec[mid]){
//             end=mid-1;
//         }else{
//             st=mid+1;
//         }}else{
//             if(target<vec[end]&& target>=vec[mid]){
//                 end=mid-1;
//             }else{
//                 st=mid+1;
//             }
//         }
//     }
// return -1;
// }
// int main(){
//     vector<int> vec={4,5,6,7,1,2,3};
//     int target=3;
//     cout<<search(vec,target);
// return 0;
// }

//code for peak index in a mountainm array(bruet force approach)
// #include<iostream>
// #include<vector>
// using namespace std;
// int peakindex(vector<int> vec){
//     int n= vec.size(); int peakindex=INT8_MIN;
//     for(int i=1;i<n;i++){
//         if(vec[i]>=vec[i-1]){
//             peakindex=max(peakindex,i);
//         }   
//     }
//     return peakindex;
// }
// int main(){
//     vector<int> vec={1,3,5,7,6,4,2};
//     cout<<peakindex(vec);
// return 0;
// }

//(optiomized approch)
// #include<iostream>
// #include<vector>
// using namespace std;
// int peak(vector<int> vec){
//     int st=1; int end=vec.size()-2;
//     int mid=0;
//     while(st<=end){
//         mid=(st+end)/2;
//         if(vec[mid-1]<vec[mid]&&vec[mid]>vec[mid+1]){
//             return mid;
//         }
//         if(vec[mid-1]>vec[mid]&& vec[mid]>vec[mid+1]){
//             end=mid-1;
//         }
//         if(vec[mid-1]<vec[mid]&& vec[mid]<vec[mid+1]){
//             st=mid+1;
//         }
//     }
// }
// int main(){
//     vector<int> vec={0,3,8,9,5,2};
//     cout<<peak(vec);
// return 0;
// }

//code for single element in sorted array
// #include<iostream>
// #include<vector>
// using namespace std; 
// int singleel(vector<int> vec){
//     int st=0;  int end =vec.size()-1;
//     int mid=0;
//     while(st<=end){
//         mid=st+(end-st)/2;
//         if(vec[mid-1]!=vec[mid]&&vec[mid]!=vec[mid+1]){
//             return mid;
//         }if(mid %2==0){
//         if(vec[mid-1]==vec[mid]&& vec[mid+1]!=vec[mid]){
//             end =mid-1;
//         }else{
//             st=mid+1;
//         }
//     }if(mid %2!=0){
//         if(vec[mid-1]==vec[mid]&& vec[mid+1]!=vec[mid]){
//             st=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
// }
//     return mid;
// } 
// int main(){
//     vector<int> vec={1,2,2,3,3,4,4,6,6};
//     cout<<singleel(vec);
// return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// bool isvalid(vector<int> arr,int n,int stu,int mid){
//     int student=1;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//         if(sum>mid){
//             student++;
//             sum=arr[i];
//         }
//     }
//     if(student>stu){
//         return false;
//     }
//     return true;
// }
// int bookallocation(vector<int> arr,int stu){
//     int n=arr.size();  int maxel=INT8_MIN;
//     int result=-1;
//     int totalpages=0; int mid=0;
//     for(int i=0;i<n;i++){
//         maxel=max(maxel,arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         totalpages+=arr[i];
//     }
//     int st=maxel; int end=totalpages;
//     if(stu>n){
//         return -1;
//     }
//     while(st<=end){
//         mid=(st+end)/2;
//         if(isvalid(arr,n,stu,mid)){
//             result=mid;
//             end=mid-1;
//         }
//         else{
//             st=mid+1;
//         }
//     }
//     return result;
// }
// int main(){
//     vector<int> arr ={10,20,30,40};
//     int stu=2;
//     cout<<bookallocation(arr,stu);
// return 0;
// }

//code for bubble sort
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> bubblesort(vector<int>& vec){
//     int n=vec.size();
//     for(int i=0;i<n;i++){
//         for(int j=1;j<n-i;j++){
//             if(vec[j-1]>vec[j]){
//                 swap(vec[j],vec[j-1]);
//             }else{
//                 continue;
//             }
//         }
//     }
//     return vec;
// }
// int main(){
//     vector<int> vec={4,1,5,2,3};
//     vector<int> ans=bubblesort(vec);
//     for(int val:ans){
//         cout<<val<<" ";
//     }
// return 0;
// }

//code for insertion sort
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> insertion_sort(vector<int> &vec){
//     int n=vec.size();
//     for(int i=1;i<n;i++){
//         int curr=vec[i];
//         int prev=i-1;
//         while(prev>=0&&vec[prev]>curr){
//             vec[prev+1]=vec[prev];
//             prev--;
//         }
//         vec[prev+1]=curr;
//     }
//     return vec;
// }

// int main(){
//     vector<int> vec={4,1,5,2,3};
//     vector<int> ans=insertion_sort(vec);
//     for(int val:ans){
//         cout<<val<<" ";
//     }
// }

//colour sort(brute force approach)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> colour_sort(vector<int> &vec){
//     int n=vec.size();
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-1;j++){
//             if(vec[j+1]<vec[j]){
//                 swap(vec[j+1],vec[j]);
//             }if(vec[j+1]>=vec[j]){
//                 continue;
//             }
//         }
//     }
//     return vec;
// }
// int main(){
//     vector<int> vec={0,1,0,2,1,2,0,1,2};
//     vector<int> ans=colour_sort(vec);
//     for(int val:ans){
//         cout<<val<<" ";
//     }
// return 0;
// }

//colour sort(optimized approach)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> colour_sort(vector<int>& vec){
//     int n=vec.size();
//     int count0=0, count1=0, count2=0;
//     for(int i=0;i<n;i++){
//         if(vec[i]==0){
//             count0++;
//         }
//         else if(vec[i]==1){
//             count1++;
//         }else{
//             count2++;
//         }
//     }
//     for(int i=0;i<count0;i++){
//         vec[i]=0;
//     }
//     for(int i=count0;i<count1+count0;i++){
//         vec[i]=1;
//     }
//     for(int i=count0+count1;i<(count0+count1+count2);i++){
//         vec[i]=2;
//     }
//     return vec;
// }
// int main(){
//     vector<int> vec={0,1,0,2,1,2,0,1,2};
    // vector<int> ans=colour_sort(vec);
    // for(int val:ans){
    //     cout<<val<<" ";
    // }
// return 0;
// }

//colour sort(By DNF Algorithm)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> colour_sort(vector<int> &vec){
//     int low=0,mid=0,high=vec.size()-1;
//     while(mid<=high){
//         if(vec[mid]==0){
//             swap(vec[mid],vec[low]);
//             mid++;
//             low++;
//         }
//         else if(vec[mid]==1){
//             mid++;
//         }
//         else{
//             swap(vec[mid],vec[high]);
//             high--;
//         }
//     }
//     return vec;
// }
// int main(){
//     vector<int> vec={0,1,0,2,1,2,0,1,2};
//     vector<int> ans=colour_sort(vec);
//     for(int val:ans){
//         cout<<val<<" ";
//     }   
// return 0;
// }

//code for(merge two sorted array)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> merge(vector<int> &nums1,vector<int>& nums2,int m,int n){
//     if(m==0){
//         nums1[0]=nums2[0];
//         return nums1;
//     }
//     if(n==0){
//         return nums1;
//     }
//     int idx1=0; int idx2=0; int idxv=0;
//     vector<int> vec(n+m);
//     while(idx1<m&&idx2<n){
//         if(nums1[idx1]<=nums2[idx2]){
//             vec[idxv]=nums1[idx1];
//             idx1++;
//         }else if(nums1[idx1]>nums2[idx2]){
//             vec[idxv]=nums2[idx2];
//             idx2++;
//         }
//         idxv++;
//     }
//     while(idx1<m){
//         vec[idxv]=nums1[idx1];
//         idx1++;
//         idxv++;
//     }
//     while(idx2<n){
//         vec[idxv]=nums2[idx2];
//         idx2++;
//         idxv++;
//     }
//     return vec;
// }
// int main(){
    // vector<int> nums1={4,5,6};
    // vector<int> nums2={2,4};
    // int m=3,n=2;
    // vector<int> ans=merge(nums1,nums2,m,n);
    // for(int val: ans){
    //     cout<<val<<" ";
//     }
// return 0;
//}

//(most optimal approach)
//merge sorted array(most optimal approach)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> merge(vector<int>& nums1,vector<int>& nums2,int m,int n){
//     int idx1=m-1, idx2=n-1, idx3=(m+n)-1;
//     while(idx1>=0&&idx2>=0){
//         if(nums1[idx1]<=nums2[idx2]){
//             nums1[idx3]=nums2[idx2];
//             idx2--; idx3--;
//         }
//         else{
//             nums1[idx3]=nums1[idx1];
//             idx1--; idx3--;
//         }
//     }
//     while(idx2>=0){
//         nums1[idx3]=nums2[idx2];
//         idx2--; idx3--;
//     }
//     return nums1;
// }
// int main(){
//     vector<int> nums1={4,5,6,0,0};
//     vector<int> nums2={2,4};
//     int m=3,n=2;
//     vector<int> ans=merge(nums1,nums2,m,n);
//     for(int val: ans){
//     cout<<val<<" ";
// }
// return 0;
// }

//code for next permutation(simple approach for a question only)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> nxt_per(vector<int>& vec){
//     int j=vec.size()-1;
//     if(vec[j]<vec[j-1]&&vec[j]<vec[j-2]){
//         swap(vec[j],vec[j-2]);
//     }
//     else if(vec[j]<vec[j-1]&&vec[j]>vec[j-2]){
//         swap(vec[j],vec[j-2]);
//         swap(vec[j],vec[j-1]);
//     }
//     else{
//         swap(vec[j],vec[j-1]);
//     }
//     return vec;
// }
// int main(){
//     vector<int> vec={2,1,3};
//     vector<int> ans=nxt_per(vec);
//     for(int val:ans){
//         cout<<val<<" ";
//     }
// return 0;
//

//code for next permutation(optimal approach)
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int> nxt_per(vector<int> &vec){
//     int n=vec.size(); int pivot=0;
//     for(int i=n-2;i>=0;i--){
//         if(vec[i]<vec[i+1]){
//             pivot=i;
//             break;
//         }
//     }
//     if(pivot==0){
//         reverse(vec.begin(),vec.end());
//         return vec;
//     }
//     for(int j=n-1;j>=0;j--){
//         if(vec[pivot]<vec[j]){
//             swap(vec[pivot],vec[j]);
//             break;
//         }
//     }
//     // reverse(vec.begin()+(pivot+1),vec.end()); direct 
//     //by two pointer
//     int st=pivot+1;
//     int end =n-1;
//     while(st<end){
//         swap(vec[st],vec[end]);
//         st++; end--;
//     }
//     return vec;
// }
// int main(){
//     vector<int> vec={6,5,4,3,2,1};
//     vector<int> ans =nxt_per(vec);
//     for(int val:ans){
//         cout<<val<<" ";
//     }
// return 0;
// }