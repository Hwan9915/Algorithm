#include<iostream>
#include<deque>
#include<queue>
#include<vector>

int main()
{
  //100 이라는 값이 3개 들어 가있는 덱
  std::deque<int> first_deck(3,100);
  std::vector<int> second_vector(4,200);


  //큐 생성자

  //단순히 큐로 만든 경우
  std::deque<int> second_deque;

  //덱을 이용해서 큐를 만든경우
  std::deque<int> third_queue_by_deque (first_deck);

  
  std::cout<<"second_deque's size is "<<second_deque.size()<<std::endl;
  // second_deque's size is 0
  
  std::cout<<"third_queue_by_deque's size is "<<third_queue_by_deque.size()<<std::endl;
  // third_deque_by_queue's size is 3
}