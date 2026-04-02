
#include <sfml/graphics.hpp>
#include<sfml/window.hpp>
#include<sfml/system.hpp>
#include<iostream>
#include<fstream>


using namespace std;
const int rows = 8;
const int cols = 8;
int a = 127232;

void print2Darray(int arr[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

//check the checker function and also add condition for what if in middle swapped to form 3 e.g 0 0 0 and the mid zero was swapped in because checker only checks for if end ones are swapped in.
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;


}
int generaterandom(int& a)
{
    srand(a);
    a++;
    return rand() % 5;
}
bool l(int gride[][8], sf::Vector2i target)
{
    
    bool flag = false;


    if(target.x >= 2 && target.y >= 2 && (gride[target.x][target.y] == gride[target.x - 1][target.y] && gride[target.x][target.y] == gride[target.x - 2][target.y] && gride[target.x][target.y] == gride[target.x][target.y - 1] && gride[target.x][target.y] == gride[target.x][target.y - 2]))
    {
        gride[target.x][target.y] = -1; gride[target.x - 1][target.y] = -1; gride[target.x - 2][target.y] = -1; gride[target.x][target.y - 1] = -1; gride[target.x][target.y - 2] = -1;
        flag = true;

    }

    if ((target.x >= 2 && target.y < 6 && gride[target.x][target.y] == gride[target.x - 1][target.y] && gride[target.x][target.y] == gride[target.x - 2][target.y] && gride[target.x][target.y] == gride[target.x][target.y + 1] && gride[target.x][target.y] == gride[target.x][target.y + 2]))
    {
        gride[target.x][target.y] = -1; gride[target.x - 1][target.y] = -1; gride[target.x - 2][target.y] = -1; gride[target.x][target.y + 1] = -1; gride[target.x][target.y + 2] = -1;
        flag = true;
        }
    if (target.x < 6 && target.y >= 2 && gride[target.x][target.y] == gride[target.x + 1][target.y] && gride[target.x][target.y] == gride[target.x + 2][target.y] && gride[target.x][target.y] == gride[target.x][target.y - 1] && gride[target.x][target.y] == gride[target.x][target.y - 2])
    {
        gride[target.x][target.y] = -1; gride[target.x + 1][target.y] = -1; gride[target.x + 2][target.y] = -1; gride[target.x][target.y - 1] = -1; gride[target.x][target.y - 2] = -1;
        flag = true;
    }
    if (target.x < 6 && target.y < 6 && gride[target.x][target.y] == gride[target.x + 1][target.y] && gride[target.x][target.y] == gride[target.x + 2][target.y] && gride[target.x][target.y] == gride[target.x][target.y + 1] && gride[target.x][target.y] == gride[target.x][target.y + 2])
    {
        gride[target.x][target.y] = -1; gride[target.x + 1][target.y] = -1; gride[target.x + 2][target.y] = -1; gride[target.x][target.y + 1] = -1; gride[target.x][target.y + 2] = -1;
        flag = true;
    }
    if (target.y > 1 && target.y < 6 && gride[target.x][target.y] == gride[target.x][target.y - 1] && gride[target.x][target.y] == gride[target.x][target.y - 2] && gride[target.x][target.y] == gride[target.x][target.y + 1] && gride[target.x][target.y] == gride[target.x][target.y + 2])
    {
        gride[target.x][target.y] = -1; gride[target.x][target.y - 1] = -1; gride[target.x][target.y - 2] = -1; gride[target.x][target.y + 1] = -1; gride[target.x][target.y + 2] = -1;
        flag == true;
    }
    if (target.x > 1 && target.x < 6 && gride[target.x][target.y] == gride[target.x + 1][target.y] && gride[target.x][target.y] == gride[target.x + 2][target.y] && gride[target.x][target.y] == gride[target.x - 1][target.y] && gride[target.x][target.y] == gride[target.x - 2][target.y])
    {
        gride[target.x][target.y] = -1; gride[target.x + 1][target.y] = -1; gride[target.x + 2][target.y] = -1; gride[target.x - 1][target.y] = -1; gride[target.x - 2][target.y] = -1;
        flag = true;
    }
    if (target.y > 1 && target.y < 6 && gride[target.x][target.y] == gride[target.x][target.y - 1] && gride[target.x][target.y] == gride[target.x][target.y - 2] && gride[target.x][target.y] == gride[target.x][target.y + 1] && gride[target.x][target.y] == gride[target.x][target.y + 2])
    {
        gride[target.x][target.y] = -1; gride[target.x][target.y - 1] = -1; gride[target.x][target.y - 2] = -1; gride[target.x][target.y + 1] = -1; gride[target.x][target.y + 2] = -1;
        flag == true;
    }
    if (target.x > 1 && target.x < 6 && gride[target.x][target.y] == gride[target.x + 1][target.y] && gride[target.x][target.y] == gride[target.x + 2][target.y] && gride[target.x][target.y] == gride[target.x - 1][target.y] && gride[target.x][target.y] == gride[target.x - 2][target.y])
    {
        gride[target.x][target.y] = -1; gride[target.x + 1][target.y] = -1; gride[target.x + 2][target.y] = -1; gride[target.x - 1][target.y] = -1; gride[target.x - 2][target.y] = -1;
        flag = true;
    }

    return flag;
}


bool fourchecker(int gride[][8],sf::Vector2i coordinate)
{
    bool found=0;
    int sum = 0;
    for (int i = 0; i < 8 &&!found; i++)

    {
        for (int j = 0; j < 5 &&!found; j++)
        {
            if (gride[i][j] == gride[i][j + 1] && gride[i][j + 1] == gride[i][j + 2] && gride[i][j + 2] == gride[i][j + 3])
            {
                
                if(coordinate.x==i&&coordinate.y==j|| coordinate.x == i && coordinate.y == j+1||coordinate.x == i && coordinate.y == j+2||coordinate.x == i && coordinate.y == j+3)
                {
                   
               gride[i][j] = -1; gride[i][j + 1] = -1; gride[i][j + 2] = -1;  gride[i][j + 3] = -1;
                found = 1;
                }
            }
        }
        
    }
    sum = 0;
    for (int j = 0; j < 8 && !found; j++)

    {
        for (int i = 0; i < 5 && !found; i++)
        {
            if (gride[i][j] == gride[i+1][j] && gride[i+1][j] == gride[i+2][j] && gride[i+2][j] == gride[i+3][j])
            {
                
                if (coordinate.x == i && coordinate.y == j || coordinate.x == i + 1 && coordinate.y == j || coordinate.x == i + 2 && coordinate.y == j || coordinate.x == i + 3 && coordinate.y == j)
                {
                    gride[i][j] = -1; gride[i + 1][j] = -1; gride[i + 2][j] = -1;  gride[i + 3][j] = -1;
                    found = 1;
                }

            }
        }
    }
   
    return found;
}


 int prereplacer2(int arr[][8], sf::Vector2i target)
{
    int sum = -1;
    int opt = 0;


    //to check if the code contains a destroyer
    if (((arr[target.x][target.y] - 5) == arr[target.x + 1][target.y] && arr[target.x + 1][target.y] == arr[target.x + 2][target.y]) && (target.x < 6))
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x][i] = -1;
        }
    }
    if ((arr[target.x][target.y] == (arr[target.x + 1][target.y] - 5) && (arr[target.x + 1][target.y] - 5) == arr[target.x + 2][target.y]) && target.x < 6)
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x + 1][i] = -1;
        }
    }
    if (arr[target.x][target.y] == arr[target.x + 1][target.y] && arr[target.x + 1][target.y] == (arr[target.x + 2][target.y] - 5) && target.x < 6)
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x + 2][i] = -1;
        }
    }





    if (((arr[target.x][target.y] - 5) == arr[target.x - 1][target.y] && arr[target.x - 1][target.y] == arr[target.x - 2][target.y]) && (target.x > 1))
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x][i] = -1;
        }
    }
    if (arr[target.x][target.y] == arr[target.x - 1][target.y] - 5 && arr[target.x - 1][target.y] - 5 == arr[target.x - 2][target.y] && (target.x > 1))
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x - 1][i] = -1;
        }
    }
    if (arr[target.x][target.y] == arr[target.x - 1][target.y] && arr[target.x - 1][target.y] == (arr[target.x - 2][target.y] - 5) && (target.x > 1))
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x - 2][i] = -1;
        }
    }









    if (((arr[target.x][target.y] - 5) == arr[target.x][target.y + 1] && arr[target.x][target.y + 1] == arr[target.x][target.y + 2]) && target.y < 6)
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x][i] = -1;
        }
    }
    if (arr[target.x][target.y] == (arr[target.x][target.y + 1] - 5) && (arr[target.x][target.y + 1] - 5) == arr[target.x][target.y + 2] && target.y < 6)
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y + 1] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x][i] = -1;
        }
    }
    if (arr[target.x][target.y] == arr[target.x][target.y + 1] && arr[target.x][target.y + 1] == (arr[target.x][target.y + 2] - 5) && target.y < 6)
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y + 2] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x][i] = -1;
        }
    }



    if ((arr[target.x][target.y] - 5) == arr[target.x - 1][target.y] && arr[target.x][target.y] == (arr[target.x + 1][target.y]) && target.x > 0 && target.x < 7)
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x][i] = -1;
        }
    }
    if (arr[target.x][target.y] == (arr[target.x - 1][target.y] - 5) && arr[target.x][target.y] == arr[target.x + 1][target.y] && target.x > 0 && target.x < 7)
    {

        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x - 1][i] = -1;
        }
    }
    if (arr[target.x][target.y] == arr[target.x - 1][target.y] && arr[target.x][target.y] == (arr[target.x + 1][target.y] - 5) && target.x > 0 && target.x < 7)
    {

        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x + 1][i] = -1;
        }
    }






    if (((arr[target.x][target.y] - 5) == arr[target.x][target.y - 1] && arr[target.x][target.y - 1] == arr[target.x][target.y - 2]) && (target.y > 1))
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x][i] = -1;
        }
    }
    if (arr[target.x][target.y] == (arr[target.x][target.y - 1] - 5) && (arr[target.x][target.y - 1] - 5) == arr[target.x][target.y - 2] && (target.y > 1))
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y - 1] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x][i] = -1;
        }
    }
    if (arr[target.x][target.y] == arr[target.x][target.y - 1] && arr[target.x][target.y - 1] == (arr[target.x][target.y - 2] - 5) && (target.y > 1))
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y - 2] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x][i] = -1;
        }
    }






    if (((arr[target.x][target.y] - 5) == arr[target.x][target.y - 1] && arr[target.x][target.y] == arr[target.x][target.y + 1]) && target.y > 0 && target.y < 7)
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x][i] = -1;
        }
    }
    if (arr[target.x][target.y] == (arr[target.x][target.y - 1] - 5) && arr[target.x][target.y] == arr[target.x][target.y + 1] && target.y > 0 && target.y < 7)
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y - 1] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x][i] = -1;
        }
    }
    if (arr[target.x][target.y] == arr[target.x][target.y - 1] && arr[target.x][target.y] == (arr[target.x][target.y + 1] - 5) && target.y > 0 && target.y < 7)
    {
        for (int i = 0; i < 8; i++)
        {
            arr[i][target.y + 1] = -1;
        }
        for (int i = 0; i < 8; i++)
        {
            arr[target.x][i] = -1;
        }
    }

    //to check for bomb







    if (((arr[target.x][target.y] - 10) == arr[target.x + 1][target.y] && arr[target.x + 1][target.y] == arr[target.x + 2][target.y]) && (target.x < 6))
    {
        arr[target.x][target.y] = -1;
        arr[target.x + 1][target.y] = -1;
        arr[target.x - 1][target.y] = -1;
        arr[target.x][target.y + 1] = -1;
        arr[target.x][target.y - 1] = -1;
        arr[target.x + 1][target.y + 1] = -1;
        arr[target.x - 1][target.y - 1] = -1;
        arr[target.x + 1][target.y - 1] = -1;
        arr[target.x - 1][target.y + 1] = -1;

    }
    if ((arr[target.x][target.y] == (arr[target.x + 1][target.y] - 10) && (arr[target.x + 1][target.y] - 10) == arr[target.x + 2][target.y]) && target.x < 6)
    {
        arr[target.x + 1][target.y] = -1;
        arr[target.x + 2][target.y] = -1;
        arr[target.x][target.y] = -1;
        arr[target.x][target.y + 1] = -1;
        arr[target.x][target.y - 1] = -1;
        arr[target.x + 2][target.y + 1] = -1;
        arr[target.x][target.y - 1] = -1;
        arr[target.x+1 + 1][target.y - 1] = -1;
        arr[target.x+1 - 1][target.y + 1] = -1;
    }
    if (arr[target.x][target.y] == arr[target.x + 1][target.y] && arr[target.x + 1][target.y] == (arr[target.x + 2][target.y] - 10) && target.x < 6)
    {
        arr[target.x + 2][target.y] = -1;
        arr[target.x + 2 + 1][target.y] = -1;
        arr[target.x + 2 - 1][target.y] = -1;
        arr[target.x + 2][target.y + 1] = -1;
        arr[target.x + 2][target.y - 1] = -1;
        arr[target.x + 2 + 1][target.y + 1] = -1;
        arr[target.x + 2 - 1][target.y - 1] = -1;
        arr[target.x+2 + 1][target.y - 1] = -1;
        arr[target.x+2 - 1][target.y + 1] = -1;
    }





    if (((arr[target.x][target.y] - 10) == arr[target.x - 1][target.y] && arr[target.x - 1][target.y] == arr[target.x - 2][target.y]) && (target.x > 1))
    {
        arr[target.x][target.y] = -1;
        arr[target.x + 1][target.y] = -1;
        arr[target.x - 1][target.y] = -1;
        arr[target.x][target.y + 1] = -1;
        arr[target.x][target.y - 1] = -1;
        arr[target.x + 1][target.y + 1] = -1;
        arr[target.x - 1][target.y - 1] = -1;
        arr[target.x][target.y - 1] = -1;
        arr[target.x - 2][target.y + 1] = -1;

    }
    if (arr[target.x][target.y] == (arr[target.x - 1][target.y] - 10) && (arr[target.x - 1][target.y] - 10) == arr[target.x - 2][target.y] && (target.x > 1))
    {
        arr[target.x - 1][target.y] = -1;
        arr[target.x - 1 + 1][target.y] = -1;
        arr[target.x - 1 - 1][target.y] = -1;
        arr[target.x - 1][target.y + 1] = -1;
        arr[target.x - 1][target.y - 1] = -1;
        arr[target.x - 1 + 1][target.y + 1] = -1;
        arr[target.x - 1 - 1][target.y - 1] = -1;
        arr[target.x - 1 + 1][target.y - 1] = -1;
        arr[target.x - 1 - 1][target.y + 1] = -1;

    }
    if (arr[target.x][target.y] == arr[target.x - 1][target.y] && arr[target.x - 1][target.y] == (arr[target.x - 2][target.y] - 10) && (target.x > 1))
    {
        arr[target.x - 2][target.y] = -1;
        arr[target.x - 2 + 1][target.y] = -1;
        arr[target.x - 2 - 1][target.y] = -1;
        arr[target.x - 2][target.y + 1] = -1;
        arr[target.x - 2][target.y - 1] = -1;
        arr[target.x - 2 + 1][target.y + 1] = -1;
        arr[target.x - 2 - 1][target.y - 1] = -1;
        arr[target.x - 2 + 1][target.y - 1] = -1;
        arr[target.x - 2 - 1][target.y + 1] = -1;

    }









    if (((arr[target.x][target.y] - 10) == arr[target.x][target.y + 1] && arr[target.x][target.y + 1] == arr[target.x][target.y + 2]) && target.y < 6)
    {
        arr[target.x][target.y] = -1;
        arr[target.x + 1][target.y] = -1;
        arr[target.x - 1][target.y] = -1;
        arr[target.x][target.y + 1] = -1;
        arr[target.x][target.y - 1] = -1;
        arr[target.x + 1][target.y + 1] = -1;
        arr[target.x - 1][target.y - 1] = -1;
        arr[target.x + 1][target.y - 1] = -1;
        arr[target.x - 1][target.y + 1] = -1;

    }
    if (arr[target.x][target.y] == (arr[target.x][target.y + 1] - 10) && (arr[target.x][target.y + 1] - 10) == arr[target.x][target.y + 2] && target.y < 6)
    {
        arr[target.x][target.y + 1] = -1;
        arr[target.x + 1][target.y + 1] = -1;
        arr[target.x - 1][target.y + 1] = -1;
        arr[target.x][target.y + 1 + 1] = -1;
        arr[target.x][target.y + 1 - 1] = -1;
        arr[target.x + 1][target.y + 1 + 1] = -1;
        arr[target.x - 1][target.y + 1 - 1] = -1;
        arr[target.x + 1][target.y + 1 - 1] = -1;
        arr[target.x - 1][target.y + 1 + 1] = -1;

    }
    if (arr[target.x][target.y] == arr[target.x][target.y + 1] && arr[target.x][target.y + 1] == (arr[target.x][target.y + 2] - 10) && target.y < 6)
    {
        arr[target.x][target.y + 2] = -1;
        arr[target.x + 1][target.y + 2] = -1;
        arr[target.x - 1][target.y + 2] = -1;
        arr[target.x][target.y + 2 + 1] = -1;
        arr[target.x][target.y + 2 - 1] = -1;
        arr[target.x + 1][target.y + 2 + 1] = -1;
        arr[target.x - 1][target.y + 2 - 1] = -1;
        arr[target.x + 1][target.y + 2 - 1] = -1;
        arr[target.x - 1][target.y + 2 + 1] = -1;

    }



    if ((arr[target.x][target.y] - 10) == arr[target.x - 1][target.y] && (arr[target.x][target.y]-10) == (arr[target.x + 1][target.y]) && target.x > 0 && target.x < 7)
    {
        arr[target.x][target.y] = -1;
        arr[target.x + 1][target.y] = -1;
        arr[target.x - 1][target.y] = -1;
        arr[target.x][target.y + 1] = -1;
        arr[target.x][target.y - 1] = -1;
        arr[target.x + 1][target.y + 1] = -1;
        arr[target.x - 1][target.y - 1] = -1;
        arr[target.x + 1][target.y - 1] = -1;
        arr[target.x - 1][target.y + 1] = -1;

    }
    if (arr[target.x][target.y] == (arr[target.x - 1][target.y] - 10) && arr[target.x][target.y] == arr[target.x + 1][target.y] && target.x > 0 && target.x < 7)
    {

        arr[target.x - 1][target.y] = -1;
        arr[target.x - 1 + 1][target.y] = -1;
        arr[target.x - 1 - 1][target.y] = -1;
        arr[target.x - 1][target.y + 1] = -1;
        arr[target.x - 1][target.y - 1] = -1;
        arr[target.x - 1 + 1][target.y + 1] = -1;
        arr[target.x - 1 - 1][target.y - 1] = -1;
        arr[target.x - 1 + 1][target.y - 1] = -1;
        arr[target.x - 1 - 1][target.y + 1] = -1;

    }
    if (arr[target.x][target.y] == arr[target.x - 1][target.y] && arr[target.x][target.y] == (arr[target.x + 1][target.y] - 10) && target.x > 0 && target.x < 7)
    {

        arr[target.x + 1][target.y] = -1;
        arr[target.x + 1 + 1][target.y] = -1;
        arr[target.x + 1 - 1][target.y] = -1;
        arr[target.x + 1][target.y + 1] = -1;
        arr[target.x + 1][target.y - 1] = -1;
        arr[target.x + 1 + 1][target.y + 1] = -1;
        arr[target.x + 1 - 1][target.y - 1] = -1;
        arr[target.x + 1 + 1][target.y - 1] = -1;
        arr[target.x + 1 - 1][target.y + 1] = -1;

    }






    if (((arr[target.x][target.y] - 10) == arr[target.x][target.y - 1] && arr[target.x][target.y - 1] == arr[target.x][target.y - 2]) && (target.y > 1))
    {
        arr[target.x][target.y] = -1;
        arr[target.x + 1][target.y] = -1;
        arr[target.x - 1][target.y] = -1;
        arr[target.x][target.y + 1] = -1;
        arr[target.x][target.y - 1] = -1;
        arr[target.x + 1][target.y + 1] = -1;
        arr[target.x - 1][target.y - 1] = -1;
        arr[target.x + 1][target.y - 1] = -1;
        arr[target.x - 1][target.y + 1] = -1;

    }
    if (arr[target.x][target.y] == (arr[target.x][target.y - 1] - 10) && (arr[target.x][target.y - 1] - 10) == arr[target.x][target.y - 2] && (target.y > 1))
    {
        arr[target.x][target.y - 1] = -1;
        arr[target.x + 1][target.y - 1] = -1;
        arr[target.x - 1][target.y - 1] = -1;
        arr[target.x][target.y - 1 + 1] = -1;
        arr[target.x][target.y - 1 - 1] = -1;
        arr[target.x + 1][target.y - 1 + 1] = -1;
        arr[target.x - 1][target.y - 1 - 1] = -1;
        arr[target.x + 1][target.y - 1 - 1] = -1;
        arr[target.x - 1][target.y - 1 + 1] = -1;

    }
    if (arr[target.x][target.y] == arr[target.x][target.y - 1] && arr[target.x][target.y - 1] == (arr[target.x][target.y - 2] - 10) && (target.y > 1))
    {
        arr[target.x][target.y - 2] = -1;
        arr[target.x + 1][target.y - 2] = -1;
        arr[target.x - 1][target.y - 2] = -1;
        arr[target.x][target.y - 2 + 1] = -1;
        arr[target.x][target.y - 2 - 1] = -1;
        arr[target.x + 1][target.y - 2 + 1] = -1;
        arr[target.x - 1][target.y - 2 - 1] = -1;
        arr[target.x + 1][target.y - 2 - 1] = -1;
        arr[target.x - 1][target.y - 2 + 1] = -1;

    }






    if (((arr[target.x][target.y] - 10) == arr[target.x][target.y - 1] && (arr[target.x][target.y]-10) == arr[target.x][target.y + 1]) && target.y > 0 && target.y < 7)
    {
        arr[target.x][target.y] = -1;
        arr[target.x + 1][target.y] = -1;
        arr[target.x - 1][target.y] = -1;
        arr[target.x][target.y + 1] = -1;
        arr[target.x][target.y - 1] = -1;
        arr[target.x + 1][target.y + 1] = -1;
        arr[target.x - 1][target.y - 1] = -1;

    }
    if (arr[target.x][target.y] == (arr[target.x][target.y - 1] - 10) && arr[target.x][target.y] == arr[target.x][target.y + 1] && target.y > 0 && target.y < 7)
    {
        arr[target.x][target.y - 1] = -1;
        arr[target.x + 1][target.y - 1] = -1;
        arr[target.x - 1][target.y - 1] = -1;
        arr[target.x][target.y - 1 + 1] = -1;
        arr[target.x][target.y - 1 - 1] = -1;
        arr[target.x + 1][target.y - 1 + 1] = -1;
        arr[target.x - 1][target.y - 1 - 1] = -1;
        arr[target.x + 1][target.y - 1 - 1] = -1;
        arr[target.x - 1][target.y - 1 + 1] = -1;

    }
    if (arr[target.x][target.y] == arr[target.x][target.y - 1] && arr[target.x][target.y] == (arr[target.x][target.y + 1] - 10) && target.y > 0 && target.y < 7)
    {
        arr[target.x][target.y + 1] = -1;
        arr[target.x + 1][target.y + 1] = -1;
        arr[target.x - 1][target.y + 1] = -1;
        arr[target.x][target.y + 1 + 1] = -1;
        arr[target.x][target.y + 1 - 1] = -1;
        arr[target.x + 1][target.y + 1 + 1] = -1;
        arr[target.x - 1][target.y + 1 - 1] = -1;
        arr[target.x + 1][target.y + 1 - 1] = -1;
        arr[target.x - 1][target.y + 1 + 1] = -1;

    }




    //to check for normal code i.e without destroyer


    if (arr[target.x][target.y] == arr[target.x + 1][target.y] && arr[target.x + 1][target.y] == (arr[target.x + 2][target.y]) && target.x < 6)
    {
        arr[target.x][target.y] = sum; arr[target.x + 1][target.y] = sum; arr[target.x + 2][target.y] = sum;

    }
    if (arr[target.x][target.y] == arr[target.x - 1][target.y] && arr[target.x - 1][target.y] == arr[target.x - 2][target.y] && target.x > 1)
    {
        arr[target.x][target.y] = sum; arr[target.x - 1][target.y] = sum; arr[target.x - 2][target.y] = sum;
    }
    if (arr[target.x][target.y] == arr[target.x][target.y + 1] && arr[target.x][target.y + 1] == (arr[target.x][target.y + 2]) && target.y < 6)
    {
        arr[target.x][target.y] = sum; arr[target.x][target.y + 1] = sum; arr[target.x][target.y + 2] = sum;
    }
    if (arr[target.x][target.y] == arr[target.x][target.y - 1] && arr[target.x][target.y - 1] == arr[target.x][target.y - 2] && target.y > 1)
    {
        arr[target.x][target.y] = sum; arr[target.x][target.y - 1] = sum; arr[target.x][target.y - 2] = sum;
    }
    if (arr[target.x][target.y] == arr[target.x - 1][target.y] && arr[target.x][target.y] == (arr[target.x + 1][target.y]) && target.x > 0 && target.x < 7)
    {
        arr[target.x][target.y] = sum; arr[target.x - 1][target.y] = sum; arr[target.x + 1][target.y] = sum;

    }
    if (arr[target.x][target.y] == arr[target.x][target.y - 1] && arr[target.x][target.y] == (arr[target.x][target.y + 1]) && target.y > 0 && target.y < 7)
    {
        arr[target.x][target.y] = sum; arr[target.x][target.y - 1] = sum; arr[target.x][target.y + 1] = sum;
    }
    return opt;
}



