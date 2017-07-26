#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int deck(int,int);　//自分のデッキを取得
int attack(int,int);　//攻撃力を計算
int battle(int, int); //バトルをして結果を出力

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

int deck(int *attack, int *skill ) {

    int i,A = 7000,B = 10000;//7000～10000の攻撃力
    srand((unsigned)time(NULL));
    for (i = 0; i < 5; i++ ) {
       attack[i] =  rand() % (B - A + 1) + A;
       skill[i] = rand() % 4 + 1;
           printf("攻撃力%d:", attack[i]);
           printf("skill%d\n", skill[i]);
    }
    return;
}

int attack(int *myat, int *myskil){
    int i,absult=0,attack[5];

    for (i = 0; i <= 5; i++) {
        switch (myskil[i]) {
        case 1:
            attack[i] = myat[i] * 1.2;
            absult += attack[i];
            break;
        case 2:
            attack[i] = myat[i] * 1.15;
            absult += attack[i];
            break;
        case 3:
            attack[i] = myat[i] * 1.13;
            absult += attack[i];
            break;
        case 4:
            attack[i] = myat[i] * 1.11;
            absult += attack[i];
            break;
        default:
            break;
        }
    }
    return absult;
}

battle(int my, int enemy) {

    if (my > enemy) {
        printf("You Win!\n");
    }
    else if (my < enemy) {
        printf("You Lose!\n");
    }
    else {
        printf("Dollow!\n");
    }
    return 0;
}
