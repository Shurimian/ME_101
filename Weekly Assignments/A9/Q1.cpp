#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

const int ROWS{200}, COLUMNS{70};

void checkOpenFile(ifstream &fin)
{
    if (!fin)
    {
        cout << "File failed to open. ";
    }
    else
    {
        cout << "File successfully opened. ";
    }
}

int fileScan(ifstream &fin, char pic[ROWS][COLUMNS])
{
    int row{}, column{}, linesUsed{};
    char piece{};

    fin >> linesUsed;
    
    while (fin >> row >> column >> piece)
    {
        pic[row][column] = piece;
    }
    return linesUsed;
}

void buildPic(char pic[ROWS][COLUMNS], int lines)
{
    for (int row{}; row < lines; ++row)
    {
        for (int col{}; col < COLUMNS; ++col)
        {
            cout << pic[row][col];
        }
        cout << '\n';
    }
}

int main()
{
    int outputLines{};
    char pic[ROWS][COLUMNS]{};
    string file{};

    cout << "Enter filename: ";
    cin >> file;

    ifstream fin(file.c_str());
    checkOpenFile(fin);
    outputLines = fileScan(fin, pic);
    buildPic(pic, outputLines);

    return 0;
}

/*
Enter filename: homer_mapped.txt
File successfully opened.                              __
                   _ ,___,-'",-=-.
       __,-- _ _,-'_)_  (""`'-._\ `.
    _,'  __ |,' ,-' __)  ,-     /. |
  ,'_,--'   |     -'  _)/         `\
,','      ,'       ,-'_,`           :
,'     ,-'       ,(,-(              :
     ,'       ,-' ,    _            ;
    /        ,-._/`---'            /
   /        (____)(----. )       ,'
  /         (      `.__,     /\ /,
 :           ;-.___         /__\/|
 |         ,'      `--.      -,\ |
 :        /            \    .__/
  \      (__            \    |_
   \       ,`-, *       /   _|,\
    \    ,'   `-.     ,'_,-'    \
   (_\,-'    ,'\")--,'-'       __\
    \       /  // ,'|      ,--'  `-.
     `-.    `-/ \'  |   _,'         `.
        `-._ /      `--'/             \
-hrr-      ,'           |              \
          /             |               \
       ,-'              |               /
      /                 |             -'
*/
/*
Enter filename: st_basils_mapped.txt
File successfully opened.                             .
                            T
                           ( )
                          <===>
                           F|J
                           ===
                          J|||F
                          F|||J
                         /\/ \/\
                         F+++++J
                        J{}{|}{}F         .
                     .  F{}{|}{}J         T
          .          T J{}{}|{}{}F        ;;
          T         /|\F/\/\|/\/\J  .   ,;;;;.
         /:\      .'/|\\:=========F T ./;;;;;;\
       ./:/:/.   ///|||\\\"""""""" /x\T\;;;;;;/
      //:/:/:/\  \\\\|////..[ ]...xXXXx.|====|
      \:/:/:/:T7 :.:.:.:.:||[ ]|/xXXXXXx\|||||
      ::.:.:.:A. `;:;:;:;'=== ==\XXXXXXX/=====.
      `;""::/xxx\.|,|,|,| ( ) ( )| | | |.=..=.|
       :. :`\xxx/(_)(_)(_) _   _ | | | |'-''-'|
       :T-'-.:"":|"""""""|/ \ / \|=====|======|
       .A."""||_|| ,. .. || | | |/\/\/\/ | | ||
   :;:////\:::.'.| || || ||-| |-|/\/\/\+|+| | |
  ;:;;\////::::,='======='=============/\/\=====.
 :;:::;""":::::;:|__..,__|============/||\|\====|
 :::::;|=:::;:;::|,;:::::          |========|   |
 ::l42::::::(}:::::;::::::_________|========|___|__
*/

/*
Enter filename: mickey_mapped.txt
File successfully opened.                             _____
                        .d88888888bo.                                 
                      .d8888888888888b.
                      8888888888888888b
                      888888888888888888
                      888888888888888888
                       Y8888888888888888
                 ,od888888888888888888P
              .'`Y8P'```'Y8888888888P'
            .'_   `  _     'Y88888888b
           /  _`    _ `      Y88888888b   ____
        _  | /  \  /  \      8888888888.d888888b.
       d8b | | /|  | /|      8888888888d8888888888b
      8888_\ \_|/  \_|/      d888888888888888888888b
      .Y8P  `'-.            d88888888888888888888888
     /          `          `      `Y8888888888888888
     |                        __    888888888888888P
      \                       / `   dPY8888888888P'
       '._                  .'     .'  `Y888888P`
          `"'-.,__    ___.-'    .-'
         jgs  `-._````  __..--'`
/*