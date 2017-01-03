#include <cs50.h>
#include <stdio.h>

#define MAX_PYRAMID_HEIGHT 23
#define PYRAMID_GAP "  "

int get_pyramid_height();
void print_pyramid(int height);

int main(void)
{
        int height = get_pyramid_height();
        print_pyramid(height);
}

//the following method prompts and attempts to receive a valid pyramid height from the user
int get_pyramid_height()
{
        bool is_height_valid = false;
        int height;
        
        //keep prompting user for the pyramid height till a valid one is entered
        while (!is_height_valid) {
        
                printf("Height: ");
                
                //check if user has inputted a valid pyramid height
                height = get_int();
                if (height >= 0 && height <= MAX_PYRAMID_HEIGHT) {
                        is_height_valid = true;
                }
        }
    
        return height;
}

void print_pyramid(int height)
{
        for (int level = 1; level <= height; level++) {
                
                //print first pyramid
                for (int i = level; i < height; i++) {
                        printf(" ");
                }
                for (int i = height - level; i < height; i++) {
                        printf("#");
                }
                
                //add the gap between half-pyramids
                printf(PYRAMID_GAP);
                
                //print second pyramid
                for (int i = height - level; i < height; i++) {
                        printf("#");
                }
                
                //print end line
                printf("\n");
        }
}