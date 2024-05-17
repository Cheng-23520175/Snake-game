#pragma once
#include "Mylib.h"
#include <iostream>
using namespace std;

class TitleDraw{
    int x = 0, y = 0;
    void draw(int, int a[], int);
    void space(int);
    friend void draw_title();
};

void TitleDraw::draw(int n, int a[], int color = 10){
    SetColor(color);
    int i = 0;
    while (n > 0) {
        if (i % 2 == 0){
            for (int j = 0; j < a[i]; j++){
                cout << " ";
            }
            i++;
        } else {
            for (int j = 0; j < a[i]; j++){
                cout << (char)176;
            }
            i++;
            n--;
        }
    } 
}

void draw_title(){
    TitleDraw t;
    
    int x = 1, y = 0;

    gotoXY(x,y+2);
    int line2[2] = {25,3};
    t.draw(1, line2);

    gotoXY(x,y+3);
    int line3[17] = {8,1,3,1,3,1,10,1,5,6,1,1,2,43,6};
    t.draw(8, line3);

}

