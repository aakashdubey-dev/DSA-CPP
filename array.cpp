//code to find the smalest and highest value of array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6];
//     int size=6;
//     cout<<"enter your number:";
//     for(int i=0;i<6;i++){
//         cin>>arr[i];
//     }  
//     int smallest= INT8_MAX;
//     int greatest=INT8_MIN;
//     for(int i=0;i<6;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//         else if(arr[i]>greatest){
//             greatest=arr[i];
//         }
//     }
//     cout<<"the smallest number is:"<<smallest<<endl;
//      cout<<"the greatest number is:"<<greatest<<endl;
// return 0;
// }

//code for linear search
// #include<iostream>
// using namespace std;
// int search(int arr[6],int target){
  
//     for(int i=1;i<6;i++){
//         if(target==arr[i]){
//             return i;
//         }
//     }
//     return -1;
// }
//     int main(){
//           int arr[6];
//     int target;
//     cout<<"enter the elements:";
//     for(int i=0;i<6;i++){
//         cin>>arr[i];
//     }
//     cout<<"enter the target to search:";
//     cin>>target;
//     cout<<search(arr,target);
// return 0;
// }

//code for reverse an arrya by using two pointer approach
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int  main(){
//     int arr[5]={1,2,3,4,5};
//     int start=0;
//     int end=5-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }

//code to print sum and product of all element od arrays;
// #include<iostream>
// using namespace std;
// void sumpro(int  arr[10]){
//     int sum=0;
//     int product=1;
//     int start=0;
//     for(int i=0;i<6;i++){
//         sum=sum+arr[i];
//         product=product*arr[i];
//     }
//     cout<<"the sum of all element is:"<<sum<<endl;
//     cout<<"the product of al element is:"<<product;
// }
// int main(){
//     int arr[6]={1,2,3,4,1,1};
//     sumpro(arr);
// }

//code to print the max and min swap
// #include<iostream>
// #include<algorithm>
// using namespace std;
// void swap(int arr[5]){
// int smallest=0;
// int  highest=0;
//     for(int i=0;i<5;i++){
//         if(arr[i]<arr[smallest]){
//             smallest=i;
//         }
//         if(arr[i]>highest){
//             highest=i;
//         }
//     }
//      swap(arr[smallest],arr[highest]);
//     for(int i=0;i<5;i++){
//         cout<<arr[i];
//     }
// }
// int main(){
//     int arr[5]={1,2,3,4,2};
//     swap(arr);
// return 0;
// }

//code to print unique value in an array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,1,2};
//     int check=0;
//     int store;
//     bool flag=false;
//     for(int i=0;i<5;i++){
//         if(arr[check]==arr[check+i+1]){
//             store=arr[check];
//         }
//         cout<<store;
//         check++;
//     }
// return 0;
// }

//code to print the all possible subarray
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={6,7,8,9,10};
//     int n=5;
//     for(int st=0;st<n;st++){
//         for(int end=st;end<n;end++){
//             for(int i=st;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// return 0;
// }

//code to print the subarray maximum (by brute force)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,-2,-1,2,1};
//     int n=5;
//     int maxsum=0;
//     for(int st=0;st<n;st++){
//         int currentsum=0;
//         for(int end=st;end<n;end++){
//             currentsum+=arr[end];
//             maxsum=max(currentsum,maxsum);
//         }
//     }
//     cout<<maxsum;
// return 0;
// }

//above question with kadane algorithm
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1,3,-5,3,-1,4};
//     int n=6;
//     int cursum=0;
//     int maxsum=INT8_MIN;
//     for(int st=0;st<n;st++){
//         cursum+=arr[st];
//         maxsum=max(maxsum,cursum);
//         if(cursum<0){
//             cursum=0;       }
//     }
//     cout<<maxsum;
// return 0;
// }

// code for multiply the array except itself
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4]={1,2,3,4};
//     int n=4;
//     int prefix[4];
//     int suffix[4];
//     prefix[0]=1;
//     suffix[3]=1;
//     for(int i=1;i<n;i++){
//         prefix[i]=prefix[i-1]*arr[i-1];
//     }
//     for(int j=n-2;j>=0;j--){
//         suffix[j]=suffix[j+1]*arr[j+1];
//     }

//     int result[4];
//     for(int i=0;i<n;i++){
//         result[i]=prefix[i]*suffix[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<result[i]<<" ";
//     }
// return 0;
// }

