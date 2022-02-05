#include<iostream>
#include<stack>
#include<queue>
#include<vector>

int main()
{
  //100 이라는 값이 3개 들어 가있는 큐
  std::deque<int> first_queue(3,100);

  //99 라는 값이 2개 들어간 벡터
  std::vector<int> second_vector(2,99);

  //단순히 스택으로 만든 경우
  std::stack<int> third_stack;

  //큐를 이용해서 스택을 만든 경우(큐를 복사해옴)
  std::stack<int> forth_stack_by_queue (first_queue);

  //벡터를 이용해서 스택을 만든 경우(벡터를 복사해온다.)
  std::stack<int,std::vector<int>> fifth_stack_by_vector (second_vector);
  
  std::cout<<"third_stack's size is "<<third_stack.size()<<std::endl;
  // third_stack's size is 0
  
  std::cout<<"forth_stack_by_queue's size is "<<forth_stack_by_queue.size()<<std::endl;
  // forth_stack_by_queue's size is 3

  std::cout<<"fifth_stack_by_vector's size is "<<fifth_stack_by_vector.size()<<std::endl;
  // fifth_stack_by_vector's size is 2
  
}