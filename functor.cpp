#include <bits/stdc++.h>
using namespace std;

/*
functor, iterator
*/

int main() {
	// 산술 연산
	plus<int>;
	minus<int>;
	multiplies<int>;
	divides<int>;
	modulus<int>;


	// 비교 연산
	equal_to<int>;
	not_equal_to<int>;
	less<int>;
	greater<int>;
	greater_equal<int>;
	less_equal<int>;



	// 논리 연산
	logical_and<bool>;
	logical_or<bool>;
	logical_not<bool>;

	

	//iterator
	advance(p,n); //p반복자를 p+=n의 위치로 이동
	n = distance(p1,p2); // n = p2 - p1;
	vector<int>::reverse_iterator riter = v.rbegin();
}

