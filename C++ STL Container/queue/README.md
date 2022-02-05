# queue

## 0. queue_개요
> * ### queue는 FIFO(선입선출) 방식이다.
>   - FIFO(First Input First Output): 먼저 들어온 자료가 먼저 출력된다.
>
> * queue는 다른 자료구조와는 달리 처음과 마지막 원소를 제외하곤 임의로 접근할 수 없다.
>
> * 오로지 처음 위치는 접근과 삭제를 할 수 있고 마지막 위치는 접근, 수정과 삽입을 할 수 있습니다.

### 0-1. vector를 써도 되지만 굳이 queue를 쓰는이유
> * queue는 FIFO로만 작동하기 때문에 다른 용도로 사용할 수 없다는 것을 바로 알 수 있습니다.
>
> * But, vector를 사용하면 queue로 사용을 안 할 수 있기에 가독성이 떨어질 수 있습니다. 
>
> * vector와 queue에서 성능은 큰 차이가 없습니다. 가독성을 위해 queue을 쓰기도 합니다.

## [1. queue_생성자](https://github.com/Hwan9915/Algorithm/blob/main/C%2B%2B%20STL%20Container/queue/queue_constructor.cpp)

- ### 자세한 설명은 링크안에 설명되어 있다.

  
## [2. queue_ 멤버 함수](https://github.com/Hwan9915/Algorithm/blob/main/C%2B%2B%20STL%20Container/queue/queue.cpp)

+ empty() : queue가 비어있으면 true 그렇지 않으면 false를 반환한다.


+ size() : queue의 size를 반환한다.


+ push(val) : queue의 back에 원소를 추가한다.
  

+ pop() : queue의 front에 있는 원소를 제거한다.
  - queue이 비어있을 경우 오류가 발생한다.


+ front() : queue에 가장 앞에 있는 원소를 반환한다.
  - queue이 비어있을 경우 오류가 발생한다.


+ back() : queue에 가장 마지막 원소를 반환한다.
  - queue이 비어있을 경우 오류가 발생한다.
