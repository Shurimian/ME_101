#include <cstdlib>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <iostream>
 
using namespace std;

 
const int SPACE = 50;
const int CHANGE = 25;
 
//B
void currentF(ifstream & fin, int position[SPACE], string nameCurrent[SPACE], int parkingSpot[SPACE]);
//C
int change(ifstream & fin, int status[CHANGE], string name[CHANGE]); 
//D
void removeF(int position[SPACE], string nameDelete[CHANGE], string name[SPACE], int fileSize);
//E
int bestSpot(int status[CHANGE], int position[SPACE], int parkingSpot[SPACE]);
//F
void assignSpot(int position[SPACE], int status[SPACE], string nameAdd[CHANGE], string name[SPACE], int parkingSpot[SPACE], int fileSize);
//G - use D, F
void profPriority(int position[SPACE], int status[CHANGE], string profAdd[SPACE], int parkingSpot[SPACE]);
//H
void updateSpot(ofstream & fout, int position[SPACE], string nameUpdated[SPACE], int parkingSpot[SPACE]);
 
int main() {
    
    ifstream current("parking_current.txt");
    ifstream remove("parking_remove.txt");
    ifstream add("parking_add.txt");
    ofstream update("parking_update.txt");
    ofstream test("test.txt");

    int position[SPACE]{};
    int parkingSpot[SPACE]{};
    int status[CHANGE]{};
    int fileSize{};
    string name[SPACE]{};
    string nameChange[CHANGE]{};
 
    for (int i{}; i<SPACE; ++i)
    {
        cout<<position[i]<<setw(20)<<name[i]<<" "<<parkingSpot[i]<<'\n';
    }

    if (!current || !remove || !add || !update) {
        cout << "File failed to open.";
    }
    
    //Scans Files in. Rearranges so they're in order.
    currentF(current, position, name, parkingSpot);

    for (int i{}; i<SPACE; ++i)
    {
        cout<<position[i]<<setw(20)<<name[i]<<" "<<parkingSpot[i]<<'\n';
    }
    cout<<"okay";
    /*
    //Scans The remove File in AND returns the NUMBER of people
    fileSize = change(remove, status, nameChange);

    //Sends NUMBER of people to remove. Use fileSize to scan more efficiently
    removeF(position, nameChange, name, fileSize);

    //Clears the profs w spots over 25 & places them in the now empty spots.
    profPriority(position, status, name, parkingSpot);

    Test Output
    for (int i{}; i<SPACE; ++i)
    {
        test<<position[i]<<setw(20)<<name[i]<<" "<<parkingSpot[i]<<'\n';
    }
    

    //Scans the ADD File in & creates a new size counter
    fileSize = change(add, status, nameChange);
    //Uses the values from add file in a LOOP to assign spots. Send function to E
    for (int i{}; i < fileSize; ++i)
    {
        assignSpot(position, status, nameChange, name, parkingSpot, fileSize);
    }
 
    updateSpot(update, position, name, parkingSpot);
    */
    return 0;
}
 
