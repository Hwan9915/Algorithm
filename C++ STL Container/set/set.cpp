#include<iostream>
#include<set>
using namespace std;

template<typename T>
struct cmp{
  bool operator()(T a,T b) const
  {
    return a>b;
  }
};
// 정렬 기준을 정함

//생성자
set<int> set_constructor(); 
//정렬기준을 직접 정한다.
set<int,cmp<int>> set_custom_cmp(); 
//begin()과 end()를 이용해서 원소 출력
void print_set_by_begin_end_iterator(set<int>);
//rbegin()과 rend()를 이용해서 원소를 역순으로 출력
void print_set_by_rbegin_rend_iterator(set<int>);

void print_set(set<int>);
//count()를 통해 원소가 있는지 없는지 확인한다. 있으면 1을 리턴, 없으면 0을 리턴한다.


int main()
{
  //생성자
  set<int> c=set_constructor();

  //cmp를 통해 정렬 기준을 직접 정한다.
  auto K=set_custom_cmp();

  //첫번째 원소를 가리키는 반복자를 리턴한다.
  auto it_begin=c.begin();
  //마지막 원소의 다음을 가리키는 반복자를 리턴한다.
  auto it_end=c.end();

  //begin()과 end()를 이용해서 원소 출력
  for(;it_begin!=it_end;it_begin++)
    cout<<*it_begin<<" "; //1 2 3 4
  cout<<endl;

  // begin, end 와 반대로 작동하는 함수, 특히 역순으로 출력하고 싶을 때 사용
  auto it_rbegin=c.rbegin(); 
  auto it_rend=c.rend(); 

  //rbegin()과 rend()를 이용해서 원소를 역순으로 출력
  for(;it_rbegin!=it_rend;it_rbegin++)
    cout<<*it_rbegin<<" "; //4 3 2 1
  cout<<endl;

  //clear()을 통해 set의 모든 원소를 제거한다.
  c.clear();

  c=set_constructor();

// c안에 들어 있는 1의 개수를 반환한다. set는 중복 원소가 없기 때문에 0 or 1 을 반환한다.
  c.count(1); // 1

  //원소 4를 삽입합니다. 삽입된다면 자동 정렬 됩니다. 성공 실패 여부는 pair<iterator,bool>
  //pair.first는 삽입한 원소의 반복자, pair.second는 true를 반환. 단, 실패하면 false를 반환
  c.insert(4);
              
  //it이 가리키는 곳부터  k를 넣을 위치를 찾아 넣는다.
  //c.insert(it,k) 
  c.erase(c.begin());//it이 가리키는 원소를 제거하고 제거한 위치를 가리키는 it을 반환
  //c.erase(start,end) start부터 end 이전까지 원소를 제거합니다
  c.find(2);//2를 가리키는 반복자를 반환. 없다면 c.end()를 반환한다 
  //a.swap(b);//a와 b를 바꿔줍니다.
  //c.upper_bound(k) k가 끝나는 구간의 반복자를 반환
  //c.lower_bound(k)가 시작하는 구간의 반복자를 반환
  //c,equal_range(k)k가 시작하는 구간과 끝나는 구간의 반복자를 pair 객체로 반환한다.
  //pair.first는 c.lower_bound pair.second는 pair.second와 같다.
  c.size(); //c의 사이즈==원소의 개수를 반환한다.
  c.max_size(); // 최대 사이즈를 반환한다.
}

set<int> constructor()  
{
  set<int>b;  //1번째 방법
  set<int>a={1,2,3,4};//2번재 방법
  return a;
}

set<int,cmp<int>> custom_cmp()
{
  set<int,cmp<int>>d={4,2,5,1}; //3번째 방법
  for(auto K:d)  cout<<K<<" "; //5 4 2 1
  cout<<endl;
  return d;
}

void print_set(set<int> s)
{
  for(auto K:s) cout<<K<<" ";
  cout<<endl;
}