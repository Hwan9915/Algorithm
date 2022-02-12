#include<iostream>
#include<deque>
using namespace std;

//Ctrl + F 를 이용하면 빨리 찾을 수 있습니다.

int main()
{
  deque <int> first,second(2,3);

  // assign 함수
  // 덱에 새로운 요소들을 집어넣거나, 현재 요소를 대체하거나, 사이즈를 수정할 수 있다.
  // 1. assign(InputIterator first, InputIterator last)
  // 반복자를 이용해 덱의 요소에 값을 할당
  first.assign(second.begin(),second.end());  // 3 3 3

  // 2. assign(size,number)
  // 있던 요소들을 size와 number을 통해 원래 크기는 4이고 10이라는 값을 가진 덱으로 할당 
  first.assign(4,10); // 10 10 10 10

  // push_back(value) 함수
  // 덱의 마지막에 value값을 가진 요소를 추가하는 함수
  first.push_back(2); // 10 10 10 10 2

  // push_front(value) 함수
  // 덱의 앞에 value값을 가진 요소를 추가하는 함수
  first.push_front(3); // 3 10 10 10 2

  // pop_back() 함수
  // 덱의 마지막 요소를 삭제하는 함수
  first.pop_back(); // 3 10 10 10 10

  // pop_front() 함수
  // 덱의 앞 요소를 삭제하는 함수
  first.pop_front(); // 10 10 10 10

  // clear 함수
  // 덱의 요소를 모두 삭제하는 함수
  first.clear();

  first={1,2,3};
  
  // insert 함수
  // 1. iterator insert (iterator position,val) (단일 요소 추가)
  // 반복자의 position에 val 값을 추가, 추가한 곳의 반복자를 리턴
  auto it = first.begin();
  it=first.insert(it,3);
  cout<<*it<<"\n";  // 3

  // 2. void insert (iterator position, n, val)
  // 반복자의 position부터 val값을 가진 n개의 숫자를 추가
  it = first.begin();
  first.insert(it,1,300);
  for(int i=0;i<first.size();i++)
    cout<<first[i]<<" ";  // 300 3 1 2 3
  cout<<"\n";

  // 3. void insert (iterator position, InputIterator first, InputIterator last) (범위 요소 추가)
  // 반복자의 position부터 반복자의 범위 만큼 값을 추가
  int K[]={7,8,9};
  first.insert(it,K,K+3);
  for(int i=0;i<first.size();i++)
    cout<<first[i]<<" ";  // 300 7 8 9 3 1 2 3
  cout<<"\n";

  // erase 함수
  // 1. iterator erase (const_iterator position) (단순 요소 삭제)
  // 반복자의 position의 요소 1개를 삭제하고 삭제한 곳의 반복자를 리턴
  it=first.begin();
  it=first.erase(it); // 300을 삭제하고 300이 있었던 위치의 반복자를 리턴한다.
  cout<<*it<<"\n"; // 7
  
  // 2. iterator erase (const_iterator first, const_iterator last) (범위 요소 삭제)
  // 반복자의 범위(first부터 last 이전까지)만큼 삭제하고 삭제한 곳의 반복자를 리턴한다.
  auto it_first=first.begin();
  auto it_second=first.begin()+2;
  it=first.erase(it_first,it_second); // 300과 7를 삭제
  // 9 3 1 2 3
  cout<<*it<<"\n"; // 9

  //남은 덱 리스트
  for(int i=0;i<first.size();i++)
    cout<<first[i]<<" "; // 9 3 1 2 3
}