#include <iostream>
#include <string>
using namespace std;

class SortedArray
{
    int size;       // 현재 배열의 크기
    int *p;         // 정수 배열에 대한 포인터
    void sort();    // 정수 배열을 오름차순으로 정렬

public:
    SortedArray();  // p는  NULL로 size는 0으로 초기화
    SortedArray(SortedArray& src);  // 복사생성자
    SortedArray(int p[], int size); // 생성자. 정수 배열과 크기를 전달받음.
    ~SortedArray(); // 소멸자
    SortedArray operator + (SortedArray& op2);  // 현재 배열에 op2 배열 추가.
    SortedArray& operator = (const SortedArray& op2);   // 현재 배열에 op2 배열 복사
    void show();    // 배열의 원소 출력
};

SortedArray::SortedArray()
{
    this-> size = 1;
    p = new int[size];
}

SortedArray::SortedArray(SortedArray& src)
{
    this->size = src.size;
    p = new int[size];
    for (int i = 0; i < size; ++i)
    {
        p[i] = src.p[i];
    }
}
SortedArray::SortedArray(int p[], int size) :  size(size), p(new int[size]){
    for (int i = 0; i < size; ++i) {
        this->p[i] = p[i];
    }
    sort();
}

SortedArray::~SortedArray()
{
    delete[] p;
}

SortedArray SortedArray::operator+(const SortedArray &op2)const
{
    SortedArray result;
    result.size = size + op2.size;
    result.p = new int[result.size];

    int i = 0, j = 0, k = 0;
    while (i < size && j < op2.size) {
        if (p[i] < op2.p[j])
            result.p[k++] = p[i++];
        else
            result.p[k++] = op2.p[j++];
    }
    while (i < size)
        result.p[k++] = p[i++];
    while (j < op2.size)
        result.p[k++] = op2.p[j++];

    return result;

}

SortedArray& SortedArray::operator = (const SortedArray& op2)
{
    if (this == &op2) // 자기 자신과의 할당 체크
        return *this;

    delete[] p; // 기존의 동적 할당 해제

    size = op2.size;
    p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = op2.p[i];
    }

    return *this;
}

void SortedArray::show()
{
    for (int i = 0; i < size; ++i)
    {
        cout << p[i] << " ";
    }
    cout << endl;
}

int main(void)
{
    int n[] = { 2, 20, 6 };
    int m[] = { 10, 7, 8, 30 };
    SortedArray a(n, 3), b(m,4), c;

    c = a + b; // +,= 연산자 작성필요
    // + 연산자가 SortedArray 객체를 리턴하므로 복사 생성자 필요

    a.show();
    b.show();
    c.show();

    return 0;
}