void movertotop(int gride[][8],int i,int j, sf::Sprite gridsp[][8], sf::Texture gemt, sf::Texture gem1t, sf::Texture gem2t, sf::Texture gem3t, sf::Texture gem4t, sf::Texture gem5t, sf::Texture gem6t)
{
    for (; i > 0; i--)
    {
        if (gride[i][j] == -1)
        {
            swap(gride[i][j], gride[i-1][j ]);
            
        }
    }

}

bool spacechecker(sf::Sprite& Sprite1, sf::Sprite& Sprite2)
{
    int flag = false;
    sf::Vector2f hello;
    sf::Vector2f hello2;
    hello = Sprite1.getPosition();
    hello2 = Sprite2.getPosition();

    if (hello.x - hello2.x == 62.5 && hello.y - hello2.y == 0)
    {
        flag = true;
    }
    else if (hello.x - hello2.x == -62.5 && hello.y - hello2.y == 0)
    {
        flag = true;
    }
    else if (hello.y - hello2.y == 90 && hello.x - hello2.x == 0)
    {

        flag = true;
    }
    else if (hello.y - hello2.y == -90 && hello.x - hello2.x == 0)
    {
        flag = true;
    }
    return flag;
}



bool checker(int arr[][8], sf::Vector2i target)
{

    int check = false;


    //for l shaped destroyer
    if ((((arr[target.x][target.y] - 5) == arr[target.x + 1][target.y] && arr[target.x + 1][target.y] == arr[target.x + 2][target.y]) || (arr[target.x][target.y] == (arr[target.x + 1][target.y] - 5) && (arr[target.x + 1][target.y] - 5) == arr[target.x + 2][target.y]) || (arr[target.x][target.y] == arr[target.x + 1][target.y] && arr[target.x + 1][target.y] == (arr[target.x + 2][target.y] - 5))) && (target.x < 6))
    {
        check = true;

    }
    if ((((arr[target.x][target.y] - 5) == arr[target.x - 1][target.y] && arr[target.x - 1][target.y] == arr[target.x - 2][target.y]) || (arr[target.x][target.y] == (arr[target.x - 1][target.y] - 5) && (arr[target.x - 1][target.y] - 5) == arr[target.x - 2][target.y]) || (arr[target.x][target.y] == arr[target.x - 1][target.y] && arr[target.x - 1][target.y] == (arr[target.x - 2][target.y] - 5))) && (target.x > 1))
    {
        check = true;

    }
    if ((((arr[target.x][target.y] - 5) == arr[target.x][target.y + 1] && arr[target.x][target.y + 1] == arr[target.x][target.y + 2]) || (arr[target.x][target.y] == (arr[target.x][target.y + 1] - 5) && (arr[target.x][target.y + 1] - 5) == arr[target.x][target.y + 2]) || (arr[target.x][target.y] == arr[target.x][target.y + 1] && arr[target.x][target.y + 1] == (arr[target.x][target.y + 2] - 5))) && target.y < 6)
    {
        check = true;

    }
    if (((arr[target.x][target.y] - 5) == arr[target.x][target.y - 1] && arr[target.x][target.y - 1] == arr[target.x][target.y - 2]) || (arr[target.x][target.y] == (arr[target.x][target.y - 1] - 5) && (arr[target.x][target.y - 1] - 5) == arr[target.x][target.y - 2]) || (arr[target.x][target.y] == arr[target.x][target.y - 1] && arr[target.x][target.y - 1] == (arr[target.x][target.y - 2] - 5)) && (target.y > 1))
    {
        check = true;
    }
    if (((arr[target.x][target.y] - 5) == arr[target.x - 1][target.y] && arr[target.x][target.y] == arr[target.x + 1][target.y]) || (arr[target.x][target.y] == (arr[target.x - 1][target.y] - 5) && arr[target.x][target.y] == arr[target.x + 1][target.y]) || (arr[target.x][target.y] == arr[target.x - 1][target.y] && arr[target.x][target.y] == (arr[target.x + 1][target.y] - 5)) && target.x > 0 && target.x < 7)
    {
        check = true;

    }
    if (((arr[target.x][target.y] - 5) == arr[target.x][target.y - 1] && arr[target.x][target.y] == arr[target.x][target.y + 1]) || (arr[target.x][target.y] == (arr[target.x][target.y - 1] - 5) && arr[target.x][target.y] == arr[target.x][target.y + 1]) || (arr[target.x][target.y] == arr[target.x][target.y - 1] && arr[target.x][target.y] == (arr[target.x][target.y + 1] - 5)) && target.y > 0 && target.y < 7)
    {
        check = true;
    }



    //to check for bomb


    if ((((arr[target.x][target.y] - 10) == arr[target.x + 1][target.y] && arr[target.x + 1][target.y] == arr[target.x + 2][target.y]) || (arr[target.x][target.y] == (arr[target.x + 1][target.y] - 10) && (arr[target.x + 1][target.y] - 10) == arr[target.x + 2][target.y]) || (arr[target.x][target.y] == arr[target.x + 1][target.y] && arr[target.x + 1][target.y] == (arr[target.x + 2][target.y] - 10))) && (target.x < 6))
    {
        check = true;

    }
    if ((((arr[target.x][target.y] - 10) == arr[target.x - 1][target.y] && arr[target.x - 1][target.y] == arr[target.x - 2][target.y]) || (arr[target.x][target.y] == (arr[target.x - 1][target.y] - 10) && (arr[target.x - 1][target.y] - 10) == arr[target.x - 2][target.y]) || (arr[target.x][target.y] == arr[target.x - 1][target.y] && arr[target.x - 1][target.y] == (arr[target.x - 2][target.y] - 10)))/* && (target.x > 1)*/)
    {
        cout << 67575757 << endl;
        check = true;

    }
    if ((((arr[target.x][target.y] - 10) == arr[target.x][target.y + 1] && arr[target.x][target.y + 1] == arr[target.x][target.y + 2]) || (arr[target.x][target.y] == (arr[target.x][target.y + 1] - 10) && (arr[target.x][target.y + 1] - 10) == arr[target.x][target.y + 2]) || (arr[target.x][target.y] == arr[target.x][target.y + 1] && arr[target.x][target.y + 1] == (arr[target.x][target.y + 2] - 10))) && target.y < 6)
    {
        check = true;

    }
    if (((arr[target.x][target.y] - 10) == arr[target.x][target.y - 1] && arr[target.x][target.y - 1] == arr[target.x][target.y - 2]) || (arr[target.x][target.y] == (arr[target.x][target.y - 1] - 10) && (arr[target.x][target.y - 1] - 10) == arr[target.x][target.y - 2]) || (arr[target.x][target.y] == arr[target.x][target.y - 1] && arr[target.x][target.y - 1] == (arr[target.x][target.y - 2] - 10)) && (target.y > 1))
    {
        check = true;
    }
    if ((((arr[target.x][target.y] - 10) == arr[target.x - 1][target.y] && (arr[target.x][target.y]-10) == (arr[target.x + 1][target.y])) || (arr[target.x][target.y] == (arr[target.x - 1][target.y] - 10) && arr[target.x][target.y] == arr[target.x + 1][target.y]) || (arr[target.x][target.y] == arr[target.x - 1][target.y] && arr[target.x][target.y] == (arr[target.x + 1][target.y] - 10))) && target.x > 0 && target.x < 7)
    {
        check = true;

    }
    if (((arr[target.x][target.y] - 10) == arr[target.x][target.y - 1] && (arr[target.x][target.y] -10)== arr[target.x][target.y + 1]) || (arr[target.x][target.y] == (arr[target.x][target.y - 1] - 10) && arr[target.x][target.y] == arr[target.x][target.y + 1]) || (arr[target.x][target.y] == arr[target.x][target.y - 1] && arr[target.x][target.y] == (arr[target.x][target.y + 1] - 10)) && target.y > 0 && target.y < 7)
    {
        check = true;
    }


    //for normal code

    if (arr[target.x][target.y] == arr[target.x + 1][target.y] && arr[target.x + 1][target.y] == (arr[target.x + 2][target.y]) && target.x < 6)
    {
        check = true;
    }
    if (arr[target.x][target.y] == arr[target.x - 1][target.y] && arr[target.x - 1][target.y] == arr[target.x - 2][target.y] && target.x > 1)
    {
        check = true;
    }
    if (arr[target.x][target.y] == arr[target.x][target.y + 1] && arr[target.x][target.y + 1] == (arr[target.x][target.y + 2]) && target.y < 6)
    {
        check = true;
    }
    if (arr[target.x][target.y] == arr[target.x][target.y - 1] && arr[target.x][target.y - 1] == arr[target.x][target.y - 2] && target.y > 1)
    {
        check = true;
    }
    if (arr[target.x][target.y] == arr[target.x - 1][target.y] && arr[target.x][target.y] == (arr[target.x + 1][target.y]) && target.x > 0 && target.x < 7)
    {
        check = true;
    }
    if (arr[target.x][target.y] == arr[target.x][target.y - 1] && arr[target.x][target.y] == (arr[target.x][target.y + 1]) && target.y > 0 && target.y < 7)
    {
        check = true;
    }
    return check;
}

