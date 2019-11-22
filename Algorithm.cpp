#include <vector>
#include <set>
#include <map>
#include <list>
#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;

/*
1. nonmodifying algorithm
2. modifying algorithm
3. removing algorithm
4. mutating algorithm
5. sorting algorithm
6. sorted range algorithm
7. numeric algorithm
*/

int main() {
	// 1. nonmodifying algorithm
	n = count(b,e,x); // [b,e)의 원소 중 x의 개수
	n = count(b,e,pred); //[b,e)의 원소 중 pred(*p)가 참인 개수
	p = find(b,e,x); // p는 구간 [b,e)에서 x와 같은 첫 원소의 반복자
	p = find_if(b,e,f) // p는 구간 [b,e)에 f(*p)가 참인 첫 원소를 가리키는 반복자
	f = for_each(b,e,f) // 구간 [b,e)의 모든 원소에 f(*p)를 적용
	k = max(a,b); k = max(a,b,f);
	p = max_element(b,e); p = max_element(b,e,f);
	k = min(a,b); k = min(a,b,f);
	p = min_element(b,e); p = min_element(b,e,f);
	p = search(b1,e1,b2,e2); //[b1,e1)에서 [b2,e2)와 같은 첫 순차열 반복자
	p = find_end(b1,e1,b2,e2); //[b1,e1)에서 [b2,e2)와 같은 마지막 순차열 반복자





	// 2. modifying algorithm
	p = copy(b,e,t); //구간 [b,e)의 원소를 [t,p)로 모두 복사
	fill(b,e,x); // 구간 [b,e)의 모든 원소를 x로 채운다
	fill(b,n,x); // [b,b+n)의 모든 원소를 x로 채운다
	iter_swap(p,q); // 반복자 p, q가 가리키는 원소를 교환한다
	p = merge(b,e,b2,e2,t); // merge_sort해서 [t,p)에 저장
	replace(b,e,x,x2) // [b,e)의 x인 원소를 x2로 수정
	replace(b,e,f,x2) // f(*p)가 참인 원소를 x2로 수정
	swap(a,b);




	
	// 3. removing algorithm
	p = remove(b,e,x); // [b,p)로 몰아넣음
	p = unique(b,e); // 중복 제거 -> [b,p)로 몰아넣음





	// 4. mutating algorithm
	bool = next_permutation(b,e); // 구간[b,e)의 순차열을 사전순 다음 순열이 되게한다. 마지막이라면 false 반환
	bool = next_permutation(b,e,f);
	bool = prev_permutation(b,e); 
	bool = prev_permutation(b,e,f);
	p = partition(b,e,f); // [b,p)와 [p,e)로 나눔
	p = stable_partition(b,e,f); //상대적인 순서 유지
	reverse(b,e);
	rotate(b,m,e); // 순차열을 왼쪽으로 회전한다 -> 왼쪽으로 m-b만큼

}
