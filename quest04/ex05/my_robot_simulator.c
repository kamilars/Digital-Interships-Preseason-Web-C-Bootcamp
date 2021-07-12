#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_robot_simulator(char* param_1)
{
    int x = 0;
    int y = 0;
    char face[] = "north";

    for (int i = 0; i < strlen(param_1); i++){
        if (param_1[i] == 'L') {
            switch (face[0]) {
                case 'n':
                    strcpy(face, "west");
                    break;
                case 'w':
                    strcpy(face, "south");
                    break;
                case 's':
                    strcpy(face, "east");
                    break;
                case 'e':
                    strcpy(face, "north");
                    break;
            }
        }
        else if (param_1[i] == 'R') {
            switch (face[0]) {
                case 'n':
                    strcpy(face, "east");
                    break;
                case 'w':
                    strcpy(face, "north");
                    break;
                case 's':
                    strcpy(face, "east");
                    break;
                case 'e':
                    strcpy(face, "south");
                    break;
            }
        }
        else if (param_1[i] == 'A'){
            switch (face[0]) {
                case 'n':
                    y--;
                    break;
                case 'w':
                    x--;
                    break;
                case 's':
                    y++;
                    break;
                case 'e':
                    x++;
                    break;
            }
        }
    }

  char *text = (char*)malloc(100 * sizeof(char));

  sprintf(text, "{x: %i, y: %i, bearing: '%s'}", x,y, face);
  return text;
}