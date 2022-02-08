#include<iostream>
#include<vector>

//Ctrl + F 를 이용하면 빨리 찾을 수 있습니다.

int main()
{
  // 벡터 생성자
  // 1. default constructor
  // 기본 벡터 생성자
  std::vector<int> first;

  // 2. fill constructor 
  // 크기가 2고 값이 100으로 채워져 있는 범위 벡터 생성자
  std::vector<int> second(2,100);

  // 3. range constructor
  // 반복자의 범위만큼 복사하는 생성자
  std::vector <int> third(second.begin(),second.end());

  // 4. copy constructor
  // 벡터를 복사하는 생성자
  std:: vector <int> forth (third);
  
}