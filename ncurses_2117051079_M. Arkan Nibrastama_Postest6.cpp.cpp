#include<ncurses/ncurses.h>
#include<windows.h>
using namespace std;

void animation(const char* c[100], int column, int row, int n){

   for (int i = 0; i < n; i++){

        if (c[i] != " "){

            for (int y = 0; y <= row; y++){

                mvprintw(y-1, column+i, " ");
                mvprintw(y, column+i, c[i]);
                Sleep(500);
                refresh();

            }

        }

   }

}

int main(){

    initscr();

    start_color();
    init_pair(1, COLOR_YELLOW, COLOR_BLACK);
    init_pair(2, COLOR_CYAN, COLOR_BLACK);

    int n1 = 16;
    const char* nama[n1] = {"a","r","k","a","n"," ","n","i","b","r","a","s","t","a","m","a"};

    int n2 = 10;
    const char* nama2[n2] = {"2","1","1","7","0","5","1","0","7","9"};

    attron(COLOR_PAIR(1));
    animation(nama, 3, 4, n1);
    attroff(COLOR_PAIR(1));

    attron(COLOR_PAIR(2));
    animation(nama2, 20, 6, n2);
    attroff(COLOR_PAIR(2));

    refresh();
    getch();
    endwin();

}