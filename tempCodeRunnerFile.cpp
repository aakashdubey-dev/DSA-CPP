#include<iostream>
// #include<vector>
// using namespace std;
// bool isvalid(vector<int> piles,int h,int mid){
//     int n= piles.size();
//     int hr=0;
//     for(int i=0;i<n;i++){
//         if(piles[i]<mid){
//             hr++;
//         }else{
//             hr+=piles[i]/mid;
//             if(piles[i]%mid!=0){
//                 hr++;
//             }
//         }
//     }
//     if(hr>h){
//         return false;
//     }
//     return true;
// }
// int koko(vector<int> piles,int h){
//     int n=piles.size(); int min_speed=0; 
//     int max_speed=0; int mid=0;int result=-1;
//     for(int i=0;i<n;i++){
//         min_speed=min(min_speed,piles[i]);
//     }
//     for(int i=0;i<n;i++){
//         max_speed=max(max_speed,piles[i]);
//     }
//     int st=min_speed; int end= max_speed;
//     while(st<=end){
//         mid=st+(end-st)/2;
//         if(isvalid(piles,h,mid)){
//             result=mid;
//             end=mid-1;
//         }else{
//             st=mid+1;
//         }
//     }
//     return result;
// }
// int main(){
//     vector<int> piles={3,6,7,11};
//     int h=8;
//     cout<<koko(piles,h);
// return 0;
// }