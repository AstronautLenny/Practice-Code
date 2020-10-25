#include <iostream>
#include <string>
#include <cmath>
using namespace std;

    int main(){
    cout<< "To play, type only words (No numbers) \n \n";
    cout<< "You wake up with no memory how you got to the room you are in. It looks like an office break room with fluorescent \nlights and a plastic table with a few metal chairs. You walk around but there is nothing of interest in the room. \nYou notice 2 doors. You will: \n \n";
    string doorl= "Open left door";
    string doorr= "Open right door";
    string ans;
    string x;
    cout<< "1. " + doorl <<endl;
    cout<< "2. " + doorr <<endl <<endl;
    getline(cin, ans);


    if (ans == doorl, 1){
        cout<< "\nYou enter a small dim room with a stream of sunlight shining and illuminating the dust in the air through \na the only window in the room . There is a wooden table in front of you with a wooden box, a worn book, \nand a silver coin. \n";
    } else if (ans==doorr, 2){
        cout<< "\nYou walk out into a grassy courtyard surrounded by a fence climbing higher than you can see. \nTheres no way you are climbing that \n";
    }










    return 0;
    }
