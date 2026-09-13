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

//brut force approach)
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