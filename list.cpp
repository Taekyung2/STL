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
	lt.insert(p,b,e);
	lt.merge(lt2);
	lt.merge(lt2,pred);
	lt.pop_back(); lt.pop_front();
	lt.push_back(x); lt.push_front(x);
	p = lt.rbegin(); p = lt.rend();
	lt.remove(x); //x원소를 모두 제거
	lt.remove_if(pred);  //pred가 참인 원소 모두 제거
	lt.rsize(n) // lt의 크기를 n으로 변경하고 확장되는 공간을 기본값으로 초기화
	lt.reverse();
	lt.size();
	lt.sort(); // 오름차순 정렬
	lt.sort(pred);
	lt.splice(p,lt2); //p가 가리키는 위치에 lt2의 모든 원소를 잘라 붙인다
	lt.splice(p,lt2,q); //p가 가리키는 위치에 lt2의 q가 가리키는 원소를 잘라붙인다
	lt.splice(p,lt2,b,e);
	lt.unique();
	lt.unique(pred); // 유일한 원소로 만듬
