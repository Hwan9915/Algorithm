#include<iostream>
#include<stack>
using namespace std;

//Ctrl + F 를 이용하면 빨리 찾을 수 있습니다.

int main()
{
  stack <int> st;

  // empty 함수
  // st에는 아무런 원소가 없기 때문에 empty()함수는 1을 반환
  if(st.empty())
    cout<<"stack은 비어있음\n";
  
  // push 함수
  st.push(2); // 2
  st.push(3); // 2 3
  st.push(5); // 2 3 5
  st.push(7); // 2 3 5 7

  // size 함수
  // st의 사이즈는 4이기 때문에 4를 출력
  cout<<st.size()<<"\n";  // 4

  // top 함수
  // st에서 가장 위에 있는 원소는 7이기 때문에 7을 출력
  if(!st.empty())  //만약, 원소가 없을경우 top함수가 오류를 범할 수 있기 때문에 조건문을 씀.
    cout<<st.top()<<"\n";   // 7

  // pop 함수
  // st에서 가장 위에 있는 원소를 제거
  if(!st.empty())
    st.pop(); //2 3 5

  // st의 원소가 하나 줄었기에 3을 출력
  cout<<st.size()<<"\n"; // 3

  // st의 가장 위에 있는 원소는 5 이기 때문에 5를 출력
  if(!st.empty())
    cout<<st.top(); // 5
}