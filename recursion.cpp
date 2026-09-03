//code for print n to 1 number
// #include<iostream>
// using namespace std;
// void printn(int n){
//     if(n==1){
//         cout<<1;
//         return;
//     }
//     cout<<n<<" ";
//     printn(n-1);
// }
// int main(){
//     int n=5;
//     printn(n);return 0;
// }

//code for print the factorial 
// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int n=4;
//     cout<<fact(n);
// return 0;
// }

//code for print the sum of n to 1
// #include<iostream>
// using namespace std;
// int summ(int n){
//     if(n==1){
//         return 1;
//     }
//     return n+summ(n-1);
// }
// int main(){
//     int n=5;
//     cout<<summ(n)<<"\n";
// return 0;
// }

//code for print 1 to n
// #include<iostream>
// using namespace std;
// void printn(int n){
//     if(n==5){
//         cout<<n<<"\n";
//         return ;
//     }
//     cout<<n<<" ";
//     printn(n+1);

// }
// int main(){
//     int n=1;
//     printn(n);
// return 0;
// }

//code for print n to 1 bu using return
// #include<iostream>
// using namespace std;
// void display(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     display(n-1);

// }
// int main(){
//     int n=5;
//     display(n);
// return 0;
// }

//code for print the power
// #include<iostream>
// using namespace std;
// int power(int n){
//     if(n==1){
//         return 2;
//     }
//     return 2*power(n-1);
// }
// int main(){
//     int n=5;
//     cout<<power(n);
// return 0;
// }

//code for count the digit of a number
// #include<iostream>
// using namespace std;
// int countdigit(int num){
//     if(num==0){
//         return 0 ;
//     }
//     return 1+countdigit(num/10);
// }
// int main(){
//     int num=1234786;
//     int count =0;
//     cout<<countdigit(num)<<"\n";
// return 0;
// }

//code for sum the digits of a number
// #include<iostream>
// using namespace std;
// int sumdigit(int num){
//     if(num==0){
//         return 0;
//     }
//     int rem =num%10;
//     return rem+sumdigit(num/10);
// }
// int main(){
//     int num=15345;
//     cout<<sumdigit(num)<<"\n";
// return 0;
// }

//code for product the digit of a number
// #include<iostream>
// using namespace std;
// int productdigit(int num){
//     if(num==0){
//         return 1;
//     }
//     int rem =num%10;
//     return rem*productdigit(num/10);
// }
// int main(){
//     int num=15345;
//     cout<<productdigit(num)<<"\n";
// return 0;
// }

//code to find the array is sorted or not
// #include<iostream>
// using namespace std;
// int issorted(int arr[],int n){
//     if(n==0||n==1){
//         return true;
//     }
//     return arr[n-1]>=arr[n-2] && issorted(arr,n-1);
// }
// int main(){
//     int arr[]={1};
//     int n=5;
//     cout<<issorted(arr,n);
// return 0;
// }

// fibonnaci code in recursion
// #include<iostream>
// using namespace std;
// int fibonnaci(int n){
//     if(n==0||n==1){
//         return n;
//     }
//     return fibonnaci(n-1)+fibonnaci(n-2);
// }
// int main(){
//     int n=4;
//     cout<<fibonnaci(n);
// return 0;
// } 

//code for check the palindrome no.
// #include<iostream>
// using namespace std;
// int  palindrome(int num,int rev){
//     if(num==0){
//         return rev;
//     }
//     int digit=num%10;
//     rev=rev*10+digit;
//     return palindrome(num/10,rev);

// }
// int main(){
//     int num=1241;
//     int orgnum=1241; 
//     int rev=palindrome(num,0);
//     if(rev==orgnum){
//         cout<<"number is palindrome";
//     }else{
//         cout<<"not palindrome";
//     }
// return 0;
// }

//code for max element in array using rcursion
// #include<iostream>
// using namespace std;
// int maxelement(int arr[],int st,int end,int maxelmt){
//     if(st<=end){
//     maxelmt=max(maxelmt,arr[st]);
//     return maxelement(arr,st+1,end,maxelmt);
//     }
//     return maxelmt;
// }
// int main(){
//     int arr[]={1,3,54,6,8,4};
//     int st=0; 
//     int n=5;  
//     cout<<maxelement(arr,st,n,INT8_MIN);

