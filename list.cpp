#include <list>
using namespace std;

/*
1. list는 sequence container이며 node기반 container입니다
2. 순차열 중간에 삽입, 제거가 빈번하며 원소의 상대적인 순서가 중요하다면 list 컨테이너 사용
3. list는 다른 list와 결합할 때 좋은 컨테이너
4. 양방향 반복자
*/

int main() {
	//생성자
	list<int> lt;
	list<int> lt(n);
	list<int> lt(n,x);
	list<int> lt(lt2);
	list<int> lt(b,e);

	//멤버 함수
	lt.assign(n,x);
	lt.assign(b,e);
	lt.back();
	p = lt.begin();
	lt.clear();
	lt.empty();
	q = lt.erase(p); // q는 다음 원소를 가리킴
	q = lt.erase(b,e);
	q = lt.insert(p,x); //q는 삽입한 원소를 가리킴
	lt.insert(p,n,x);
	
