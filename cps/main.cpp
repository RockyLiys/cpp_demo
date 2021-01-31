#include <iostream>
using namespace std;

void for_print(){
    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for(auto x: v){
        cout << x << '\n';
    }

    for(auto x: {10,11,12}){
        cout << x << '\n';
    }

}
int count_x(char* p, char x){
    if (p==nullptr) return 0;
    int count=0;
    // 用for循环
    // for (; p!=nullptr; ++p){
    //     if (*p==x){
    //         ++count;
    //     }
    // }
    // 用while循环
    while(p){
        if (*p==x){
            ++count;
        }
        ++p;
    }
    return count;
}

// struct Point
// {
//     /* data */
//     int x, y;
//     int scale;
// };

// void move_x(int x){}
// void update_display(){}

// void action(){
//     while (true){
//         cout << "enter action: \n";
//         string act;
//         cin >> act;
//         Point delta {0,0};
//         for(char ch: act){
//             switch(ch){
//                 case 'u':
//                 case 'n':
//                     ++delta.y;
//                     break;
//                 default:
//                     cout << "I freeze!\n";
//             }
//             int current {1};
//             int scale {0};
//             move(current+delta.scale);
//             update_display();
//         }
//     }
// }

int main(){
    cout << "Hello world!\n";
    for_print();
}
