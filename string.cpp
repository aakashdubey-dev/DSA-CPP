//code for understanding the character array
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
//     char str[]="aakash dubey";
//     cout<<str[7]<<strlen(str)<<endl;

// return 0;
// }

//code for taking the input from user 
// #include<iostream>
// #include<string.h>
// using namespace std;
// int main(){
//     char ch[10];
//     cout<<"Enter the value of ch: ";
//     // cin>>ch;
//     // cin.getline(ch,100);
//     //use of delimiter
//     cin.getline(ch,100,'@');

//     cout<<"output: "<<ch;

// return 0;
// }

//code for count the length of string by using for loop
// #include<iostream>
// using namespace std;
// int main(){
//     int len=0;
//     char ch[100]="future engineer";
//     for(int i=0;i<ch[i]!='\0';i++){
//        len++; 
//     }
//     cout<<"the length:"<<len;

// return 0;
// }

//string 

//reverse an string 
//in character array
/*
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char ch[10]="dunda";
    int n=6;

    //by for loop
    // for(int i=5;i>=0;i--){
    //     cout<<ch[i]<<" ";
    // }
    //by while loop
    int st=0; int end=n-1;
    while(st<end){
        swap(ch[st],ch[end]);
        st++;
        end--;
    }
    for(int i=0;i<6;i++){
        cout<<ch[i];
    }
    return 0;
}*/

//reverse in string is same as char array but also
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str="aakash.";
//     reverse(str.begin(),str.end());
//     for(char ch: str){
//         cout<<ch;
//     }

// return 0;
// }

//code to check string is palindrome or not
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter the string: ";
//     cin>>str;
//     int st=0; int end=str.length()-1;  bool flag=false;
//     while(st<end){
//         if(str[st++]!=str[end--]){
//             flag=true;
//             break;
//         }
//     }
//     if(flag==true) cout<<"not palindrome";
//     else if(flag==false) cout<<"palindrome";
// return 0;
// }

//code for reverse the word in string
// #include<iostream>
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s="aakash dubey"; string ans="";
//     reverse(s.begin(),s.end());
//       for(int i=0;i<s.length();i++){
//         string word="";
//         while(i<s.length()&&s[i]!=' '){
//             word+=s[i];
//             i++;
//         }
//         reverse(word.begin(),word.end());
//         if(word.length()>0){
//             ans+=" "+word;
//         }
//     }
//     cout<<ans.substr(1);
// return 0;
// }


#include<iostream>
#include<string>
using namespace std;
int main(){
    string st="aakash";
    for(char ch: st){
        cout<<ch;
    }
return 0;
}


