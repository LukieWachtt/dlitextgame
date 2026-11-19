#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct DliMap {
    const char *locName;
    const char *desc;
};

struct Player {
    char playerName[32];
    int locX;
    int locY;
    int hp;
};

int main(){
    struct DliMap map[5][5];

    for(int rows = 0; rows < 5; rows++){ // filling up the empty spaces
        for(int col = 0; col < 5; col++){
            strcpy(map[rows][col].locName, "Empty hall");
            strcpy(map[rows][col].desc, "You're standing in an empty hall."); 
        }
    }

    //DLI rooms
    strcpy(map[2][4].locName, "Main entrance");
    strcpy(map[2][4].desc, "You're standing at the main entrace.");

    // Player Loc
    
    struct Player player = {"", 2, 4, 100};

    while(1){
        printf("");
    } 

}