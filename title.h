#pragma once
#include "Mylib.h"
#include <iostream>
using namespace std;

class TitleDraw{
    int x = 0, y = 0;
    void draw(int, int);
    void space(int);
    friend void draw_title();
};

void TitleDraw::draw(int n, int color = 10){
    SetColor(color);
    for (int i=1; i<=n; i++){
        gotoXY(x, y);
        cout << (char)176;
        x++;
    }
}

void TitleDraw::space(int n){
    for (int i=1; i<=n; i++){
        gotoXY(x, y);
        cout << " ";
        x++;
    }
}

void draw_title(){
    TitleDraw t;
    // WHY
    t.x = 5; t.y = 2;
    t.draw(5); t.space(3); t.draw(5);
}

