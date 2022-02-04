# C++ STL Container

## 순차 컨테이너(Sequence containers)
array(배열)

vector,string (동적 배열)

deque (양방향 큐)

forward_list(단방향 리스트)

list (양방향 리스트)

## 컨테이너 어댑터(Container adaptors)

stack(FILO) : First Input Last Out, 후입선출

queue(FIFO) : First Input First Out, 선입선출

priority_queue(우선순위 큐) : 들어간 순서와 상관없이 우선순위가 높은 데이터가 가장 먼저 나오는 것

## 정렬된 연관 컨테이너(Associative containers)
###### 공통적인 특징 : 노드 기반, 균형 이진트리, 정렬되어 있음.

set(셋) : 유일한 key의 집합

map(맵) : 유일한 key와 value의 집합

multiset(멀티셋) :중복허용된 key의 집합

multimap(멀티맵) :중복허용된 key와 value의 집합


## 비정렬된 연관 컨테이너(Unordered associative containers)
###### 공통적인 특징 : Hash 기반, 비정렬

Unordered_set : 유일 key Hash

Unordered_multiset : 중복허용된 key hash

Unordered_map : 유일 key와 value의 Hash

Unordered_multimap : 중복허용된 key와 value의 Hash

reference: https://www.cplusplus.com/reference/stl/
https://www.geeksforgeeks.org/stack-in-cpp-stl/
https://en.cppreference.com/w/cpp/container/stack