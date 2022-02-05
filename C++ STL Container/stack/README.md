# stack

## 0. stack_개요
> * ### stack은 LIFO(후입선출) 방식이다.
> > - LIFO(Last Input First Output): 먼저 들어온 자료가 먼저 출력된다.
>
> * stack은 다른 자료구조와는 달리 임의의 원소에 접근 및 수정할 수 없습니다.
>
> * 오로지 마지막 위치에만 접근, 수정, 삽입 및 삭제를 할 수 있습니다.

### 0-1. vector를 써도 되지만 굳이 stack으로 쓰는이유
> * stack은 오로지 LIFO로만 작동하기 때문에 다른 용도로 사용할 수 없다는 것을 바로 알 수 있습니다.
>
> * But, vector를 사용하면 stack으로 사용을 안 할 수 있기 때문에 가독성이 떨어질 수 있습니다. 
>
> * vector와 stack에서 성능은 큰 차이가 없습니다. 가독성을 위해 stack을 쓰기도 합니다.

## 1. stack_생성자

- ### [생성자](https://github.com/Hwan9915/Algorithm/blob/main/C%2B%2B%20STL%20Container/stack/stack_constructor.cpp) 
  - 자세한 설명은 링크안에 설명되어 있다.

  
## 2. stack_ 멤버 함수

+ empty() : stack이 비어있으면 true 그렇지 않으면 false를 반환한다.


+ size() : stack의 size를 반환한다.


+ push(val) : top에 원소를 추가한다.
  

+ top() : stack에 가장 마지막 원소를 반환한다.
  - stack이 비어있을 경우 오류가 발생한다.


+ pop() : top에 있는 원소를 제거한다.
  - stack이 비어있을 경우 오류가 발생한다.