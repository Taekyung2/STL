#include <set>
#include <map>
using namespace std;

/*
#set
1. set은 대표적인 연관 컨테이너이자 노드 기반 컨테이너
2. 특정 정렬 기준에 의해 원소가 자동 정렬되는 컨테이ㅓ
3. search를 로그 시간에 수행, 균형 이진 트리
4. 양방향 반복자

#map
1. set과 동일, value와 key로 이루어짐
2. operator[] 사용 가능 -> m[3] = 7;
*/

int main () {
	// 생성자
	set<int> s;
	set<int> s(pred);
	set<int> s(s2);
	set<int> s(b,e);
	set<int> s(b,e,pred);
	s.clear();
	int n = s.count(k); //원소 k의 개수를 반환
	s.empty();
	pr = s.equal_range(k); //pr은 k원소의 반복자 구간인 pair 객체 -> multiset
	q = s.erase(p); //p가 가리키는 원소 삭제, q는 그 다음 원소 가리킴
	q = s.erase(b,e);
	n = s.erase(k); // k원소를 모두 제거한다. n은 제거한 개수
	p = s.find(k); // p는 k의 위치를 가리키는 반복자
	pr = s.insert(k); //set에 k를 삽입, pr은 삽입한 원소를 가리키는 반복자와 성공여부 bool의 pair 객체
	q = insert(p,k); //p위치부터 k를 삽입. q는 삽입한 원소를 가리킴
	s.insert(b,e);
	pred = s.key_comp();// 정렬 기준
	pred = s.value_comp();
	p = s.lower_bound(k);  // p는 k의 시작 구간을 가리키는 반복자
	p = s.upper_bound(k);  // p는 k의 끝 구간을 가리키는 반복자
