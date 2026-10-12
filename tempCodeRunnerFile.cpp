#include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> three_sum(vector<int> vec){
//     int n=vec.size();
//     set<vector<int>> ans;
//     for(int i=0;i<n;i++){
//         int target=-(vec[i]);
//         set<int> s;
//         for(int j=i+1;j<n;j++){
//             int third=target-vec[j];
//             if(s.find(third)!=s.end()){
//                 vector<int> trip={vec[i],vec[j],third};
//                 sort(trip.begin(),trip.end());
//                 ans.insert(trip);
//             }
//                 s.insert(vec[j]);
//         }
//     }
//     vector<vector<int>> anss(ans.begin(),ans.end());
//     return anss;
// }
// int main(){
//     vector<int> vec={-1,0,1,2,-1};
//     vector<vector<int>> show=three_sum(vec);
//     for(auto it:show){
//         for(int x:it){
//             cout<<x<<" ";
//         }
//         cout<<endl;
//     }
// return 0;
// }