//code for binary search
// #include<iostream>
// using namespace std;
// int bs(int arr[],int n,int target){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;   //to avoid overflow
//        if(arr[mid]<target){
//             start=mid+1;
//         }
//         else  if(arr[mid]>target){
//             end=mid-1;
//         }
//         else {
//             return mid;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int n=7;
//     int target=300;
//     cout<<bs(arr,n,target)<<endl;
// return 0;
// }

//code to search in rotated sorted array
// #include<iostream>
// using namespace std;
// int search(int arr[],int n, int target){
//     int st=0;
//     int end=n-1;
//     while(st<=end){
//         int mid= st+(end-st)/2;
//         if(arr[mid] ==target){
//             return mid;
//         }
//         if(arr[st]<arr[mid]){    
//             if(arr[st]<=target&&target<=arr[mid]){
//                end=mid-1;
//             }
//             else {
//                 st=mid+1;
//             }
//         }
//             if(arr[end]>arr[mid]){ 
//                 if(arr[mid]<=target&&target<=arr[st]){
//                     st=mid+1;
//                 } 
//                 else {
//                     end=mid-1;
//                 }
//             }
//         }   
//     return -1;
// }
// int main(){
//     int arr[]={3,4,5,6,7,0,1,2};
//     int n=8;
//     int target=1;
//     cout<<search(arr,n,target)<<endl;
// }

//code for peak index in mnountain array
// #include<iostream>
// using namespace std;
// int peaksearch(int arr[],int n){
//     int st=1;
//     int end=n-2;
//     while(st<=end){
//         int mid= st+(end-st)/2;
//         if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]){
//             return mid;
//         }
//         if(arr[mid]>arr[mid-1]){
//              st=mid+1;
//         }
//         else{
//               end=mid-1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={0,3,8,5,1};
//     int n=6;
//     cout<<"the peak value is: "<<peaksearch(arr,n)<<endl;
// return 0;
// }

//code for single element in sorted array
// #include<iostream>
// using namespace std;
// int sesort(int arr[],int n){
//     int st=0; 
//     int end=n-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(mid==0 && arr[0]!=arr[1]){
//             return arr[mid];
//         }
//          if(mid==n-1 && arr[n-1]!=arr[n-2]){
//             return arr[mid];
//         }
//         if(arr[mid]==arr[mid-1]&&arr[mid]==arr[mid+1]){return arr[mid];}
//         if(mid%2==0){
//             if(arr[mid]==arr[mid-1]){
//                 end=mid-1;
//             }
//             else{
//              st=mid+1;
//             } 
//         } else{
//             if(arr[mid]==arr[mid-1]){
//                 st=mid+1;
//             } else{
//                 end=mid-1;
//             }
//         }
       
//     }
//     return -1;
// }
// int main(){
//     int arr[]={1,1,2,3,3,4,4,8,8};
//     int n=9;
//     cout<<"the single element is: "<<sesort(arr,n)<<endl;
// return 0;
// }

// code for binary search
// #include<iostream>
// using namespace std;
// int binarysearch(int arr[],int target ,int n){
//     int st=0; int end =n-1;
//     if(n=0) return arr[0];
//     if(n-1) return arr[n-1];
//     while(st<=end){
//         int mid=st+(end-st)/2;
//         if(arr[mid]>arr[mid-1]){
//            end=end-1;
//         }
//         if(arr[mid+1]>arr[mid]){
//             st=mid+1;
//         }
//         if(target==arr[mid]){
//             return mid;      
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={3,4,5,6,7,0,1,2};
//     int target =7;
//     int n=8;
//     cout<<binarysearch(arr,target,n)<<endl;
// return 0;
// }

//code for insertion order 
// #include<iostream>
// using namespace std;
// int insertionsearch(int arr[],int n,int target){
//     int st=0; int end=n-1;
//     while(st<=end){
//         int mid=st+end/2;
//         if(arr[mid]==target) return mid;
//         if(target<arr[mid])  //left
//         end=mid-1;
//         if(target>arr[mid]){
//             st=mid+1;
//         }
//     }
//     return st; 
// }
// int main(){
//     int arr[]={1,3,5,7};
//     int target=8;
//     int n=4;
//     cout<<insertionsearch(arr,n,target);
// return 0;
// }

//sorting
//code for sorting by bubble sort
// #include<iostream>
// using namespace std;
// int bubblesort(int arr[],int n){
//     bool flag=false;
//        for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 flag=true;
//             }
//         }
//     }
//     if(flag==false){
//         cout<<"already swapped: ";
//     }
//      for(int k=0;k<n;k++){
//         cout<<arr[k]<<" ";
//     }
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     bubblesort(arr, n);
// return 0;
// }