bool checker2(int arr[][8], int i, int j)
{
    //since l-shape is needed later so all in if and not else if
    int check = false;
    //cout << j + 1 << i << endl;
    //cout << arr[i][j] << " " << arr[i][j + 1] << " " << arr[i][j - 1] << " " << (i < 7) << endl;

    if (arr[i][j] == arr[i + 1][j] && arr[i + 1][j] == (arr[i + 2][j]) && i < 6)
    {
        check = true;
    }
    if (arr[i][j] == arr[i - 1][j] && arr[i - 1][j] == arr[i - 2][j] && i > 1)
    {
        check = true;
    }
    if (arr[i][j] == arr[i][j + 1] && arr[i][j + 1] == (arr[i][j + 2]) && j < 6)
    {
        check = true;
    }
    if (arr[i][j] == arr[i][j - 1] && arr[i][j - 1] == arr[i][j - 2] && j > 1)
    {
        check = true;
    }
    if (arr[i][j] == arr[i - 1][j] && arr[i][j] == (arr[i + 1][j]) && i > 0 && i < 7)
    {
        check = true;
    }
    if (arr[i][j] == arr[i][j - 1] && arr[i][j] == (arr[i][j + 1]) && j > 0 && j < 7)
    {
        check = true;
    }

    return check;
}

