#include<iostream>
#include<windows.h>
void gotoxy(int x,int y)

{
	// x is a length , y is a width
    COORD coordinates;
    coordinates.X =x;
    coordinates.Y =y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
void setup_color(int value_color)
{
     WORD Color;
                         
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;

                        
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                   
          Color = (csbi.wAttributes & 0xF0) + (value_color & 0x0F);
          SetConsoleTextAttribute(hStdOut, Color);
     }
    
}