#include <stdio.h>

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
            map[rows][col].locName = "Empty hall";
            map[rows][col].desc = "You're standing in an empty hall."; 
        }
    }

    //DLI rooms
    

    // Player Loc
    
    struct Player player = {"", 2, 5, 100};

}