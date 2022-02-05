#include<iostream>
#include<queue>
using namespace std;

//Ctrl + F 를 이용하면 빨리 찾을 수 있습니다.

int main()
{
  queue <int> Q;

  // empty 함수
  // Q에는 아무런 원소가 없기 때문에 empty()함수는 1을 반환
  if(Q.empty())
    cout<<"queue은 비어있음 \n";
  
  // push 함수
  Q.push(1); // 1
  Q.push(6); // 1 6
  Q.push(5); // 1 6 5 
  Q.push(7); // 1 6 5 7 
  Q.push(3); // 1 6 5 7 3

  // size 함수
  // Q의 사이즈는 5이기 때문에 5를 출력
  cout<<Q.size()<<"\n";  // 5

  // front 함수
  // Q에서 가장 앞ㅇ에 있는 원소는 1이기 때문에 1을 출력
  if(!Q.empty())  //만약, 원소가 없을경우 front함수가 오류를 범할 수 있기 때문에 조건문을 씀.
    cout<<Q.front()<<"\n";   // 1

  // back 함수
  // Q에서 가장 뒤에 있는 원소는 3이기 때문에 3을 출력
  if(!Q.empty())  //만약, 원소가 없을경우 back함수가 오류를 범할 수 있기 때문에 조건문을 씀.
    cout<<Q.back()<<"\n";   // 3


  // pop 함수
  // Q에서 가장 앞에 있는 원소를 제거
  if(!Q.empty())
  {
    cout<<"삭제될 원소는 "<<Q.front()<<" 이다.\n";
    //삭제될 원소는 1 이다.
    Q.pop(); // 6 5 7 3
  }

  // Q의 원소가 하나 줄었기에 4을 출력
  cout<<Q.size()<<"\n"; // 4
}