//Scans Initial Parking data into arrays
void currentF(ifstream & fin, int position[SPACE], string nameCurrent[SPACE], int parkingSpot[SPACE]) {
    int indexSpot {};
    int indexName {};
    int indexStatus {};
    int offsetIndex = 0;
    int parkingLeft[SPACE]{};
    int parkingAdd[SPACE]{};
    int addCounter = 0;
    int inputLength = 0;
    int swapIndex{};
    string swapName{};
    int swapSpot {};
    
    for (int i{}; i<SPACE; ++i)
    {
        fin >> indexStatus >> indexName >> indexSpot;
        position[indexSpot] = indexStatus;
        nameCurrent[indexSpot] = indexName;
        parkingSpot[indexSpot] = indexSpot;
    }
}
    /*
    for(int i=0; i<SPACE; i++) {
        parkingLeft[i] = i;
    }
 
    for(int i=0; i<SPACE; i++) {
        
        if(fin >> position[i] >> nameCurrent[i] >> parkingSpot[i]) {
            inputLength++;
            parkingLeft[parkingSpot[i]] = 0;
        }
    }
 
    for(int i=0; i<SPACE; i++) {
        if(parkingLeft[i] != 0) {
            parkingAdd[addCounter] = parkingLeft[i];
            addCounter++;
        }
    }
 
    for(int i=inputLength; i<SPACE; i++) {
        offsetIndex = i - inputLength;
        parkingSpot[i] = parkingAdd[offsetIndex];
        position[i] = -1;
        nameCurrent[i] = "null";
    }

    for(int i=0; i<SPACE; i++) {
        cout << i << "    " << parkingSpot[i] << endl;
    }
}

   /*
   for (int i{}; i<SPACE; ++i)
   {
       for (int j{}; j<SPACE; ++j)
       {
           if (parkingSpot[j] == i)
            {
                swapIndex = position[i];
                swapName = nameCurrent[i];
                swapSpot = parkingSpot[i]; 
            }
            position[i] = position[j];
            nameCurrent[i] = nameCurrent[j];
            parkingSpot[i] = i;

            position[j] = swapIndex;
            nameCurrent[j] = swapName;
            parkingSpot[j] = swapSpot;
        }
    }
}


//Inputs data into the array
int change(ifstream& fin, int status[CHANGE], string nameChange[CHANGE])
{
    int counter{};
 
    while (fin >> status[counter] >> nameChange[counter])
    {
        ++counter;
    }
    return counter;
}
 
//Receives parking data & name, delete if needed
void removeF(int position[SPACE], string nameDelete[CHANGE], string name[SPACE], int fileSize)
{
    for (int i{}; i < SPACE; ++i)
    {
        for (int j{}; j < fileSize; ++j)
        {
            if (nameDelete[j] == name[i])
            {
                position[i] = -1;
                name[i] = "null";
            }
        }
    }
}
 
//Return the lowest available parking space
int bestSpot(int status[CHANGE], int position[SPACE], int parkingSpot[SPACE]) {
    int lowestSpot = 1e9;
    
    if(status == 0){
        for (int i=0; i < SPACE; i++)
        {
            if (position[i] == -1 && parkingSpot[i] < lowestSpot && parkingSpot[i] >= 26)
            {
                lowestSpot = parkingSpot[i];
            }
        }
    }
    else
    {
        for (int i=0; i<SPACE; i++) 
        {
            if (position[i] == -1 && parkingSpot[i] < lowestSpot)
            {
                lowestSpot = parkingSpot[i];
            }
        }
    }
 
    if (lowestSpot < 1e9)
    {
        return lowestSpot;
    }
    else
    {
        return -1;
    }
    
}
 
//Assign a parking space. Call function bestSpot
//Assume that the array with people we need to add is filled and I can call/use
//Send the status to Arthur's function, determine what the lowest spot is
//ASSUME FUNCTION E IS CAPABLE OF FIGURING OUT LOWEST SPOT BASED ON STUDENT/STAFF
void assignSpot(int position[SPACE], int status[CHANGE], string nameAdd[CHANGE], string name[SPACE], int parkingSpot[SPACE], int fileSize)
{
    int lowestSpot{};
 
    //This for loop checks the 50 positions (-1, 0, 1)
    for (int i{}; i < SPACE; ++i)
    {
        //Checks if position is empty
        if (position[i] == -1)
        {
            //Code broke here when I changed status to individual instead of array. Or maybe not cuz it still doesn't work
            for (int index{}; index < fileSize; ++i)
            {
                lowestSpot = bestSpot(status, position, parkingSpot);
                cout<<lowestSpot<<'\n';
                if (lowestSpot != -1)
                {
                    for (int j{}; j < SPACE; ++j)
                    {
                        if (lowestSpot == parkingSpot[j])
                        {
                            position[j] = status[index];
                            name[j] = nameAdd[index];
                        }
                    }
                }
            }
        }
    }
}
 

Write a function that receives the parking data array(s) and moves faculty/staff members from the 
range of 26-50 to 1-25, if possible.  The function should call the functions from parts (d) and (f).

void profPriority(int position[SPACE], int status[SPACE], string names[SPACE], int parkingSpot[SPACE]) {
    int emptySpots = 0;
    string moveNames[CHANGE]{};
    int moveCounter = 0;
    int profStatus[CHANGE]{};

    for (int i{}; i<SPACE; ++i)
    {
        profStatus[i]=1;
    }
 
    /*Original
    for(int i=0; i<CHANGE; i++) {
        if(i == -1)
            emptySpots++;
    }
    

   //New, I put this in. Counts # of empty spots below spot 25
    for(int i=0; i<SPACE; i++) 
    {
        for (int j{}; j<SPACE; ++j)
        {
            if(position[i] == -1 && parkingSpot[j] <26)
                emptySpots++;
        }
    }
 
    //Counts # of teachers parked above 25.
    for(int i=0; i<SPACE; i++) 
    {
        if(position[i] == 1 && emptySpots != 0 && parkingSpot[i]>26){
            emptySpots--;
            moveNames[moveCounter] = names[i];
            moveCounter++;
        }
    }
 
    //Removes all the professors above 25
    removeF(position, moveNames, names, moveCounter);
    
    //Test Output
    for (int i{}; i<SPACE; ++i)
    {
        cout<<position[i]<<setw(20)<<names[i]<<" "<<parkingSpot[i]<<'\n';
    }

    assignSpot(position, profStatus, moveNames, names, parkingSpot, moveCounter);

    /*Test Output
    for (int i{}; i<SPACE; ++i)
    {
        cout<<position[i]<<setw(20)<<names[i]<<" "<<parkingSpot[i]<<'\n';
    }
    */
    /*
    for(int i=0; i<CHANGE; i++) {
        if(i == -1)
            position[i] = 1;
            names[i] = moveNames[emptySpots];
            emptySpots++;
    }
    
}
 
//Output File
void updateSpot(ofstream& fout, int position[SPACE], string nameUpdated[SPACE], int parkingSpot[SPACE])
{
    for (int i{}; i < SPACE; ++i)
    {
        fout << position[i] << setw(20) << nameUpdated[i] << setw(4) << parkingSpot[i] << '\n';
    }
}
*/