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
  deque <int> D={1,3,5,7,9};

  // 반복자(iterator), begin 함수와 end 함수
  deque <int> begin_end_D={1,2,3,4,5};

  // begin 함수는 덱의 첫 번째 요소를 가리키는 반복자를 반환
  // end 함수는 덱의 마지막 요소보다 '다음'을 가리키는 반복자를 반환
  for(auto it = begin_end_D.begin();it!=begin_end_D.end();it++)
    cout<<*(it)<<" "; // 1 2 3 4 5
  next_line();

  // 역방향 반복자(reverse iterator), rbegin 함수와 rend 함수
  // 역방향 반복자는 뒤로 반복
  deque <int> rbegin_rend_D (5);

  // rbegin 함수는 덱의 마지막 요소(역방향 시작)를 가리키는 역방향 반복자를 반환
  auto rit= rbegin_rend_D.rbegin();

  // rend 함수는 덱의 첫 번째 요소(역방향의 끝)보다 '앞'을 가리키는 역방향 반복자를 반환
  // 덱의 마지막 요소부터 처음순으로 5,4,3,2,1 순으로 추가
  for(int i=0; rit!=rbegin_rend_D.rend();++rit)
    *rit=++i; // 5 4 3 2 1
  
  // 반복자와 역방향 반복자 사용법
  // 덱을 순서로 출력(반복자)
  for(auto it=D.begin();it!=D.end();it++)
    cout<<*(it)<<" "; //1 3 5 7 9
  next_line();

  // 덱을 역순으로 출력(역방향 반복자)
  for(auto rit=D.rbegin();rit!=D.rend();rit++)
    cout<<*(rit)<<" "; //9 7 5 3 1
  next_line();

  // 상수 반복자(const iterator), cbegin 함수와 cend 함수
  // iterator과 차이: iterator은 가리키는 곳의 값을 변경할 수 있지만 const iterator은 가리키는 곳의 값을 변경할 수 없다.

  // cbegin 함수는 덱의 첫 번째 요소를 가리키는 상수 반복자를 반환
  // cend 함수는 덱의 마지막 요소보다 '다음'을 가리키는 상수 반복자를 반환
  for (auto it = D.cbegin(); it != D.cend(); it++)
    cout<<*(it)<<" "; //1 3 5 7 9
  next_line();

  auto it_= D.cbegin();
  //*(it_)= 7; // 이런식으로 수정하려면 it은 상수 반복자여서 컴파일 오류를 발생시킴
  
  // 상수 역방향 반복자(const reverse iterator), crbegin 함수와 cend 함수

  // crbegin 함수는 덱의 마지막 요소를 가리키는 상수 역방향 반복자를 반환
  // crend 함수는 덱의 첫 번째 요소보다 '앞'을 가리키는 상수 역방향 반복자를 반환
  for (auto rit = D.crbegin(); rit != D.crend(); rit++)
    cout<<*(rit)<<" ";  //9 7 5 3 1
  next_line();

  auto rit_= D.crbegin();
  //*(rit_)= 5; // 이런식으로 수정하려면 rit은 상수 반복자여서 컴파일 오류를 발생시킴
}