bool exchangeSpritepositions(sf::Sprite& Sprite1, sf::Sprite& Sprite2, int x_1, int x_2, int y_1, int y_2, sf::Sprite gridsp[][8]) {
    int found = 0;
    if (spacechecker(Sprite1, Sprite2))
    { // swap the positions of the Sprites
        sf::Vector2f tempposition = Sprite1.getPosition();
        Sprite1.setPosition(Sprite2.getPosition());
        Sprite2.setPosition(tempposition);

        //  update the positions in the 2d array if necessary

        std::swap(gridsp[x_1][y_1], gridsp[x_2][y_2]);
        found = true;
    }
    return found;
}

void GameOverWindow(int nscore,sf::Font font);


void game()
{

    sf::RenderWindow window(sf::VideoMode(1000, 720), "My Program");
   

    //making int grid 
    int gride[8][8] = { {0},{0} };

    //filling the grid with random variables

    for (int i = 0; i < 8; i++)
    {
        srand((rand() * 73) / 17);
        for (int j = 0; j < 8; j++)
        {
            gride[i][j] = rand() % 5;
        }
    }
    //making Sprite grid
    sf::Sprite gridsp[8][8];


    //declaration and loading of Texture
    sf::Texture gemt, gem1t, gem2t, gem3t, gem4t, gem5t, gem6t,dstt,dst1t,dst2t,dst3t,dst4t,bmbt,bmb1t,bmb2t,bmb3t,bmb4t;

    gemt.loadFromFile("c:\\users\\g\\desktop\\cmake-sfml-project-master\\build\\bin\\release\\bejeweled_blue_gem_promotional.png");
    gem1t.loadFromFile("c:\\users\\g\\desktop\\cmake-sfml-project-master\\build\\bin\\release\\bejeweled_white_gem_promotional.png");
    gem2t.loadFromFile("c:\\users\\g\\desktop\\cmake-sfml-project-master\\build\\bin\\release\\bejeweled_yellow_gem_promotional.png");
    gem3t.loadFromFile("c:\\users\\g\\desktop\\cmake-sfml-project-master\\build\\bin\\release\\bejeweled_purple_gem_promotional.png");
    gem4t.loadFromFile("c:\\users\\g\\desktop\\cmake-sfml-project-master\\build\\bin\\release\\bejeweled_red_gem_promotional.png");
    dstt.loadFromFile("C:\\Users\\g\\Desktop\\gems\\blue bmb.jpg");
    dst1t.loadFromFile("C:\\Users\\g\\Desktop\\gems\\white bmb.jpg");
    dst2t.loadFromFile("C:\\Users\\g\\Desktop\\gems\\yellow bmb.jpg");
    dst3t.loadFromFile("C:\\Users\\g\\Desktop\\gems\\purple bmb.jpg");
    dst4t.loadFromFile("C:\\Users\\g\\Desktop\\gems\\red bmb.jpg");
    bmbt.loadFromFile("C:\\Users\\g\\Desktop\\gems\\blue dst.jpg");
    bmb1t.loadFromFile("C:\\Users\\g\\Desktop\\gems\\white dst.jpg");
    bmb2t.loadFromFile("C:\\Users\\g\\Desktop\\gems\\yellow dst.jpg");
    bmb3t.loadFromFile("C:\\Users\\g\\Desktop\\gems\\purple dst.jpg");
    bmb4t.loadFromFile("C:\\Users\\g\\Desktop\\gems\\red dst.jpg");
    

    //setting the Texture
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (gride[i][j] == 0)
            {
                gridsp[i][j].setTexture(gemt);
            }

            if (gride[i][j] == 1)
            {
                gridsp[i][j].setTexture(gem1t);
            }

            if (gride[i][j] == 2)
            {
                gridsp[i][j].setTexture(gem2t);
            }

            if (gride[i][j] == 3)
            {
                gridsp[i][j].setTexture(gem3t);
            }

            if (gride[i][j] == 4)
            {
                gridsp[i][j].setTexture(gem4t);
            }
            if (gride[i][j] == 5)
            {
                gridsp[i][j].setTexture(dstt);
            }
            if (gride[i][j] == 6)
            {
                gridsp[i][j].setTexture(dst1t);
            }
            if (gride[i][j] == 7)
            {
                gridsp[i][j].setTexture(dst2t);
            }
            if (gride[i][j] == 8)
            {
                gridsp[i][j].setTexture(dst3t);
            }
            if (gride[i][j] == 9)
            {
                gridsp[i][j].setTexture(dst4t);
            }
           
        }
    }


    // changing size
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            sf::Vector2f scale = gridsp[i][j].getScale();
            gridsp[i][j].setScale(scale.x * 0.25, scale.y * 0.25);
        }

    }
    // declaration of cursor and its Texture loading
    sf::Sprite mover;

    sf::Texture mover2;
    if (!mover2.loadFromFile("C:\\Users\\g\\Downloads\\russia.png"))
    {
        std::cout << "failed to load mover" << endl;
    }

    //////////// fixing size of cursor by changing scale


    // define the desired dimensions in pixels
    float desiredwidthpixels = 65.0f;
    float desiredheightpixels = 94.0f;

    // calculate the scale factors to achieve specific dimensions
    float scalex = desiredwidthpixels / mover2.getSize().x;
    float scaley = desiredheightpixels / mover2.getSize().y;

    mover.setTexture(mover2);

    // set the scale to achieve specific dimensions
    mover.setScale(scalex, scaley);

    sf::Vector2f cursor(500, 0);
    mover.setPosition(cursor);

    /////declaring and setting background Texture.
    sf::Texture Texture;
    if (!Texture.loadFromFile("c:\\users\\g\\desktop\\cmake-sfml-project-master\\src\\haha.jpg"))
    {
        std::cout << "failed to load" << endl;
    }

    sf::RectangleShape cover(sf::Vector2f(1000, 720));
    cover.setTexture(&Texture);

    ///getting gray semi-transparent background for grid
    sf::RectangleShape grid;
    grid.setSize(sf::Vector2f(500, 1000));
    sf::Vector2f pos(500, 0);
    grid.setPosition(pos);
    grid.setFillColor(sf::Color(255, 255, 255, 0));

    sf::RectangleShape border;
    border.setSize(sf::Vector2f(1000,1330));
    border.setPosition(sf::Vector2f(400,-320));
    sf::Texture grid2;
    grid2.loadFromFile("C:\\Users\\g\\Downloads\\omg.png");
    border.setTexture(&grid2);

    //making scorebox and score

    sf::CircleShape score(35);
    sf::RectangleShape scorebox(sf::Vector2f(230, 100));
    sf::Texture scoreboxt;
    scoreboxt.loadFromFile("score.png");
    scorebox.setTexture(&scoreboxt);
    scorebox.setPosition(sf::Vector2f(50, 100));
    score.setPosition(sf::Vector2f(130, 110));


    //loading font
    sf::Font sfont;
    if (!sfont.loadFromFile("c:\\users\\g\\downloads\\marker felt.ttf"))
    {
        std::cout << "font not loaded" << endl;
    }

    //loading text and adding string
    sf::Text text;
    text.setFont(sfont);
    text.setPosition(205, 135);
    text.setCharacterSize(20);
    text.setFillColor(sf::Color::Black);
    int nscore = 0;  // the score variable
    text.setString("x" + std::to_string(nscore));


    //button for no replaced found
    sf::Text text2;
    text2.setFont(sfont);
    text2.setPosition(105, 405);
    text2.setCharacterSize(20);
    text2.setFillColor(sf::Color::Red);
    text2.setString("PRESS S IF NO SWAPS AVAILABLE");


    //initializing variables for drawing lines
    sf::Vector2f lineposition1v(sf::Vector2f(500, 0));
    sf::Vector2f lineposition2v(sf::Vector2f(500, 1000));
    sf::Vector2f lineposition1h(sf::Vector2f(500, 0));
    sf::Vector2f lineposition2h(sf::Vector2f(1000, 0));

    sf::Vertex vline[] =
    {
        sf::Vertex(lineposition1v),
        sf::Vertex(lineposition2v),
    };
    sf::Vertex hline[] =
    {
        sf::Vertex(lineposition1h),
        sf::Vertex(lineposition2h),
    };

    // initiazing variable for gemposition setting.
    sf::Vector2f gemposition(500, 0);


    //cursor position Vector 
    sf::Vector2f cursorpos = mover.getPosition();
    sf::Vector2f current;
    sf::Vector2f target;
    sf::Vector2i gridvalue1;
    sf::Vector2i gridvalue2;
    

    int x = -6;
    int y = -6;

    //setting position of all Sprites in Sprite 2-d array based on earlier int array.
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
           
            
                gridsp[i][j].setPosition(gemposition);
            

            gemposition.x += 62.5;

        }
        gemposition.x = 500;
        gemposition.y += 90;
    }



    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (checker2(gride, i, j))
            {
                sf::Vector2i new2(sf::Vector2i(i, j));
                prereplacer2(gride, new2);

            }

        }

    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (gride[i][j] == -1)
            {
                gride[i][j] = generaterandom(a);
            }

        }

    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (gride[i][j] == 0)
            {
                gridsp[i][j].setTexture(gemt);
            }

            if (gride[i][j] == 1)
            {
                gridsp[i][j].setTexture(gem1t);
            }

            if (gride[i][j] == 2)
            {
                gridsp[i][j].setTexture(gem2t);
            }

            if (gride[i][j] == 3)
            {
                gridsp[i][j].setTexture(gem3t);
            }

            if (gride[i][j] == 4)
            {
                gridsp[i][j].setTexture(gem4t);
            }
            if (gride[i][j] == 5)
            {
                gridsp[i][j].setTexture(dstt);
            }
            if (gride[i][j] == 6)
            {
                gridsp[i][j].setTexture(dst1t);
            }
            if (gride[i][j] == 7)
            {
                gridsp[i][j].setTexture(dst2t);
            }
            if (gride[i][j] == 8)
            {
                gridsp[i][j].setTexture(dst3t);
            }
            if (gride[i][j] == 9)
            {
                gridsp[i][j].setTexture(dst4t);
            }
            if (gride[i][j] == -1)
            {
                gridsp[i][j].setColor(sf::Color(0, 0, 0, 0));
            }
        }
    }


    //basically variable to define movement of cursor (jumping squares across grid)
    sf::Vector2f movementspeed(62.5, 90);

    //variables to be used inside event loop.

    double duration = 500;
    sf::Clock clock;
    sf::Text timertext;
    timertext.setFont(sfont);
    timertext.setPosition(sf::Vector2f(105, 500));
    timertext.setCharacterSize(40);
    int count = 0;
    bool flag = 0;

    while (window.isOpen())
    {
        sf::Time elapsed = clock.getElapsedTime();
        int remainingtime = duration - static_cast<int>(elapsed.asSeconds());
        timertext.setString("TIMER: "+ std::to_string(remainingtime / 60) + " : " + std::to_string(remainingtime % 60));


        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                sf::Vector2i new2(sf::Vector2i(i, j));
                if (!fourchecker(gride, new2) && !l(gride, new2))
                {
                    if (checker(gride, new2))
                    {
                        prereplacer2(gride, new2);

                    }
                }
            }

        }
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (gride[i][j] == -1)
                {
                    gride[i][j] = generaterandom(a);
                }

            }

        }

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (gride[i][j] == 0)
                {
                    gridsp[i][j].setTexture(gemt);
                }

                if (gride[i][j] == 1)
                {
                    gridsp[i][j].setTexture(gem1t);
                }

                if (gride[i][j] == 2)
                {
                    gridsp[i][j].setTexture(gem2t);
                }

                if (gride[i][j] == 3)
                {
                    gridsp[i][j].setTexture(gem3t);
                }

                if (gride[i][j] == 4)
                {
                    gridsp[i][j].setTexture(gem4t);
                }

                if (gride[i][j] == 5)
                {
                    gridsp[i][j].setTexture(dstt);
                }
                if (gride[i][j] == 6)
                {
                    gridsp[i][j].setTexture(dst1t);
                }
                if (gride[i][j] == 7)
                {
                    gridsp[i][j].setTexture(dst2t);
                }
                if (gride[i][j] == 8)
                {
                    gridsp[i][j].setTexture(dst3t);
                }
                if (gride[i][j] == 9)
                {
                    gridsp[i][j].setTexture(dst4t);
                }
                if (gride[i][j] == 10)
                {
                    gridsp[i][j].setTexture(bmbt);
                }
                if (gride[i][j] == 11)
                {
                    gridsp[i][j].setTexture(bmb1t);
                }
                if (gride[i][j] == 12)
                {
                    gridsp[i][j].setTexture(bmb2t);
                }
                if (gride[i][j] == 13)
                {
                    gridsp[i][j].setTexture(bmb3t);
                }
                if (gride[i][j] == 14)
                {
                    gridsp[i][j].setTexture(bmb4t);
                }
                if (gride[i][j] == -1)
                {
                    gridsp[i][j].setColor(sf::Color(0, 0, 0, 0));
                }
            }
        }
        if (remainingtime == 0)
        {
            window.close();
        }
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
          
            else if (event.type == sf::Event::KeyPressed)
            {
                cursorpos = mover.getPosition();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
                {
                    for (int i = 0; i < 8; i++)
                    {
                        srand((rand() * 73) / 18);
                        for (int j = 0; j < 8; j++)
                        {
                            gride[i][j] = rand() % 5;
                        }
                    }
                    for (int i = 0; i < 8; i++)
                    {
                        for (int j = 0; j < 8; j++)
                        {
                            if (gride[i][j] == 0)
                            {
                                gridsp[i][j].setTexture(gemt);
                            }

                            if (gride[i][j] == 1)
                            {
                                gridsp[i][j].setTexture(gem1t);
                            }

                            if (gride[i][j] == 2)
                            {
                                gridsp[i][j].setTexture(gem2t);
                            }

                            if (gride[i][j] == 3)
                            {
                                gridsp[i][j].setTexture(gem3t);
                            }

                            if (gride[i][j] == 4)
                            {
                                gridsp[i][j].setTexture(gem4t);
                            }
                            if (gride[i][j] == 5)
                            {
                                gridsp[i][j].setTexture(dstt);


                            }
                            if (gride[i][j] == 6)
                            {
                                gridsp[i][j].setTexture(dst1t);

                            }
                            if (gride[i][j] == 7)
                            {
                                gridsp[i][j].setTexture(dst2t);

                            }
                            if (gride[i][j] == 8)
                            {
                                gridsp[i][j].setTexture(dst3t);

                            }
                            if (gride[i][j] == 9)
                            {
                                gridsp[i][j].setTexture(dst4t);

                            }
                            if (gride[i][j] == 10)
                            {
                                gridsp[i][j].setTexture(bmbt);
                            }
                            if (gride[i][j] == 11)
                            {
                                gridsp[i][j].setTexture(bmb1t);
                            }
                            if (gride[i][j] == 12)
                            {
                                gridsp[i][j].setTexture(bmb2t);
                            }
                            if (gride[i][j] == 13)
                            {
                                gridsp[i][j].setTexture(bmb3t);
                            }
                            if (gride[i][j] == 14)
                            {
                                gridsp[i][j].setTexture(bmb4t);
                            }
                            if (gride[i][j] == -1)
                            {
                                gridsp[i][j].setColor(sf::Color(0, 0, 0, 0));
                            }
                        }
                    }
                }


                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                {
                    if (cursorpos.x > 500)
                        mover.move(-movementspeed.x, 0);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                {
                    if (cursorpos.x < 1000 - 62.5)
                        mover.move(movementspeed.x, 0);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
                {
                    if (cursorpos.y > 0)
                        mover.move(0, -movementspeed.y);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
                {
                    if (cursorpos.y < 720 - 90)
                        mover.move(0, movementspeed.y);
                }

                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
                {
                    cursorpos = mover.getPosition();
                    cout << cursorpos.x << " 1 " << cursorpos.y << endl;


                    if (count == 0)
                    {
                        current = cursorpos;
                        count++;
                        gridvalue1.y = (current.x / 62.5) - 8;
                        gridvalue1.x = current.y / 90;
                        flag = false;
                    }
                    else if (count == 1)
                    {
                        cursorpos = mover.getPosition();
                        cout << cursorpos.x << " 2 " << cursorpos.y << endl;
                        target = cursorpos;
                        count++;
                        gridvalue2.y = (target.x / 62.5) - 8;
                        gridvalue2.x = target.y / 90;
                        cout << gridvalue1.x << " " << gridvalue1.y << " " << gridvalue2.x << " " << gridvalue2.y << endl;

                        //exchange positions of the Sprite if they are one block away horizontally or vertically
                        if (exchangeSpritepositions(gridsp[gridvalue1.x][gridvalue1.y], gridsp[gridvalue2.x][gridvalue2.y], gridvalue1.x, gridvalue2.x, gridvalue1.y, gridvalue2.y, gridsp))
                        {
                            swap(gride[gridvalue1.x][gridvalue1.y], gride[gridvalue2.x][gridvalue2.y]);
                            print2Darray(gride);
                            // checks if the newly swapped Sprites make a combination otherwisw swap them back.

                            if (!checker(gride, gridvalue1) && !checker(gride, gridvalue2))
                            {
                                if (exchangeSpritepositions(gridsp[gridvalue1.x][gridvalue1.y], gridsp[gridvalue2.x][gridvalue2.y], gridvalue1.x, gridvalue2.x, gridvalue1.y, gridvalue2.y, gridsp))
                                {

                                    swap(gride[gridvalue1.x][gridvalue1.y], gride[gridvalue2.x][gridvalue2.y]);
                                    print2Darray(gride);
                                }
                            }
                            else
                            {
                                x = gride[gridvalue1.x][gridvalue1.y];
                                y = gride[gridvalue2.x][gridvalue2.y];
                                if (l(gride, gridvalue2) || l(gride, gridvalue1))
                                {

                                    if (l(gride, gridvalue1))
                                    {
                                        gride[gridvalue1.x][gridvalue1.y] = x + 5;
                                        nscore += 50;
                                        text.setString("x" + std::to_string(nscore));

                                    }
                                    if (l(gride, gridvalue2))
                                    {
                                        gride[gridvalue2.x][gridvalue2.y] = y + 5;
                                        nscore += 50;
                                        text.setString("x" + std::to_string(nscore));
                                    }
                                }



                                if (fourchecker(gride, gridvalue1) || fourchecker(gride, gridvalue2))
                                {
                                    if (fourchecker(gride, gridvalue1))
                                    {
                                        gride[gridvalue1.x][gridvalue1.y] = x + 10;
                                        nscore += 30;
                                        text.setString("x" + std::to_string(nscore));
                                    }
                                    if (fourchecker(gride, gridvalue2))
                                    {
                                        gride[gridvalue2.x][gridvalue2.y] = y + 10;
                                        nscore += 30;
                                        text.setString("x" + std::to_string(nscore));
                                    }

                                }

                                if (checker(gride, gridvalue1) || checker(gride, gridvalue2))
                                {
                                    if (checker(gride, gridvalue1))
                                    {
                                        prereplacer2(gride, gridvalue1);
                                        print2Darray(gride);

                                        nscore += 20;
                                        text.setString("x" + std::to_string(nscore));
                                    }

                                    if (checker(gride, gridvalue2))
                                    {
                                        prereplacer2(gride, gridvalue2);

                                        print2Darray(gride);

                                        nscore += 20;
                                        text.setString("x" + std::to_string(nscore));
                                    }
                                }


                            }



                            for (int i = 0; i < 8; i++)
                            {
                                for (int j = 0; j < 8; j++)
                                {
                                    if (gride[i][j] == -1)
                                    {
                                        movertotop(gride, i, j, gridsp, gemt, gem1t, gem2t, gem3t, gem4t, gem5t, gem6t);
                                        print2Darray(gride);
                                    }

                                }

                            }
                            for (int i = 0; i < 8; i++)
                            {
                                for (int j = 0; j < 8; j++)
                                {
                                    if (gride[i][j] == -1)
                                    {
                                        gride[i][j] = generaterandom(a);
                                    }

                                }

                            }
                            for (int i = 0; i < 8; i++)
                            {
                                for (int j = 0; j < 8; j++)
                                {
                                    if (gride[i][j] == 0)
                                    {
                                        gridsp[i][j].setTexture(gemt);
                                    }

                                    if (gride[i][j] == 1)
                                    {
                                        gridsp[i][j].setTexture(gem1t);
                                    }

                                    if (gride[i][j] == 2)
                                    {
                                        gridsp[i][j].setTexture(gem2t);
                                    }

                                    if (gride[i][j] == 3)
                                    {
                                        gridsp[i][j].setTexture(gem3t);
                                    }

                                    if (gride[i][j] == 4)
                                    {
                                        gridsp[i][j].setTexture(gem4t);
                                    }
                                    if (gride[i][j] == 5)
                                    {
                                        gridsp[i][j].setTexture(dstt);
                                        
                                        
                                    }
                                    if (gride[i][j] == 6)
                                    {
                                        gridsp[i][j].setTexture(dst1t);
                                        
                                    }
                                    if (gride[i][j] == 7)
                                    {
                                        gridsp[i][j].setTexture(dst2t);
                                        
                                    }
                                    if (gride[i][j] == 8)
                                    {
                                        gridsp[i][j].setTexture(dst3t);
                                        
                                    }
                                    if (gride[i][j] == 9)
                                    {
                                        gridsp[i][j].setTexture(dst4t);
                                        
                                    }
                                    if (gride[i][j] == 10)
                                    {
                                        gridsp[i][j].setTexture(bmbt);
                                    }
                                    if (gride[i][j] == 11)
                                    {
                                        gridsp[i][j].setTexture(bmb1t);
                                    }
                                    if (gride[i][j] == 12)
                                    {
                                        gridsp[i][j].setTexture(bmb2t);
                                    }
                                    if (gride[i][j] == 13)
                                    {
                                        gridsp[i][j].setTexture(bmb3t);
                                    }
                                    if (gride[i][j] == 14)
                                    {
                                        gridsp[i][j].setTexture(bmb4t);
                                    }
                                    if (gride[i][j] == -1)
                                    {
                                        gridsp[i][j].setColor(sf::Color(0, 0, 0, 0));
                                    }
                                }
                            }

                        
                          }
                       }

                    
                    //resets the grid indexes
                    if (count == 2)
                    {
                        gridvalue1 = (sf::Vector2i(0, 0));
                        gridvalue2 = (sf::Vector2i(0, 0));
                        count = 0;
                        
                       

                        for (int i = 0; i < 8; i++)
                        {
                            for (int j = 0; j < 8; j++)
                            {
                                if (gride[i][j] == 0)
                                {
                                    gridsp[i][j].setTexture(gemt);

                                }

                                if (gride[i][j] == 1)
                                {
                                    gridsp[i][j].setTexture(gem1t);
                                }

                                if (gride[i][j] == 2)
                                {
                                    gridsp[i][j].setTexture(gem2t);
                                }

                                if (gride[i][j] == 3)
                                {
                                    gridsp[i][j].setTexture(gem3t);
                                }

                                if (gride[i][j] == 4)
                                {
                                    gridsp[i][j].setTexture(gem4t);
                                }
                                if (gride[i][j] == 5)
                                {
                                    gridsp[i][j].setTexture(dstt);
                                }
                                if (gride[i][j] == 6)
                                {
                                    gridsp[i][j].setTexture(dst1t);
                                }
                                if (gride[i][j] == 7)
                                {
                                    gridsp[i][j].setTexture(dst2t);
                                }
                                if (gride[i][j] == 8)
                                {
                                    gridsp[i][j].setTexture(dst3t);
                                }
                                if (gride[i][j] == 9)
                                {
                                    gridsp[i][j].setTexture(dst4t);
                                }
                                if (gride[i][j] == 10)
                                {
                                    gridsp[i][j].setTexture(bmbt);
                                }
                                if (gride[i][j] == 11)
                                {
                                    gridsp[i][j].setTexture(bmb1t);
                                }
                                if (gride[i][j] == 12)
                                {
                                    gridsp[i][j].setTexture(bmb2t);
                                }
                                if (gride[i][j] == 13)
                                {
                                    gridsp[i][j].setTexture(bmb3t);
                                }
                                if (gride[i][j] == 14)
                                {
                                    gridsp[i][j].setTexture(bmb4t);
                                }
                                if (gride[i][j] == -1)
                                {
                                    gridsp[i][j].setColor(sf::Color(0, 0, 0, 0));
                                }
                            }
                        }
                    }

                }
            }

        }


        window.clear();

        window.draw(cover);
        window.draw(grid);


        // draw vertical lines
        for (int i = 0; i < 8; i++)
        {
            lineposition1v.x = 500 + 62.5 * i;
            lineposition2v.x = 500 + 62.5 * i;
            sf::Vertex vline[] =
            {
                sf::Vertex(lineposition1v),
                sf::Vertex(lineposition2v),
            };
            window.draw(vline, 2, sf::Lines);
        }

        // draw horizontal lines
        for (int i = 0; i < 8; i++)
        {
            lineposition1h.y = 90 * i;
            lineposition2h.y = 90 * i;
            sf::Vertex hline[] =
            {
                sf::Vertex(lineposition1h),
                sf::Vertex(lineposition2h),
            };
            window.draw(hline, 2, sf::Lines);
        }

        window.draw(scorebox);
        //window.draw(score);
        window.draw(text);
        window.draw(mover);

        gemposition.x = 500;
        gemposition.y = 0;


        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                window.draw(gridsp[i][j]);
            }
        }
        window.draw(border);
        window.draw(timertext);
        window.draw(text2);

   
        window.display();

    }
  
    
    GameOverWindow(nscore,sfont);
}

