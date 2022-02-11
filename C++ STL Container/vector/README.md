# vector

## 0. vector_개요
> * vector은 사이즈가 변하는 순차 컨테이너(Sequence Container)이다.
> * vector은 동적 배열(Dynamic array)이다.
>
> ### 장점
> * vector는 array에 비해 저장공간을 관리하고 효율적으로, 동적으로 확장할 수 있다.
> * vector은 입력의 크기에 따라 용량을 동적으로 할당하기에 용이하다.
>
> ### 단점
> - 다차원 배열에선 array보다 복잡하다.
> - array에 비해 메모리를 더 많이 사용합니다.

## [1. vector_생성자](https://github.com/Hwan9915/Algorithm/blob/main/C%2B%2B%20STL%20Container/vector/vector_constructor.cpp)

- #### 자세한 설명은 링크안에 설명되어 있다.

  
## 2. vector_ 멤버 함수

### [2-1. vector_Modifiers(수정자)](https://github.com/Hwan9915/Algorithm/blob/main/C%2B%2B%20STL%20Container/vector/vector_modifiers.cpp)

assign, push_back, pop_back, clear, insert, erase

+ assign : 벡터에 새로운 요소들을 집어넣거나, 현재 요소를 대체하거나, 사이즈를 수정

+ push_back : 마지막 위치에 원소를 삽입

+ pop_back : 마지막 위치의 원소를 삭제

+ clear : 모든 원소를 삭제 

+ insert : vector의 임의의 위치에 원소를 삽입

+ erase : vector의 임의의 위치의 원소를 삭제


### [2-2. vector_Capacity(메모리 공간)](https://github.com/Hwan9915/Algorithm/blob/main/C%2B%2B%20STL%20Container/vector/vector_capacity.cpp)

+ size : vector의 size를 반환

+ max_size : vector의 원소를 최대로 담을 수 있는 max_size를 반환

+ capacity : vector의 현재 capacity의 size를 반환

+ reserve : vector의 capacity를 N으로 수정

+ resize : vector의 capacity를 N만큼 확보하고 number로 초기화 

### [2-3. vector_Iterators(반복자)](https://github.com/Hwan9915/Algorithm/blob/main/C%2B%2B%20STL%20Container/vector/vector_iterators.cpp)

+ begin : 첫 번째 요소를 가리키는 반복자를 반환

+ end : 마지막 요소의 '다음'을 가리키는 반복자를 반환

+ rbegin : 마지막 요소를 가리키는 역방향 반복자를 반환

+ rend : 첫 번째 요소보다 '이전'을 가리키는 역방향 반복자를 반환

+ cbegin : 첫 번째 요소를 가리키는 상수 반복자를 반환

+ cend : 마지막 요소의 '다음'을 가리키는 상수 반복자를 반환

+ crbegin : 마지막 요소를 가리키는 상수 역방향 반복자를 반환

+ crend : 첫 번째 요소보다 '이전'을 가리키는 상수 역방향 반복자를 반환

### [반복자에 관한 글](https://github.com/Hwan9915/Algorithm/tree/main/C%2B%2B%20Iterator)

### [2-4. vecotr_Element_access(요소 접근)](https://github.com/Hwan9915/Algorithm/blob/main/C%2B%2B%20STL%20Container/vector/vector_element_access.cpp)

+ operator[] : vector의 임의의 원소에 접근

+ at : vector의 임의의 원소에 접근

+ front: vector의 첫번째 요소를 반환

+ back : vector의 마지막 요소를 반환
