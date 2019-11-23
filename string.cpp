#include <bits/stdc++.h>
using namespace std;

/*
1. string은 문자열 조작으로 만들어진 시퀀스 컨테이너
2. 임의접근반복자를 지원, 컨테이너에 문자를 연속하게 저장
*/

int main() {
	// 생성자
	string s;
	string s(sz); //sz문자열로 s 생성
	string s(sz,n); //sz문자열에서 n개의 문자로 s를 생성
	string s(n,c); //n개의 c문자로 s를 생성
	string s(b,e);
	

	// 멤버함수
	s.append(s1);
	s.assign(s1);
	s.c_str(); // '\0'문자를 포함한 문자열로 변환
	s.data(); // '\0'문자를 포함하지 않는 문자열로 변환
	s.compare(s1); // s>s1 -> 1, s<s1 -> -1, s=s1 -> 0
	s.find(c); s.rfind(c); // 찾는 문자나 문자열의 위치 반환, 없으면 string::npos 반환 -> -1
	s.length();
	s.replace(pos, n, sz); // pos위치의 n개의 문자를 sz로 변환

	s.substr(0); //0부터 끝까지
	s.substr(0, string::npos); // 0부터 끝까지
	s.substr(0, 2); // 0부터 2개
	s.substr(2, 3); // 2부터 3개
	s.substr(2, string::npos); // 2부터 끝까지

	getline(cin, s); // 스트림이 in으로부터 s로 문자열을 한 줄 입력받음
	getline(cin, s, '\n'); // 3번째 인자에 종료 문자 지정
}
