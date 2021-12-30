#include<iostream>
using namespace std;
char box[9][9];
char number[100];
int a[9];
void w()
{

    for (int i = 0; i<9; i++)
    {
        for (int j = 0; j<9; j++)
        {
            box[i][j] = '_';
        }
    }
    for (int p = 0; p<9; p++)
    {
        a[p] = 8;
    }
}
int check(char x[100]) {
    char arr1[100] = { '1' }, arr10[100] = { '2' }, arr3[100] = { '3' }, arr4[100] = { '4' }, arr5[100] = { '5' }, arr6[100] = { '6' }, arr7[100] = { '7' }, arr8[100] = { '8' }, arr9[100] = { '9' };

    if (strcmp(x, arr1) == 0)
        return 1;
    else if (strcmp(x, arr10) == 0)
        return 1;
    else if (strcmp(x, arr3) == 0)
        return 1;
    else if (strcmp(x, arr4) == 0)
        return 1;
    else if (strcmp(x, arr5) == 0)
        return 1;
    else if (strcmp(x, arr6) == 0)
        return 1;
    else if (strcmp(x, arr7) == 0)
        return 1;
    else if (strcmp(x, arr8) == 0)
        return 1;
    else if (strcmp(x, arr9) == 0)
        return 1;

    else {
        return 2;
    }
}
void print_box()
{
    for (int y = 1; y <= 9; y++)
    {
        cout << y << "    ";
    }
    cout << "\n";
    for (int k = 0; k<9; k++)
    {
        for (int o = 0; o<9; o++)
        {
            cout << box[k][o] << "    ";

        }
        cout << "\n\n";
    }
}
void choose_x()
{
    print_box();
    cout << "choose number between 1 to 9 : ";
a: cin >> number;

    if (check(number) == 1)
        goto s;
    else {
        system("cls");
        print_box();
        cout << "please enter number between 1 to 9 only : ";
        goto a;
    }
s:  system("cls");
    if (number[0]<'10' && number[0]>'0')
    {
        print_box();
        switch (number[0])
        {
        case '1':
        {
                    if (a[0] >= 0)
                    {
                        box[a[0]][0] = 'x';
                        a[0] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '2':
        {
                    if (a[1] >= 0)
                    {
                        box[a[1]][1] = 'x';
                        a[1] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '3':
        {
                    if (a[2] >= 0)
                    {
                        box[a[2]][2] = 'x';
                        a[2] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '4':
        {
                    if (a[3] >= 0)
                    {
                        box[a[3]][3] = 'x';
                        a[3] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '5':
        {
                    if (a[4] >= 0)
                    {
                        box[a[4]][4] = 'x';
                        a[4] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '6':
        {
                    if (a[5] >= 0)
                    {
                        box[a[5]][5] = 'x';
                        a[5] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '7':
        {
                    if (a[6] >= 0)
                    {
                        box[a[6]][6] = 'x';
                        a[6] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '8':
        {
                    if (a[7] >= 0)
                    {
                        box[a[7]][7] = 'x';
                        a[7] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '9':
        {
                    if (a[8] >= 0)
                    {
                        box[a[8]][8] = 'x';
                        a[8] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        }
    }
    else
    {
        system("cls");
        print_box();
        cout << "please choose number between 1 to 9 only : ";
        goto a;
    }




}
void choose_o()
{
    print_box();
    cout << "choose number between 1 to 9 : ";
a: cin >> number;
    if (check(number) == 1)
        goto s;
    else {
        system("cls");
        print_box();
        cout << "please enter number between 1 to 9 only : ";
        goto a;
    }
s:  system("cls");
    if (number[0]<'10' && number[0]>'0')
    {
        print_box();
        switch (number[0])
        {
        case '1':
        {
                    if (a[0] >= 0)
                    {
                        box[a[0]][0] = 'o';
                        a[0] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '2':
        {
                    if (a[1] >= 0)
                    {
                        box[a[1]][1] = 'o';
                        a[1] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '3':
        {
                    if (a[2] >= 0)
                    {
                        box[a[2]][2] = 'o';
                        a[2] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '4':
        {
                    if (a[3] >= 0)
                    {
                        box[a[3]][3] = 'o';
                        a[3] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '5':
        {
                    if (a[4] >= 0)
                    {
                        box[a[4]][4] = 'o';
                        a[4] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '6':
        {
                    if (a[5] >= 0)
                    {
                        box[a[5]][5] = 'o';
                        a[5] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '7':
        {
                    if (a[6] >= 0)
                    {
                        box[a[6]][6] = 'o';
                        a[6] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '8':
        {
                    if (a[7] >= 0)
                    {
                        box[a[7]][7] = 'o';
                        a[7] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        case '9':
        {
                    if (a[8] >= 0)
                    {
                        box[a[8]][8] = 'o';
                        a[8] -= 1;
                    }
                    else
                    {
                        system("cls");
                        print_box();
                        cout << "you can not play her try another number : ";
                        goto a;
                    }
        }
            break;
        }
    }
    else
    {
        system("cls");
        print_box();
        cout << "please choose number between 1 to 9 only : ";
        goto a;
    }




}
int test(char box[][9])
{

    for (int h = 0; h <= 8; h++){
        for (int b = 0, e = 1, c = 2, s = 3, d = 4; d <= 8; b++, e++, c++, s++, d++){

            if (box[h][b] == 'x' && box[h][e] == 'x' &&  box[h][c] == 'x' &&  box[h][s] == 'x'&&box[h][d] == 'x')
            {

                return 2;
            }

        }



    }
    for (int h = 0; h <= 8; h++){
        for (int b = 0, e = 1, c = 2, s = 3, d = 4; d <= 8; b++, e++, c++, s++, d++){

            if (box[h][b] == 'o' && box[h][e] == 'o' &&  box[h][c] == 'o' &&  box[h][s] == 'o'&&box[h][d] == 'o')
            {

                return 2;
            }

        }



    }
    for (int h = 0; h <= 8; h++){
        for (int b = 0, e = 1, c = 2, s = 3, d = 4; d <= 8; b++, e++, c++, s++, d++){

            if (box[b][h] == 'o' && box[e][h] == 'o' &&  box[c][h] == 'o' &&  box[s][h] == 'o'&&box[d][h] == 'o')
            {

                return 2;
            }

        }



    }
    for (int h = 0; h <= 8; h++){
        for (int b = 0, e = 1, c = 2, s = 3, d = 4; d <= 8; b++, e++, c++, s++, d++){

            if (box[b][h] == 'x' && box[e][h] == 'x' &&  box[c][h] == 'x' &&  box[s][h] == 'x'&&box[d][h] == 'x')
            {

                return 2;
            }

        }
    }
    for (int b = 0, e = 1, c = 2, s = 3, d = 4; d <= 8; b++, e++, c++, s++, d++){

        if (box[b][b] == 'x' && box[e][e] == 'x' &&  box[c][c] == 'x' &&  box[s][s] == 'x'&&box[d][d] == 'x')
        {

            return 2;
        }

    }
    for (int b = 0, e = 1, c = 2, s = 3, d = 4; d <= 8; b++, e++, c++, s++, d++){

        if (box[b][b] == 'o' && box[e][e] == 'o' &&  box[c][c] == 'o' &&  box[s][s] == 'o'&&box[d][d] == 'o')
        {
            return 2;
        }
    }
    for (int ii = 1; ii < 5; ii++)
    {
        for (int jj = 0; jj < 8; jj++)
        {
            if (box[ii][jj] == 'o' && box[ii + 1][jj + 1] == 'o' &&  box[ii + 2][jj + 2] == 'o' &&  box[ii + 3][jj + 3] == 'o'&&box[ii + 4][jj + 4] == 'o')
            {
                return 2;
            }
        }
    }

    for (int ii = 1; ii < 5; ii++)
    {
        for (int jj = 0; jj < 8; jj++)
        {
            if (box[ii][jj] == 'x' && box[ii + 1][jj + 1] == 'x' &&  box[ii + 2][jj + 2] == 'x' &&  box[ii + 3][jj + 3] == 'x'&&box[ii + 4][jj + 4] == 'x')
            {
                return 2;
            }
        }
    }

    for (int ii = 1; ii < 5; ii++)
    {
        for (int jj = 0; jj < 8; jj++)
        {
            if (box[jj][ii] == 'x' && box[jj + 1][ii + 1] == 'x' &&  box[jj + 2][ii + 2] == 'x' &&  box[jj + 3][ii + 3] == 'x'&&box[jj + 4][ii + 4] == 'x')
            {
                return 2;
            }
        }
    }

    for (int ii = 1; ii < 5; ii++)
    {
        for (int jj = 0; jj < 8; jj++)
        {
            if (box[jj][ii] == 'o' && box[jj + 1][ii + 1] == 'o' &&  box[jj + 2][ii + 2] == 'o' &&  box[jj + 3][ii + 3] == 'o'&&box[jj + 4][ii + 4] == 'o')
            {
                return 2;
            }
        }
    }
    for (int ii = 0; ii < 4; ii++)
    {
        for (int jj = 7; jj >3; jj--)
        {
            if (box[ii][jj] == 'o' && box[ii + 1][jj - 1] == 'o' &&  box[ii + 2][jj - 2] == 'o' &&  box[ii + 3][jj - 3] == 'o'&&box[ii + 4][jj - 4] == 'o')
                return 2;
        }
    }
    for (int ii = 0; ii < 4; ii++)
    {
        for (int jj = 7; jj >3; jj--)
        {
            if (box[ii][jj] == 'x' && box[ii + 1][jj - 1] == 'x' &&  box[ii + 2][jj - 2] == 'x' &&  box[ii + 3][jj - 3] == 'x'&&box[ii + 4][jj - 4] == 'x')
                return 2;
        }
    }

    for (int ii = 1; ii < 5; ii++)
    {
        for (int jj = 8; jj >4; jj--)
        {
            if (box[ii][jj] == 'o' && box[ii + 1][jj - 1] == 'o' &&  box[ii + 2][jj - 2] == 'o' &&  box[ii + 3][jj - 3] == 'o'&&box[ii + 4][jj - 4] == 'o')
                return 2;
        }
    }

    for (int ii = 1; ii < 5; ii++)
    {
        for (int jj = 8; jj >4; jj--)
        {
            if (box[ii][jj] == 'x' && box[ii + 1][jj - 1] == 'x' &&  box[ii + 2][jj - 2] == 'x' &&  box[ii + 3][jj - 3] == 'x'&&box[ii + 4][jj - 4] == 'x')
                return 2;
        }
    }
    return 0;
}
int main()
{
farg:w();
    char choose;
    cout << "please choose 'x' or 'o' : ";
choose: cin >> choose;
    system("cls");
    print_box();
    if (choose == 'X' || choose == 'x')
    {
        system("cls");
        choose_x();
        system("cls");
        for (int q = 0; q<40; q++)
        {
            choose_o();
            system("cls");
            if (test(box) == 2){
                print_box();
                cout << "player o win \n";
                goto farg;


            }
            choose_x();
            system("cls");
            if (test(box) == 2){
                print_box();
                cout << "player x win \n";
                goto farg;


            }
        }
        print_box();
        cout << "draw" << endl;
        goto farg;



    }
    else if (choose == 'O' || choose == 'o')
    {
        system("cls");
        choose_o();
        system("cls");
        for (int q = 0; q<40; q++)
        {
            choose_x();
            system("cls");
            if (test(box) == 2){
                print_box();
                cout << "player x win \n";
                goto farg;


            }
            choose_o();
            system("cls");
            if (test(box) == 2){
                print_box();
                cout << "player o win \n";
                goto farg;


            }
        }

        print_box();

        cout << "draw" << endl;
        goto farg;


    }
    else
    {
        cout << "please choose 'x' or 'o' only : ";
        goto choose;
    }


    return 0;
}
