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