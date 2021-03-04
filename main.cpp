#include <iostream>
using namespace std;

void createDeck(){

string cardNames[]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
int numberOfCards = 13;
string colour[4]={"Hearts","Spades","Diamonds","Clubs"};
int numberOfColours=4;
int allCards=(numberOfCards*numberOfColours);

for(int x=0;x<allCards;x++){

string deck[allCards]={};

for(int o=0;o<numberOfColours;o++){

    for(int i=0;i<numberOfCards;i++){

    if (i==0) {

        deck[x]="Ace of "+(colour[o]);
        x++;
    }

    else if (i==12) {

        deck[x]="King of "+(colour[o]);
        x++;

    }

    else if (i==11) {

        deck[x]="Queen of "+(colour[o]);
        x++;
    }

    else if (i==10) {

        deck[x]="Jack of "+(colour[o]);
        x++;
    }
    else
    deck[x]=cardNames[i]+" of "+colour[o];
    x++;

    }
    cout<<'\n';
}

for(int a=0;a<allCards;a++){

cout<<deck[a]<<'\n';
}
}
}



int main(){

createDeck();

return 0;

}
