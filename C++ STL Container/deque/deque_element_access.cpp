#include<iostream>
#include<deque>
using namespace std;

void next_line()
{
  cout<<"\n";
}

//Ctrl + F 를 이용하면 빨리 찾을 수 있습니다.

int main()
{
  
  // 사이즈가 5이고 요소가 2,4,6,8,10인 덱 생성
  deque <int> D={2,4,6,8,10};
  
  // operator[]
  // deque의 요소에 접근할 수 있는 operator이다.
  for(int i=0;i<6;i++)
    cout<<D[i]<<" ";  // 2 4 6 8 10
  next_line();

  // at 함수
  // queue의 요소에 접근 할 수 있는 함수이다.
  for(int i=0;i<6;i++)
    cout<<D.at(i)<<" "; // 2 4 6 8 10
  next_line();

  // at과 operator[]의 차이는 범위를 점검하는 것의 차이

  // operator[]은 deque의 사이즈를 벗어날 경우 오류 발생
  // V[7]; 오류 발생

  // at 함수는 out_of_range 예외를 발생
  // V.at(7); out_of_range 예외를 생성

  // front 함수
  // 가장 앞에 있는 원소를 반환
  cout<<D.front()<<"\n"; // 2

  // back 함수
  // 가장 뒤에 있는 원소를 반환 
  cout<<D.back()<<"\n"; // 10
}