#include <stdio.h>
#include <stdlib.h>

int deck(int,int);
int attack(int,int);
int battle(int, int);

int main(void) {

    int myattack[5], myskill[5];
    int enattack[5] = { 7012,8001,7500,10000,9012 }, enskill[5] = {2,3,4,4,1};
    int mytotal, entotal;

    printf("My Deck\n");
    deck(myattack, myskill);

    printf("自分のデッキの総攻撃力は→%d\n",mytotal = attack(myattack, myskill));
    printf("相手のデッキの総攻撃力は→%d\n",entotal = attack(enattack, enskill));

    battle(mytotal,entotal);

}

int deck(int 〇〇, int 〇〇 ) {

    int i,A = 7000,B = 10000;//7000～10000の攻撃力
    srand(10);
    for (i = 0; i < 5; i++ ) {
       attack[i] =  rand() % (B - A + 1) + A;
       skill[i] = rand() % 4 + 1;
           printf("攻撃力%d:", attack[i]);
           printf("skill%d\n", skill[i]);
    }
    return;
}
