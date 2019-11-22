#include <vector>
#include <deque>
using namespace std;

/*
1. vector는 임의 접근 반복자를 지원하는 배열 기반 컨테이너 
2. 원소가 하나의 메모리 블록에 연속되게 저장됨
3. 원소가 추가, 삽입될 때 memory realloc이 일어날 수 있음
4. insert(), erase(), push_back()이 빈번하게 일어난다면 다른 컨테이너 사용
5. operator []와 at()의 차이는 유효 범위 점검 유무
*/	

int main () {
	//생성자
	vector<int> v;
	vector<int> v2(n);
	vector<int> v3(n,x);
	vector<int> v4(v);
	vector<int> v5(v.begin(), v.end());

	//멤버 함수
	v.assign(n,x);
	v.assign(v2.begin(), v2.end());
	v.at(5);
	v.back();
	vector<int>::iterator iter = v.begin(), v.end();
	int x = v.capacity();
	v.clear();
	v.empty();
	q = v.erase(p); // q는 제거된 다음 원소를 가리킴
	q = v.erase(b, e);
	v.front();
	v.back();
	v.pop_back();
	v.push_back();
	v.emplace_back();
	p = v.rbegin();
	p = v.rend();
	v.reserve(n);
	v.resize(n);
	v.size();
	v.swap(v2);
	
	deque<int> dq;
	dq.push_front();
	dq.push_back();
	dq.pop_front();
	dq.pop_back();
	//deque : vector와 멤버 함수 동일 , 원소를 앞뒤로 삽입, 삭제 
}
	