// return 0;
// }

//code for gcd by recursion
// #include<iostream>
// using namespace std;
// int gcd(int a,int b,int lastcheck,int st,int gcdd){
//     if(a==b) return a;
//     if(b==0) return a;
//     if(a==0) return b;
//     if(st<=lastcheck){
//         if(a%st==0&&b%st==0){
//             gcdd=max(gcdd,st);
//         }
//         return gcd(a,b,lastcheck,st+1,gcdd);
//     }
//     return gcdd;
// }
// int main(){
//     int num1=12;
//     int num2=16;  
//     cout<<gcd(num1,num2,min(num1,num2),1,-1);
// return 0;
// }

//code for count the occurance
// #include<iostream>
// using namespace std;
// int count(int arr[],int target,int st,int end,int occurance){
//     if(st<=end){
//         if(target==arr[st]){
//             occurance=occurance +1;
//         }
//         return count(arr,target,st+1,end,occurance);
//     }
//     return occurance;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6,2,2,2,2,2};
//     int target=2;
//     cout<<count(arr,target,0,10,0);
// return 0;
// }

//code for check array is sorted or not
// #include<iostream>
// using namespace std;
// bool check(int arr[],int n){
//     if(n==1){
//         return true;
//     }
//     return arr[n-1]>=arr[n-2]&&check(arr,n-1);
// }
// int main(){
//     int arr[]={1,2,3,7,5,6};
//     int n=6;
//     cout<<check(arr,n);
// }

//code for binary search in recursion
//#include<iostream>
//using namespace std;
// bool binarysearch(int arr[],int target ,int st,int end){
//     if(st<=end){
//         int mid=(st+end)/2;
//         if(arr[mid]>target){
//             return binarysearch(arr,target,st,mid-1);
//         }
//         else if(arr[mid]<target){
//             return binarysearch(arr,target,mid+1,end);
//         }
//         else {
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int target=2;
//     cout<<binarysearch(arr,target,0,4);
// return 0;
// }

//function for print all subsets
/*void printsubset(int arr[], int i, int &ans[]){
if(i==arrr.size()){
for(int val: ans){
cout<<val<<" ";
}cout<<endl;
return ;
}
ans.push_back(arr[i]);
printsubset(arr,i+1,ans[]);
ans.pop_back();
printsubset(arr,i+1,ans[]);}
*/

//functon for subsets 2 question
// vector<vector<int>> ps(vector<int> nums, vector<int> ans,vector<vector<int>> vec,int i){
//     if(i==3){
//         vec.push_back({ans});
//         return;
//     }
//     ans.push_back(arr[i]);
//     ps(vec,ans,i,nums);

//     ans.pop_back();
    
//     int idx=i+1;
//     while(i<nums.size()&& nums[idx]==nums[idx-1]) idx++;
//     ps(nums,ans,vec,idx);

// }

//function for nqueens question
// bool issafe(vector<string> board,int row,int n,int col){
//         for(int i=0;i<n;i++){
//             if(board[row][i]=='Q'){
//                 return false;
//             }}
//         for(int i=0;i<n;i++){
//             if(board[i][col]=='Q'){
//                 return false;
//             }}
//         for(int i=row,j=col;i>=0&&j>=0;i--,j--){
//             if(board[i][j]=='Q'){
//                 return false;
//             }}
//         for(int i=row,j=col;i>=0&&j<n;i--,j++){
//             if(board[i][j]=='Q'){
//                 return false;
//             }}
//             return true;
//         }
//     void nqueens(vector<string> board , vector<vector<string>>& ans,int row, int n){
//         if(row==n){
//             ans.push_back({board});
//             return;
//         }
//         for(int i=0;i<n;i++){
//             if(issafe(board,row,n,i)){
//                 board[row][i]='Q';
//                 nqueens(board,ans,row+1,n);
//                 board[row][i]='.';
//             }
//         }
//     }  

