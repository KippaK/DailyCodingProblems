#include <iostream>
#include <utility>

using namespace std;

pair<int,int> cons(int x, int y){
    return pair<int,int>{x, y};
}

int car(pair<int,int> pair){
    return pair.first;
}

int cdr(pair<int,int> pair){
    return pair.second;
}

int main(){
    cout << car(cons(4, 5)) << endl;
    cout << cdr(cons(4, 5)) << endl;

    return 0;
}