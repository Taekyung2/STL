#include <bits/stdc++.h>
using namespace std;

/*
컨테이너 어댑터는 다른 컨테이너의 인터페이스를 변경한 컨테이너
stack, queue, priority_queue
*/

int main() {
	// stack
	stack<int> st;
	st.push(10);
	st.empty();
	st.top();
	st.pop();

	// queue
	queue<int> q;
	q.push(10);
	q.empty();
	q.front();
	q.pop();
	queue<int, list<int> > ql;


	// priority_queue
	priority_queue<int> pq1; // 기본 vector<int> 기반, 기본 정렬 less<int>, pop했을 때 큰 게 나옴
	pq1.push(10);
	pq1.empty();
	pq1.top();
	pq1.pop();

	priority_queue<int, deque<int>, greater<int> > pq2; // greater<int> pop했을 때 작은 게 나옴

}
