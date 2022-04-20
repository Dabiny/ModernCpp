
/* 연산자
 c++는 풍부한 내장 연산자를 갖고 있다.
 - 계산연산자
    산술연산자 : ++, +, *, % ...
    불 연산자
        - 비교 연산자 : <=, !=, ...
        - 논리 연산자 : &&, ||
    비트 연산자 : ~, <<, >>, &, ^, |
 
 - 할당 연산자 : =, += ...
 - 프로그램 흐름 연산자 : 함수호출, ?:, |
 - 메모리 처리 연산자 : new, delete
 - 접근 연산자 : ., ->, [], *, ...
 - 타입 처리 연산자 : dynamic_cast, typeid, sizeof, alignof...
 - 오류 처리 연산자 : throw
 
 대부분의 연산자는 사용자 정의 타입에서 오버로드할 수 있다.
 */

/* 산술 연산자
 
 */

#include <iostream>
using namespace std;

int main()
{
    const float r1 = 3.5, r2 = 7.3, pi = 3.1459;
    float area1 = pi * r1 * r1;
    
    cout << "A circle of radius " << r1 << " has area "
    << area1 << "." << endl;
    
    cout << " The average of " << r1 << " and " << r2 << " is "
    << (r1 + r2) / 2 << "." << endl;
}
/*
 A circle of radius 3.5 has area 38.5373.
 The average of 3.5 and 7.3 is 5.4.
 */
