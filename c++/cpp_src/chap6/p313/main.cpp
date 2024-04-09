#include <iostream>
using namespace std;


//int add(int *pa, int num) {     // call by address 썼을때

int add(int (&pa)[], int num){    // call by reperence 썼을때
    int sum = 0;
       for (int i = 0; i < num; i++) {
        sum += pa[i];
      //sum += *(pa+i);
    }
    return sum;
}

//int add(int *pa, int num, int *pb) {          //call by address 썼을때
int add(int (&pa)[], int num, int (&pb)[]) {    // call by reperence 썼을때
    int sum = 0;
           for (int i = 0; i < num; i++) {
            sum += pa[i] + pb[i];
    }
    return sum;
}

int main() {
    int a[] = {1,2,3,4,5};
    int b[] = {6,7,8,9,10};
    int c = add(a,5);
    int d = add(a, 5, b);
    
    cout << c << endl;  //15출력
    cout << d << endl;  //55출력
    return 0;
}