//code for sorting by selection sort
// #include<iostream>
// using namespace std;
// int selectionsort(int arr[],int n){
//        for(int i=0;i<n-1;i++){
//         int smallestindex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[smallestindex]){
//                 smallestindex=j;
//             }
//         }
//         swap(arr[i],arr[smallestindex]);
//     }
//      for(int k=0;k<n;k++){
//         cout<<arr[k]<<" ";
//     }
// }
// int main(){
//     int arr[]={5,2,4,3,1};
//     int n=5;
//    selectionsort(arr, n);
// return 0;
// }

//insertion sort
// #include<iostream>
// using namespace std;
// int insertionsort(int arr[],int n){

//     for(int i=1;i<n;i++){
//         int current =i;
//         int prev=i-1;
//         while(prev>=0 && arr[prev]>current){    //agr current > arr[prev]ascending warna  current < arr[prev]descending
//                 arr[prev+1]=arr[prev];
//                 prev--;
//     }
//     arr[prev+1]=current;
// }

//     for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// }
// int main(){
//     int arr[]={5,3,1,2,4};
//     int n=5;
//     insertionsort(arr,n);
// return 0;
// }

//code for 0's , 1's and 2's to sort it
// #include<iostream>
// using namespace std;
// int sortit(int arr[],int n){
//     int zero=0;  int ones=0;  int twos=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             zero++;
//         }
//         else if(arr[i]==1){
//             ones++;
//         }
//         else{
//             twos++;
//         }
//     }
//     int indx=0;
//     for(int j=0;j<zero;j++){
//         arr[indx++]=0;
//         //indx++;
//     }
//     for(int j=0;j<ones;j++){
//         arr[indx++]=1;
//         //indx++;
//     }
//      for(int j=0;j<twos;j++){
//         arr[indx++]=2;
//         //indx++;
//     }
// }
// int main(){
//     int arr[]={0,0,1,1,0,2,1,2,0,2};
//     int n=10;
//     sortit(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// return 0;
// }

//2D array 
//input  && output
// #include<iostream>
// using namespace std;
// int main(){
//     int c[3][3];

    // for(int i=0 ;i<3;i++){
    // for(int j=0;j<3;j++){
    //    cin>>c[i][j];
    // }
// }
//  for(int i=0 ;i<3;i++){
//     for(int j=0;j<3;j++){
//        cout<<c[i][j]<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }

//linear search in 2d array
// #include<iostream>
// #include<utility>
// using namespace std;
// pair<int,int> search(int arr[3][3],int target){
//     for(int i=0 ;i<3;i++){
//     for(int j=0;j<3;j++){
//        if (target==arr[i][j]){
//        return {i,j};
//     } 
// }
// }
// return {-1,-1};
// }
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int target =6;
//     pair<int,int> ans=search(arr ,target);
//     cout<<ans.first<<","<<ans.second;
// return 0;
// }

//return max row and column sum
// #include<iostream>
// using namespace std;
// int maxsubsum(int arr[][3]){
//     int maxx=INT8_MIN;
//     for(int i=0;i<3;i++){
//         int sum=0;
//         for(int j=0;j<3;j++){
//             // sum+=arr[j][i];  for column
//             // sum+=arr[i][j];  for row
//             maxx=max(sum,maxx);
//         }
//     }
//     return maxx;
// }
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     cout<<maxsubsum(arr);

// return 0;
// }

//code for return the diagonal sum(both diagonal)
// #include<iostream>
// using namespace std;
// int rightdigosum(int arr[3][3]){
//     int n=3;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//             sum+=arr[i][j];  
//         }
//         else if(j=n-i-1){
//             sum+=arr[i][j];
//         }
//     }
// }
// return sum;
// }
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     cout<<rightdigosum(arr);

// return 0;
// }

//above question with optimized approach
// #include<iostream>
// using namespace std;
// int rightdigosum(int arr[3][3]){
//     int sum=0;  int n=3;
//         for(int i=0;i<n;i++){
//         sum+=arr[i][i];
//         if(i!=n-1-i){
//             sum+=arr[i][3-1-i];
//     }
//     }
//     return sum;
// }
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     cout<<rightdigosum(arr);
// return 0;
// }

// vector formation 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>> arr={{1,2,3},{4,5,6,9,9,9},{7,8,9}};
//     //rows= arr.size();
//     //coloum=arr[i].size();

//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<arr[i].size();j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// return 0;
// }


