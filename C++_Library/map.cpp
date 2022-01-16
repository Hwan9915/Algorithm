#include<iostream>
#include<map>
using namespace std;
map<string,int> reset();

//반복자
//begin(),end(),rbegin(),rend()
//메모리
//empty(),size(),max_size()
//원소 접근
//operator[],at
//수정자
//insert,erase,swap,clear
//Operations(직역할만한 단어를 못찾아서..)
//find,count,lower_bound,upper_bound,equal_range
int main()
{
  //생성자
  map<string,int>a;
  map<string,int>b(a.begin(),a.end());
  a["k"]=2;
  //반복자(set에서 설명했으므로 생략)
  a.begin(); a.end(); a.rbegin(); a.rend();
  
  //메모리
  //empty
  //a가 비어있으면 0을 리턴한다. 비어있지 않으면 다른 값을 리턴한다.
  a.empty();
  //size
  //a의 사이즈를 리턴한다.
  a.size();
  //max_size
  //a의 최대 사이즈를 리턴한다.
  a.max_size();

  //원소 접근
  cout<<a["k"]<<endl;     //key가 "k"인 value값을 리턴한다.
  cout<<a.at("k")<<endl;  //key가 "k"인 value값을 리턴한다.

  //수정자
  //insert는 pair<iterator,bool>를 리턴한다.
  //성공 실패 여부는 pair.first는 삽입한 원소의 반복자, pair.second는 true를 반환. 단, 실패하면 false를 반환
  a.insert(pair<string,int>("a",2));  //방법 1
  a.insert({"c",5});                  //방법 2
  b.insert(a.begin(),a.find("c"));    //방법 3

  //erase는 삭제한 원소의 개수만큼 리턴한다.
  a.erase(a.begin());
  a.erase("a");
  a.erase(a.begin(),a.end()); //범위로 삭제하는 법

  //clear
  a.clear();  //a의 모든 원소를 삭제한다.

  //swap
  b.swap(a);  //a와 b를 바꾼다.

  //Operations
  //find 만약 찾는 것이 없다면 end()를 반환한다.
  if(a.find("a")!=a.end())
    cout<<"Find"<<endl;

  //count "a"라는 key값을 가진 원소들의 개수를 리턴한다.
  cout<<a.count("a")<<endl;

  a=reset();
  //lower_bound 
  //key값보다 '같거나' 큰 숫자가 처음으로 등장하는 반복자를 리턴한다.
  auto itL = a.lower_bound("b");
  itL--;
  if(a.begin()==itL)
    cout<<"it은 b를 가리킨다."<<endl;;

  //upper_bound 
  //key값 보다 큰 숫자가 처음으로 등장하는 반복자를 리턴한다.
  auto itU = a.upper_bound("d");
  if(--a.end()==itU)
    cout<<"it은 e를 가리킨다."<<endl;
  //equal_range
}


map<string,int> reset()
{
  map<string,int> a;
  a.insert({"a",1});
  a.insert({"b",2});
  a.insert({"c",3});
  a.insert({"d",4});
  a.insert({"e",5});
  return a;
}