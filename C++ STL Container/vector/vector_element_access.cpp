#include<iostream>
#include<vector>
using namespace std;

void next_line()
{
  cout<<"\n";
}

//Ctrl + F 를 이용하면 빨리 찾을 수 있습니다.

int main()
{
  // 사이즈가 6이고 요소가 2,4,6,8,10,12인 벡터 생성
  vector <int> V={2,4,6,8,10,12};
  cout<<V.max_size();
  
  // operator[]
  // vector의 요소에 접근할 수 있는 operator이다.
  for(int i=0;i<6;i++)
    cout<<V[i]<<" ";  // 2 4 6 8 10 12
  next_line();

  // at 함수
  // vector의 요소에 접근 할 수 있는 함수이다.
  for(int i=0;i<6;i++)
    cout<<V.at(i)<<" "; // 2 4 6 8 10 12
  next_line();

  // at과 operator[]의 차이는 범위를 점검하는 것의 차이

  // operator[]은 vector의 사이즈를 벗어날 경우 오류 발생
  // V[7]; 오류 발생

  // at 함수는 out_of_range 예외를 발생
  // V.at(7); out_of_range 예외를 생성

  // front 함수
  // 가장 앞에 있는 원소를 반환
  cout<<V.front()<<"\n"; // 2

  // back 함수
  // 가장 뒤에 있는 원소를 반환 
  cout<<V.back()<<"\n"; // 12
}