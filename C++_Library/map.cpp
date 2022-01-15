#include<iostream>
#include<map>
using namespace std;

//반복자
//begin(),end(),rbegin(),rend()
//메모리
//empty(),size(),max_size()
//원소 접근
//operator[],at
//수정자
//insert,erase,swap,clear
//Operations
//find,count,lower_bound,upper_bound,equal_range
int main()
{
  //생성자
  map<string,int>a;
  map<string,int>b(a.begin(),a.end());
  //반복자(set에서 설명했으므로 생략)
  a.begin(); a.end(); a.rbegin(); a.rend();


}