void GameOverWindow(int nscore,sf::Font font)
{
     sf::RenderWindow gameOver(sf::VideoMode(500,600), "GAME OVER!!!!!");
    while (gameOver.isOpen())
    {
        //setting the background
        sf::RectangleShape gameover(sf::Vector2f(500,600));
        sf::Texture end;
        end.loadFromFile("C:\\Users\\g\\Desktop\\gems\\game over.jpg");
        gameover.setTexture(&end);
        int highscore = 0;
        ifstream inFile("highscore.txt");
       
        inFile >> highscore;
       inFile.close();
        if (nscore > highscore)
        {
            remove("highscore.txt");
            ofstream outFile("highscore.txt");
            outFile << nscore;
            highscore = nscore;

        }
        sf::Text Score, highScore,congrats;
        Score.setFont(font);
        highScore.setFont(font);
        congrats.setFont(font);

        Score.setString("YOUR SCORE :    " + to_string(nscore));
        highScore.setString("HIGHSCORE :    " + to_string(highscore));
        congrats.setString("CONGRATULATIONS NEW HIGHSCORE!!!");

        congrats.setFillColor(sf::Color::Yellow);

        Score.setPosition(sf::Vector2f(100,450));
        highScore.setPosition(sf::Vector2f(100, 500));
        congrats.setPosition(sf::Vector2f(40, 70));

        congrats.setCharacterSize(28);
        sf::Event event;
        while (gameOver.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                gameOver.close();
            }

        }
        gameOver.clear();
        gameOver.draw(gameover);
        gameOver.draw(Score);
        gameOver.draw(highScore);
        if(highscore==nscore)
        gameOver.draw(congrats);
            gameOver.display();
    }
}
void credits()
{
    //setting the background
    sf::RenderWindow Credits(sf::VideoMode(1000, 720), "Credits");
    sf::Texture credits;
    sf::RectangleShape cdt(sf::Vector2f(1000, 720));
    //credits.loadFromFile("C:\\Users\\g\\Desktop\\gems\\pxfuel.jpg");
    //cdt.setTexture(&credits);
    cdt.setFillColor(sf::Color(0, 0, 128));

    sf::Text credit1,credit2;
    sf::Font f;
    f.loadFromFile("C:\\Users\\g\\Downloads\\Compressed\\crima\\Crima.ttf");
    credit1.setFont(f);
    credit2.setFont(f);
    credit1.setString("Abdullah Ahmad. Roll No: 23L-0629");
    credit2.setString("Ch. Muhammad Dawood. Roll No: 23L-0918");
    credit1.setPosition(sf::Vector2f(200,150));
    credit2.setPosition(sf::Vector2f(200,350));
    while (Credits.isOpen())
    {
        sf::Event event;
        while (Credits.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                Credits.close();
                
            }
        }
        Credits.clear();
        Credits.draw(cdt);
        Credits.draw(credit1);
        Credits.draw(credit2);
        Credits.display();
    }

}
int main()
{
    sf::RenderWindow menu(sf::VideoMode(1000, 720), "Menu");
    //setting the background
    sf::RectangleShape Menu(sf::Vector2f(1000, 720));
    sf::Texture end;
    end.loadFromFile("C:\\Users\\g\\Desktop\\gems\\pxfuel (1).jpg");
    Menu.setTexture(&end);

    sf::Text PLAY, END, CREDITS;
    sf::Font f;
    f.loadFromFile("C:\\Users\\g\\Downloads\\Compressed\\crima\\Crima.ttf");
    PLAY.setFont(f);
    END.setFont(f);
    CREDITS.setFont(f);


    PLAY.setString("PLAY");
    END.setString("EXITS");
    CREDITS.setString("CREDITS ");


    PLAY.setPosition(sf::Vector2f(100, 400));
    END.setPosition(sf::Vector2f(100, 500));
    CREDITS.setPosition(sf::Vector2f(100, 600));

    sf::Sprite cursor;
    sf::Texture cursort;
    cursort.loadFromFile("C:\\Users\\g\\Downloads\\russia.png");
    cursor.setTexture(cursort);
    cursor.scale(0.30, 0.1);
    cursor.setPosition(sf::Vector2f(80, 400));
    while (menu.isOpen())
    {


        sf::Vector2f pos = cursor.getPosition();
        sf::Event event;
        while (menu.pollEvent(event))
        {
            sf::Vector2f pos = cursor.getPosition();
            if (event.type == sf::Event::Closed)
            {
                menu.close();
            }
            else if (event.type == sf::Event::KeyPressed)
            {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)&& pos.y > 400)
                {
                    cursor.move(0, -100);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && pos.y < 600)
                {
                    cursor.move(0, 100);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
                {
                    if (pos.y == 400)
                    {
                        menu.close();
                        game();
                    }
                    if (pos.y == 500)
                    {
                        menu.close();
                    }
                    if (pos.y == 600)
                    {
                        credits();
                    }
                }
            }

      
        }
        menu.clear();
        menu.draw(Menu);
        menu.draw(PLAY);
        menu.draw(END);
        menu.draw(CREDITS);
       
        menu.draw(cursor);
        menu.display();
    
    
    
    }
}
    