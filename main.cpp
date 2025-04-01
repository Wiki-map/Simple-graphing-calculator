#include <bits/stdc++.h>
#include <raylib.h>
#include <math.h>
using namespace std;

const int SHight = 800,SWitdh = 1000;

const int amplI = 16,amplJ = 16;

void DrawFuction(double f(double x),Color c1) {
    for (double i=SHight/amplJ * -1; i<SHight/amplJ; i+=0.01) {
        double j = f(i);
        DrawRectangle(i*amplJ+SWitdh/2,j*amplI*-1+SHight/2,2,2,c1);
    }
}

double f1(double x) {
    return sin(x) + sin(x/2) + sin(x/3);
}
double f2(double x) {
    return x*log(x);
}

int main(int, char**){
    
    int seed = 89234;
    ///cin>>seed;
    srand(seed);

    InitWindow(SWitdh,SHight,"hi");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        DrawLine(0,SHight/2,SWitdh,SHight/2,BLACK);
        DrawLine(SWitdh/2,0,SWitdh/2,SHight,BLACK);

        DrawFuction(f1,BLUE);
        DrawFuction(f2,RED);

        EndDrawing();
    }

}
