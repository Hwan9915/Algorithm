#include<iostream>
#include<deque>
using namespace std;

//Ctrl + F 를 이용하면 빨리 찾을 수 있습니다.

int main()
{
  // 사이즈가 3이고 요소가 모두 100인 덱 생성
  deque <int> D (3,100);

  // size() 함수
  // 덱의 사이즈를 반환하는 함수
  cout<<D.size()<<"\n"; // 3

  // max_size() 함수
  // 덱이 가질 수 있는 최대 사이즈를 반환하는 함수
  cout<<D.max_size()<<"\n"; 

  // empty() 함수
  // 덱이 비어있으면 1을, 비어있지 않으면 0을 반환
  deque <int> De;
  cout<<De.empty()<<" "<<D.empty()<<"\n";
  //De는 비어있으므로 1을 출력, D는 비어있지 않으므로 0을 출력

  // resize 함수
  // 1. void resize (N);
  // 덱의 사이즈를 n으로 바꾸는 함수
  D.resize(2);

  // 2. void resize (N,number);
  // 덱이 사용할 공간을 N으로 바꾸고 원래 갖고 있던 공간보다 더 할당한 나머지 공간을 number로 초기화 하는 함수
  // 2번째 매개변수의 값이 없으면 0으로 채움, default값은 0
  D.resize(8,3);
  for(int i=0;i<8;i++)
    cout<<D[i]<<" ";  //100 100 3 3 3 3 3 3 
}