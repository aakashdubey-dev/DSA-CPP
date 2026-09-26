//code for find minimum in rotated sorted array
// #include<iostream>
// #include<vector>
// using namespace std;
// int minimum(vector<int> vec){
//     int st=0; int end =vec.size()-1;
//     int mid=-1;
//     while(st<=end){
//         mid=st+(end-st)/2;
//         if(vec[st]==vec[end]){
//             return vec[st];
//         }
//         if(vec[end]<vec[mid]){
//             st=mid+1;
//         }else{
//             end=mid;
//         }
//     }
//     return vec[mid];
// }
// int main(){
//     vector<int> vec={5,1,2,3,4};
//     cout<<minimum(vec);
// return 0;
// }

//code for (koko eating bananas question)
// #include<iostream>
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

