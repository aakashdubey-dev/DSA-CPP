//standard template library 

//vector
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={8,6,5};
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.pop_back();

//     for(int value: vec){
//         cout<<value<<" ";
//     }
//     cout<<"size:"<<vec.size()<<endl;
//     cout<<"capacity:"<<vec.capacity()<<endl;

// return 0;
// }

//insert ,erase clear and empty
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={1,2,3,4,5};
    // vec.erase(vec.begin());
    //  vec.erase(vec.begin()+2,vec.begin()+5);
        // vec.insert(vec.begin()+2,100);
//         vec.clear();
//     cout<<"the vector is :"<<vec.empty()<<endl;
      
//     for(int val:vec){
//         cout<<val<<" ";
//     }
// return 0;
// }

//iterators(acess the elemrnt of container once at a time)
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec  ={1,2,3,4};
//     vector<int> :: iterator itr; or niche wala
//      auto:: iterator itr;

//     for( itr=vec.begin();itr<vec.end();itr++){
//         cout<<*itr<<endl;
//     }

// return 0;
// }


//list(also called double linked list coz added the element from both side)
//list(tranversing is not allowed in list)
// #include<iostream>
// #include<list>
// using namespace std;
// int main(){
//     list<int> l={1,2,3,4};
//     l.pop_back();    //same all function as vector
//     l.push_front(95);
//     l.pop_front();
//     // cout<<l[2];   // generate error

//     for (int val: l){
//         cout<< val<<" ";
//     }
// return 0;}

//deque(also called double queue)
//same as list but it allows dynamic memory allocation
// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//     deque<int> d={1,2,3,4,5};
//     d.pop_front();
//     cout<<d[3]<<endl;
//     for(int val: d){
//         cout<<val<<" ";
//     }
// return 0;
// }

//pair
// #include<iostream>
// #include<utility>
// using namespace std;
// int main(){
// //     pair<int ,string> p={12,"aakash"};
// //         cout<<p.first<<" "<<p.second;
// //         //  cout<<p.second<<" ";
// //pair of pair
// // pair<int ,pair<int,int>> pp={123,{12,34}};
// // cout<<pp.first<<" "<<pp.second.first<<" "<<pp.second.second;

// //
// return 0;
// }

//pair in any other stl container
// #include<iostream>
// #include<vector>
// #include<utility>
// using namespace std;
// int main(){
//     vector<pair<int ,int>> vec ={{1,2},{3,4}};
//     vec.push_back({11,22});
//     vec.emplace_back(11,22);  //difference between push and empalce is here
//     for(pair<int,int> p:vec){
//         cout<<p.first<<" "<<p.second<<endl;    
//     }
// return 0;
// }

//stack(based on last in first out(LIFO))
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);

//     // cout<<s.top()<<endl;
//     // while(!s.empty()){
//     //     cout<< s.top()<<endl;
//     //     s.pop();
//     // }
//     //swap 
//     stack<int> s1;
//     s1.swap(s);
//     cout<<s.size()<<endl;
//     cout<<s1.size()<<endl;
// return 0;
// }

//queue 
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     cout<<q.size()<<endl;

//     while(!q.empty()){
//         cout<<q.front()<<endl;
//         q.pop();
//     }
//     all the function is same as stack
// return 0;
// }

//priority queue
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//     //priority_queue<int> pr;  //in decending order
//     priority_queue<int, vector<int>,greater<int>> pr;
//     pr.push(11);
//      pr.push(12);
//       pr.push(13);
//        pr.push(14);
//        while(pr.size()>0){
//         cout<<pr.top()<<" ";
//         pr.pop();
//        }
// return 0;
// }

// map 
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<string, int> m;
//     m.insert({"aakash",02});
//     m.emplace("rohan",12);
//     m["hulk"]=01;
//     m["aakash"]=03;
//     if(m.find("rahul")!=m.end()){
//         cout<<"found yehhh"<<endl;
//     }else{
//         cout<<"not found"<<endl;
//     }
//     cout<<m["rohan"]<<endl;

//     for( auto val: m){
//         cout<<val.first<<" "<<val.second<<endl;
//     }
// return 0;
// }

//multimap
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     multimap<string,int> mm;
//      mm.insert({"aakash",02});
//      mm.emplace("aakash",03);
//      for(auto val:mm){
//         cout<<val.first<<" "<<val.second<<endl;
//      }
     
// return 0;
// }

//unordered map
// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     unordered_map<int ,string> un;
//     un.emplace(101,"aakash");
//     un.emplace(101,"aakash");
//     un.emplace(102,"ff");
//     un.emplace(103,"loki");

//     for(auto val: un){
//         cout<<val.first<<" "<<val.second<<endl;
//     }

// return 0;
// }

//set(same as map)
// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int> s;
//     s.insert(1);
//     s.insert(2);
//     s.insert(3);
//     s.insert(4);
//     s.insert(5);

//     cout<<*s.upper_bound(3)<<endl;

//     for(auto val:s){
//         cout<<val<<endl;
//     }

// return 0;
// } //multi set and unordered set (same work as map)

//algorithm for (sorting)
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> vec={2,5,9,10,1};
//     int n=5;
//     sort(vec.begin(),vec.end());

// return 0;
// }


//custom cpmparator
// #include<iostream>
// #include<utility>
// #include<vector>
// #include<algorithm>
// using namespace std;
//  bool co( pair<int ,int> p1, pair<int ,int> p2){   //custom comparator
//         if(p1.second<p2.second) {return true;}
//         if(p1.second>p2.second) {return false;}
//         if(p1.first<p2.first) {return true;}
//         else return false;
//     }
// int main(){
//         vector<pair<int,int>> vec={{1,2}} ;
    
//     vec.push_back({1,5});
//     vec.push_back({3,4});
//     sort(vec.begin(),vec.end(),co);
//     for(auto val: vec){
//         cout<<val.first<<" "<<val.second<<endl;
//     }
// return 0;
// }

//reverse  , next permuattion ,swap, MAX , MIN
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> vec={1,2,3,4,5};

//     // reverse(vec.begin() ,vec.end());
//     //  reverse(vec.begin()+1,vec.begin()+5);
//     swap(vec[3],vec[4]);
//     int a=*min_element(vec.begin(),vec.end());
//     cout<<"the max element:"<<*max_element(vec.begin(),vec.end())<<endl;
//     cout<<a<<endl;
//     for(int val: vec){
//         cout<<val<<" ";
//     }
// return 0;
// }