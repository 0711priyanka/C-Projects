#include<iostream>
#include<random>
using namespace std;
bool gameover;
const int width=30;
const int height=30;
int x,y; //snake head and tail pos
int fruitX,fruitY;
int score;
enum eDirection { STOP=0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
void Setup()
{
    gameover = false;
    dir=STOP;
    x=width/2;
    y=height/2;
    fruitX= rand() % width;
    fruitY= rand() % height;
    score=0;
}
void Draw()
{
    //system("cls");
    for(int i=1;i<=height;i++)
    {
        for(int j=1;j<=width;j++)
        {
            if(i==1 || i==height || j==1 || j==width)
            cout<<"*";

            else 
            cout<<" ";
        }
        cout<<endl;
    }
   return;
}
void Input()
{

}
void Logic()
{

}
int main()
{
    Setup();
    while(!gameover)
    {
        Draw();
        Input();
        Logic();
        //Sleep(10);

    }
    return 0;
}
