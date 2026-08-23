//how to intialize a vector(method 1) and using the stl 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int> vec={1,2,3,4};
// cout<<vec[2];
// return 0;
// }

//method 2
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec(3,1);
//     for(int val:vec){
//         cout<<val<<endl;
//     }
// return 0;
// }

//code for vector fucntions size,push_back,pop_back,fornt,back,at
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec;
//     vec={1,2,34,4};
    // vec.pop_back();
    //  cout<<"the size of the vector is:"<<vec.size()<<endl;
    //cout<<vec.at(2)<<endl;
    //cout<<vec.front()<<endl;
    //    cout<<vec.back()<<endl;
    //  for(int val:vec){
    //     cout<<val<<endl;
    //  }
// return 0;
// }

//code to find the unique value using linear loop and vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int unique(vector<int> vec){
//      int ans=0;
//      for(int i:vec){
//         ans^=i;
//      }
//      return ans;
// }
// int main(){
//      vector<int> vec={1,2,3,4,1,3,4};
//      cout<<"the unique value is :"<<unique(vec);
// return 0;
// }

//code for linear search by vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={1,23,4,5,5};
//     int target;
//     cout<<"enter the number to search:";
//     cin>>target;
//     for(int i=0;i<vec.size()-1;i++){
//         if(target==vec[i]){
//             cout<<i;
//         }
//     }
//     return 0;
// }

//code for reverse the value
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> vec={1,23,4,5,5};
//     int start=0;
//     int end=vec.size()-1;
//     while(start<end){
//         swap(vec[start],vec[end]);
//         start++;
//         end--;
//     }
//     for(int i=0;i<vec.size();i++){
//         cout<<vec[i]<<" ";
//     }
//     return 0;
// }


//code for pairsum brute force aproach
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> pairsum(vector<int> vec,int target){
//     vector<int> ans;
//     int start=0;
//     int end=vec.size()-1;
//     for(int i=0;i<end;i++){
//         int pairsum=0;
//         for(int j=i+1;j<end;j++){
//             if(target==vec[i]+vec[j]){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
            
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> vec={2,4,7,9};
//     int target=11;
//     vector<int> vcc=pairsum(vec,target);
//     cout<<vcc[0]<<","<<vcc[1];
// }


//same question with optimized aproach
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> pairsum(vector<int> nums,int target){
//     vector<int> p;
//     int start=0;
//     int end=nums.size()-1;
//     while(start<end){
//         int pairsum=nums[start]+nums[end];
//         if(pairsum>target){
//             end--;
//         }
//         else if(pairsum<target){
//             start++;
//         }
//         else if(pairsum==target){
//             p.push_back(start);
//             p.push_back(end);
//             return p;
//         }
//     }
//     return p;
// }
// int main(){
//     vector<int> nums={2,4,7,9};
//     int target=11;
//     vector<int> vcc=pairsum(nums,target);
//     cout<<vcc[0]<<","<<vcc[1];
//     return 0;
// }

//code for majority element (brute force)
// #include<iostream>
// #include<vector>
// using namespace std;
// void mj(vector<int> vec){
//     int n=vec.size();
//     int gr=n/2;
//     for(int i=0;i<n;i++){
//          int count=0;
//         for(int j=0;j<n;j++){
//             if(vec[i]==vec[j]){
//                 count++;
//             }
//         }
//         if(count>gr){
//             cout<<"the mj is:"<<vec[i]<<endl;
//             return;
//         }
//     }
// }
// int main(){
//     vector<int> vec={1,1,1,2,1,2,2,1};
//     mj(vec);
//     return 0;
// }

//code for mj by optimized 
// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// vector<int> mj(vector<int> vec){
//     sort(vec.begin(),vec.end());
//     int frequency=1,ans=vec[0];
//     int n=vec.size()/2;
//     for(int i=1;i<vec.size();i++){
//         if(vec[i]==vec[i-1]){
//         frequency++;
//     }
//     else if(vec[i]!=vec[i-1]){
//         frequency=1;
//         ans=vec[i];
//     }
//     if(frequency>n){
//         cout<<vec[i];
//        }
// }
// }
// int main(){
//     vector<int> vec={2,2,2,4,4,4,3,4,5,4,4,4,4,1,1};
//     mj(vec);
//     return 0;
// }

//code for mj by(moore's voting algorithm)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> mj(vector<int> vec){
//     int frequency=0;
//     int ans=vec[0];
//     int n= vec.size()/2;
//     for(int i=0;i<vec.size();i++){
//         if(frequency==0){
//             ans=vec[i];
//         }
//         if(ans==vec[i]){
//             frequency++;
//         }
//         else if(ans!=vec[i]){
//             frequency--;
//         }
//     }
//     cout<<ans;
// }
// int main(){
//     vector<int> vec={2,2,2,4,4,4,3,4,5,4,4,4,4,1,1};
//     mj(vec);
//     return 0;
// }

//code is same as partition painter problem
// #include<iostream>
// #include<vector>
// using namespace std;
//         bool isvalid(vector<int> &arr,int n,int m,int maxpages){
//             int students=1; int pages=0;
//             for(int i=0;i<n;i++){

//             if(arr[i]+pages<=maxpages){
//                 pages=pages+arr[i];
//             }else{
//                 students++;
//                 pages=arr[i];
//             }
//             }
//             return students>m?false:true;
        
//     }
        
//         int splitArray(vector<int>& arr, int m) {
//         int n=arr.size();
//         int maxvalue=INT8_MIN;
     

//         int sum=0; 
//         for(int i=0;i<n;i++){
//             sum+=arr[i];
//             maxvalue=max(maxvalue,arr[i]);
//         }
//         int st=maxvalue;int end =sum;
//         int ans=-1;
        
//         while(st<=end){
//             int mid=st+(end-st)/2;

//             if(isvalid(arr, n, m , mid)){
//                 ans=mid;
//                end=mid-1;
//             }else {
//              st=mid+1;
//             }
//         }
//         return ans;
//     }
//     int main(){
//         vector<int> arr={40,30,10,20};
//         int m=2;
//         cout<<splitArray(arr,m);       
//         return 0;
//     }

//code for aggressive cow
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool isvalid(vector<int> arr,int mid,int n,int c){
    int st=1;  int cows=1;
    int end = arr[0];
    for(int i=1;i<n;i++){
        if((arr[i]-end)>=mid){
            cows++;
            end=arr[i];
      if(cows==c){
        return true;
      }
    }
}
    return false;
}

int position(vector<int> arr,int n,int c){
    sort(arr.begin(),arr.end());
    int st=1;
    int end=arr[n-1]-arr[0];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
    int ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isvalid(arr,mid,n,c)){
            ans=mid;
            st=mid+1;
        } else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr={1,2,8,4,9};
    int n=5;
    int c=3;
    cout<<position(arr,n,c)<<endl;
return 0;
}