// #include<iostream>
// using namespace std;
// int diagosum(int arr[][3]){
//     int sum=0; int n=3;
//     for(int i=0;i<n;i++){
//         sum+=arr[i][i];
//         if(i!= n-i-1){
//             sum+=arr[i][n-i-1];
//         }
//     }
//     return sum;
// }
// int main(){
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     cout<<diagosum(arr);
// return 0;
// }

// code for print the matrix in spiral order
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> spiralmat(vector<vector<int>> vec){
    // int m= vec.size(); 
    // int n= vec[0].size();
//     int strow=0, stcol=0, endrow=m-1, endcol=n-1;
//     vector<int> ans;
//     while(strow<=endrow&& stcol<= endcol){

//         for(int i= strow;i<=endcol; i++){
//             ans.push_back(vec[strow][i]);
//         }
//        for(int i=strow+1;i<=endrow;i++){
//         ans.push_back(vec[i][endcol]);
//        }
//        for(int i=endcol-1;i>=stcol;i--){
//         if(strow==endrow){
//             break;
//         }
//         ans.push_back(vec[endrow][i]);
//        }
//        for(int i=endrow-1;i>=strow+1;i--){
//         if(stcol==endcol){
//             break;
//         }
//         ans.push_back(vec[i][stcol]);
//        }
//        strow++;  endrow--;
//        stcol++;  endcol--;
// }
// return ans;
// }
// int main(){
//     vector<vector<int>> vec={{9,2,3,4},{7,4,6,4},{3,0,5,3}};
//     vector<int>ans;
//     ans=spiralmat(vec);
//     for(int val: ans){
//         cout<<val<<" ";
//     }
// return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<vector<int>> transpose(vector<vector<int>> vec){
//     int m= vec.size()-1; 
//     int n= vec[0].size()-1;
//     for(int i=0;i<=m;i++){
//         for(int j=i;j<=n;j++){
//             if(i!=j){
//                 swap(vec[i][j],vec[j][i]);
//             }
//         }
//     }
//     return vec;
// }
// int main(){
//     vector<vector<int>> vec={{1,2,3},{4,-1,0},{9,3,7}};
//     int m= vec.size(); 
//     int n= vec[0].size();
//     vector<vector<int>> ans=transpose(vec);
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<ans[i][j]<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }

//function for find duplicate in array(brute force approach)
//unordered_set<int> s;
// vector<vector<int>> ans;
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         for(int k=j+1;j<n;j++){
//             if(arr[i]+arr[j]+arr[k]==0){
//                 vector<int> triplet={arr[i],arr[j],arr[k]};
//                 sort(triplet.begin(),triplet.end());
//                 if(s.find(triplet)==s.end()){
//                 s.insert(triplet);
//                 ans.push_back(s);
//                 }
//             }
//         }
//     }
// }

//better approach
// unordered_set<int> ss;
// vector<vector<int>> nas; int n=nums.size();
// for(int i=0;i<n;i++){
//     int a=-(arr[i]);
//     set<int> s;
//     for(int j=i+1;j<n;j++){
//         int c=a-arr[j];
//         if(s.find(c)!=s.end()){
//             vector<int> triplet={a,arr[j],c};
//             sort(triplet.begin(),triplet.end());
//             if(ss.find(triplet)==s.end()){
//                 ss.insert(triplet);
//                 ans.push_back(ss);
//             }
//             s.insert(arr[j]);
//         }
//     }
// }
// return ans;

//code for subarray um is equal k(find subarray) brute force approach
// #include<iostream>
// #include<vector>
// using namespace std;
// void subarraysum(vector<int> vec,int target){
//     vector<vector<int>> ans;
//     int n= vec.size();
//     for(int i=0;i<n;i++){
//         int sum=vec[i];
//         for(int j=i;j<n;j++){
//            for(int k=i+1;k<j;k++){
//             sum+=vec[k];
//             cout<<sum;
//         }
//         cout<<endl;
// }
// }}
// int main(){
//     vector<int> vec={1,2,3,4,5,6,54,5};
//     int target= 60;
//     subarraysum(vec,target);
// }

//function for subarray sum is k

// int count=0;
// vector<int> prefixsum;
// for(int i=0;i<n;i++){
//     prefixsum[i]=prefixsum[i-1]+arr[i];
// }

// unordered_map<int,int> m;
// for(int j=0;j<n;j++){
//     if(prefix[j]==k){count++;}
//     int val=prefixsum[j]-k;
//     if(m.find(val)!=m.end()){
//         count+=m[val];
//     }
//     if(m.(prefixsum[j])==m.end()){
//         m[prefixsum[j]]=0;
//     }
//     m[prefixsum[j]]++;
// }
// return count;