//function for sudoku solver problem
// bool issafe(vector<vector<char>>& board,int row ,int col,char dig){
//     for(int i=0;i<9;i++){
//         if(board[row][i]== dig){
//             return false;
//         }
//     }
//     for(int i=0;i<9;i++){
//         if(board[i][col]== dig){
//             return false;
//         }
//     }
//     int sr=(row/3)*3;
//     int sc=(col/3)*3;
//     for(int i=sr;i<=sr+2;i++){
//         for(int j=sc;j<=sc+2;j++){
//         if(board[i][j]==dig){
//             return false;
//         }
//         }
//     }
// return true;
// }
// bool sudokusolver(vector<vector<char>>& board,int row ,int col){
//     if(row==9){
//         return true;
//     }
//     int nxtrow=row;int nxtcol=col+1;
//     if(nxtcol==9){
//         nxtrow=row+1;
//         nxtcol=0;
//     }
//     if(board[row][col]!='.'){
//         return sudokusolver(board,nxtrow ,nxtcol);
//     }
//      for(char dig='1';dig<='9';dig++){
//         if(issafe(board,row,col,dig)){
//             board[row][col]=dig;
//             if(sudokusolver(board,nxtrow ,nxtcol)){
//                 return true;
//             }
//              board[row][col]='.';
//         }
//      }
//      return false;
// }
//     void solveSudoku(vector<vector<char>>& board) {
//         sudokusolver(board,0,0);
//     }

//code for rat in maze problem
// #include<iostream>
// #include<vector>
// using namespace std;
// void helper(vector<vector<int>> &mat,int row,int col,string path,vector<string> &ans, vector<vector<bool>> &vis){
//     int n=mat.size();
//     if(row<0|| row>=n||col<0||col>=n||mat[row][col]==0||mat[row][col]==-1){
//         return;
//     }
//     if(row==n-1&&col==n-1){
//         return ans.push_back(path);
//     }
//     mat[row][col]=-1;
//     helper(mat,row+1,col,path+"d",ans,vis);
//     helper(mat,row-1,col,path+"u",ans,vis);
//     helper(mat,row,col+1,path+"r",ans,vis);
//     helper(mat,row,col-1,path+"l",ans,vis);

//     mat[row][col]=1; //we use visit matrix but to reduce space complexity we are changing in current matrix
// }
// vector<string> findpath(vector<vector<int>>& mat){
//     int n=mat.size();
//     vector<string> ans;
//     string path="";
//     vector<vector<bool>> vis(n,vector<bool>(n,false));
//     helper(mat,0,0,path,ans,vis);
//     return ans;
// }

// int main(){
//     vector<vector<int>> mat={{1,0,0,0},{1,1,1,1},{1,1,0,0},{0,1,1,1}};
//     vector<string> anss=findpath(mat);
//     for(string val: anss){
//         cout<<val<<endl;
//     }
// return 0;
// }

//function for combination sum
#include<iostream>
#include<vector>
#include<set>
using namespace std;

set<vector<int>> s;
    void combsum(vector<int>& arr, int target,vector<int>& combine,vector<vector<int>>& ans,int idx){
        int n=arr.size();
        if(idx==n||target<0){
            return;
        }
        if(target==0){
            if(s.find(combine)==s.end()){
            ans.push_back({combine});
            s.insert(combine);
            }
            return;
        }
        combine.push_back(arr[idx]);
        combsum(arr,target-arr[idx],combine,ans,idx+1); //include single
        combsum(arr,target-arr[idx],combine,ans,idx); //include multiple
        combine.pop_back();
        combsum(arr,target,combine,ans,idx+1);// exclude call

    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> combine;
        vector<vector<int>> ans;
        combsum(arr,target,combine,ans,0);
        return ans;
    }
    int main(){
        vector<int> arr={2,3,6,7};
        int target=7;
        vector<vector<int>> anss=combinationSum(arr, target);
        for(auto val:anss){
            for(auto x:val){
            cout<<x<<" ";
        }cout<<endl;}

    }