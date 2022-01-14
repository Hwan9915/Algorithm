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

int main()
{
  //생성자
  set<int> a;
  set<int> b(a.begin(),a.end());
  set<int> c={1,2,3,4};
  set<int,cmp<int>>d={4,2,5,1};  //cmp를 통해 정렬 기준을 정한다.
  for(auto K:d)  
    cout<<K<<" "; //5 4 2 1
  cout<<endl;

  auto it_begin=c.begin();  //첫번째 원소를 가리키는 반복자를 리턴
  auto it_end=c.end();    //마지막 원소의 다음을 가리키는 반복자를 리턴
  for(auto it=it_begin;it!=it_end;it++)
    cout<<*it<<" "; //1 2 3 4
  cout<<endl;

  c.rbegin(); 
  c.rend(); // begin, end 와 반대로 작동하는 함수, 특히 역순으로 출력하고 싶을 때 사용
  for(auto it=c.rbegin();it!=c.rend();it++)
    cout<<*it<<" "; //4 3 2 1
  cout<<endl;

  d.clear(); //모든 원소 제거

  c.count(1); // c안에 들어 있는 1의 개수를 반환한다.
              // set는 중복 원소가 없기 때문에 0 or 1 을 반환한다.
              
  c.insert(5);//원소 5를 삽입합니다. 삽입된다면 자동 정렬 됩니다.
              // 성공 실패 여부는 pair<iterator,bool>
              //pair.first는 삽입한 원소의 반복자, pair.second는 true를 반환. 단, 실패하면 false를 반환
  //c.insert(it,k) //it이 가리키는 곳부터  k를 넣을 위치를 찾아 넣는다.
  c.erase(c.begin());//it이 가리키는 원소를 제거하고 제거한 위치를 가리키는 it을 반환
  //c.erase(start,end) start부터 end 이전까지 원소를 제거합니다
  c.find(2);//2를 가리키는 반복자를 반환. 없다면 c.end()를 반환한다 
  a.swap(b);//a와 b를 바꿔줍니다.
  //c.upper_bound(k) k가 끝나는 구간의 반복자를 반환
  //c.lower_bound(k)가 시작하는 구간의 반복자를 반환
  //c,equal_range(k)k가 시작하는 구간과 끝나는 구간의 반복자를 pair 객체로 반환한다.
  //pair.first는 c.lower_bound pair.second는 pair.second와 같다.
  c.size(); //c의 사이즈==원소의 개수를 반환한다.
  c.max_size(); // 최대 사이즈를 반환한다.
}
