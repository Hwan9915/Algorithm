#include<iostream>
#include<vector>
using namespace std;

//Ctrl + F 를 이용하면 빨리 찾을 수 있습니다.

int main()
{
  // 사이즈가 5이고 요소가 모두 200인 벡터 생성
  vector <int> V (5,200);

  // size() 함수
  // 벡터의 사이즈를 반환하는 함수
  cout<<V.size()<<"\n"; // 5

  // max_size() 함수
  // 벡터가 가질 수 있는 최대 사이즈를 반환하는 함수
  cout<<V.max_size()<<"\n"; 

  // capacity() 함수
  // 현재 벡터에 할당할 수 있는 요소의 수를 반환하는 함수
  V.push_back(5);
  cout<<V.size()<<V.capacity()<<"\n"; //6 10 
  // 벡터의 사이즈는 5였지만, 하나의 요소를 추가
  // 벡터의 사이즈는 6이되었지만, 수용할 수 있는 공간은 2배가 됨
  // 그래서  size는 6이 출력, capacity는 10(5*2)이 출력

  // empty() 함수
  // 벡터가 비어있으면 1을, 비어있지 않으면 0을 반환
  vector <int> ve;
  cout<<ve.empty()<<" "<<V.empty()<<"\n";
  //ve는 비어있으므로 1을 출력, V는 비어있지 않으므로 0을 출력

  // reserve(N) 함수
  // 벡터가 사용할 공간을 N만큼 확보하는 함수

  ve.reserve(9);
  cout<<ve.size()<<"\n"; // 9
  //벡터의 사이즈가 0 이었다가 9로 바뀜

  // resize(N,number=0) 함수
  // 벡터가 사용할 공간을 N만큼 확보하고 나머지 공간을 number로 초기화 하는 함수
  // 2번째 매개변수의 값이 없으면 0으로 채움, default값은 0
  V.resize(8,3);
  for(int i=0;i<8;i++)
    cout<<V[i]<<" ";  //200 200 200 200 200 5 3 3 

  // reserve와 resize의 차이는 확보하는 메모리를 초기화 할 수 있는가 없는가의 차이다.
}