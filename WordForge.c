
#include<stdio.h>
#include<string.h>

char arr[50][200];

int row=1,col=1;

void space(int size){
    row=1;
    for(;row<=size;row++){
        for(int c=col; c<size+col; c++){
            printf(" ");
        }
    }
    col=col+size+1;
}




void AlphaA(int pos, int size){
    row = 1;
    int mid=(size+1)/2;

    for (; row <=size; row++) {
        for (int c=col; c<col+size-1; c++) {
            if((row>1 && c==col) || (row==1 && c>col && c<col+size-2) || (row>1 && c==col+size-2) || (row==mid && c<col+size-2)){
                if(pos == 1){
                    arr[row][c]='A';
                }
                else{
                    printf("A");   
                }
            } 
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if (pos == 2)
            printf("\n");
    }

    col += size + 1;
    if (pos == 2)
        printf("\n");
}

void AlphaB(int pos, int size){
    row=1;
    int mid=(size+1)/2;
    for(;row<=size;row++){
        for(int c=col;c<size+col-1;c++){
            if((c==col) || (row==1 && c>col && c<col+size-2) || (row==mid && c<col+size-2) || (c==col+size-2 && row<mid && row>1) || (row==size && c<col+size-2) || (c==col+size-2 && row>mid && row<size)){
                if(pos==1){
                    arr[row][c]='B';
                }
                else{
                    printf("B");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
        printf("\n");
}


void AlphaC(int pos, int size){
    row=1;
    for(;row<=size;row++){
        for(int c=col;c<size+col-1;c++){
            if((c==col && row>1 && row<size) || (row==1 && c>col) || (row==size && c>col)){
                if(pos==1){
                    arr[row][c]='C';
                }
                else{
                    printf("C");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size;
    if(pos==2)
        printf("\n");
}

void AlphaD(int pos, int size){
    row=1;
    for(;row<=size;row++){
        for(int c=col;c<size+col;c++){
            if((c==col && row>1) || (row==1 && c<col+size-2) || (row==size && c<col+size-2) ||  (row>1 && row<size && c==col+size-2)){
                if(pos==1){
                    arr[row][c]='D';
                }
                else{
                    printf("D");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size;
    if(pos==2)
        printf("\n");
}

void AlphaE(int pos, int size){
    row=1;
    for(;row<=size;row++){
        for(int c=col;c<size+col;c++){
            if(c==col || row==1 || row==(size+1)/2 || row==size){
                if(pos==1){
                    arr[row][c]='E';
                }
                else{
                    printf("E");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
        printf("\n");
}

void AlphaF(int pos, int size){
    row=1;
    for(;row<=size;row++){
        for(int c=col;c<size+col;c++){
            if(c==col || row==1 || row==(size+1)/2){
                if(pos==1){
                    arr[row][c]='F';
                }
                else{
                    printf("F");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
        printf("\n");
}

void AlphaG(int pos, int size){
    row=1;
    int mid=(size+1)/2;
    for(;row<=size;row++){
        for(int c=col;c<size+col-1;c++){
            if((c==col && row>1 && row<size) || (row==1 && c>col) || (row==size && c>col) || (c==col+size-2 && row>=mid) || (row==mid && c>=(col+size+1)/2)){
                if(pos==1){
                    arr[row][c]='G';
                }
                else{
                    printf("G");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
        printf("\n");
}

void AlphaI(int pos, int size){
    row=1;
    for(;row<=size; row++){
        for(int c=col;c<size+col; c++){
            if(row==1 || row==size || c==col+(size-1)/2){
                if(pos==1){
                    arr[row][c]='I';
                }
                else{
                    printf("I");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
        printf("\n");
}

void AlphaJ(int pos, int size){
    row=1;
    int mid=col+(size+1)/2;
    for(;row<=size; row++){
        for(int c=col;c<size+col; c++){
            if(row==1 || (c==mid && row<size) || (c==col && row==size-1) || (row==size && (c>1 && c<mid))){
                if(pos==1){
                    arr[row][c]='J';
                }
                else{
                    printf("J");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
            printf("\n");
}

void AlphaK(int pos, int size){
    row=1;
    int mid = (size+1)/2;
    for(;row<=size;row++){
        for(int c=col;c<size+col;c++){
            int shouldPrintK = 0;
            
            if(c == col){
                shouldPrintK = 1;
            }
            else if(row <= mid && c == col + mid - (row - 1)){
                shouldPrintK = 1;
            }
            else if(row >= mid && c == col + (row - mid)+1){
                shouldPrintK = 1;
            }
            
            if(shouldPrintK){
                if(pos==1){
                    arr[row][c]='K';
                }
                else{
                    printf("K");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
        printf("\n");
}

void AlphaH(int pos, int size){
    row=1;
    for(;row<=size;row++){
        for(int c=col;c<size+col;c++){
            if(c==col || c==col+size-1 || row==(size+1)/2){
                if(pos==1){
                    arr[row][c]='H';
                }
                else{
                    printf("H");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
        printf("\n");
}

void AlphaL(int pos, int size){
    row=1;
    for(;row<=size; row++){
        for(int c=col;c<size+col; c++){
            if(c==col || row==size){
                if(pos==1){
                    arr[row][c]='L';
                }
                else{
                    printf("L");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2 || pos==3)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
        printf("\n");
}

void AlphaN(int pos, int size){
    row=1;
    int k=1;
    for(;row<=size;row++){
        for(int c=col;c<size+col;c++){
            if(c==col || c==col+size-1 || c==col+k-1){
                if(pos==1){
                    arr[row][c]='N';
                }
                else{
                    printf("N");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        k++;
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
        printf("\n");
}

void AlphaM(int pos, int size){
    row=1;
    for(;row<=size;row++){
        for(int c=col;c<size+col;c++){
            if(c==col || c==size+col-1 || ((row-1)<=size/2 && (c==col+(row-1) || c==col+size-(row)))){
                if(pos==1){
                    arr[row][c]='M';
                }
                else{
                    printf("M");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
        printf("\n");
}

void AlphaO(int pos, int size){
    row=1;
    for(;row<=size;row++){
        for(int c=col;c<size+col-1;c++){
            if((c>col && row==1 && c<col+size-2) || (c==col && row>1 && row<size) || (row>1 && c==col+size-2 && row<size) || (c>col && row==size && c<col+size-2)){
                if(pos==1){
                    arr[row][c]='O';
                }
                else{
                    printf("O");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size;
    if(pos==2)
        printf("\n");
}

void AlphaP(int pos, int size){
    row=1;
    int mid=(size+1)/2;
    for(;row<=size;row++){
        for(int c=col;c<size+col-1;c++){
            if((c==col && row>1) || (row==1 && c>col && c<col+size-2) || (row==mid && c<col+size-2) || (c==col+size-2 && row<mid && row>1)){
                if(pos==1){
                    arr[row][c]='P';
                }
                else{
                    printf("P");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size;
    if(pos==2)
        printf("\n");
}

void AlphaQ(int pos, int size){
    row=1;
    int mid=(size+1)/2;
    int k=mid;
    for(;row<=size;row++){
        for(int c=col;c<size+col;c++){
            if((c>col && row==1 && c<col+size-1) || (c==col && row>1 && row<size) || (row>1 && c==col+size-1 && row<size) || (c>col && row==size && c<col+size-1) || (c==col+k && row>=mid)){
                if(pos==1){
                    arr[row][c]='Q';
                }
                else{
                    printf("Q");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
        if(row>=mid)
            k++;
    }
    col=col+size;
    if(pos==2)
        printf("\n");
}

void AlphaR(int pos, int size){
    row=1;
    int k=2;
    int mid=(size+1)/2;
    for(;row<=size;row++){
        for(int c=col;c<size+col-1;c++){
            if((c==col && row>1) || (row==1 && c>col && c<col+size-2) || (row==mid && c<col+size-2) || (c==col+size-2 && row<mid && row>1) || (row>mid && c==k+col)){
                if(pos==1){
                    arr[row][c]='R';
                }
                else{
                    printf("R");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
        if(row>mid)
            k++;
    }
    col=col+size;
    if(pos==2)
        printf("\n");
}

void AlphaS(int pos, int size){
    row=1;
    int mid=(size+1)/2;
    for(;row<=size;row++){
        for(int c=col;c<size+col-1;c++){
            if((c==col && row>1 && row<=mid) || (row==1 && c>col && c<col+size-1) || (row==mid && c>col && c<col+size-1) || (row==size && c<size+col-2) || (c==size+col-2 && row>=mid && row<size)){
                if(pos==1){
                    arr[row][c]='S';
                }
                else{
                    printf("S");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size;
    if(pos==2)
        printf("\n");
}

void AlphaT(int pos, int size){
    row=1;
    for(;row<=size; row++){
        for(int c=col;c<size+col; c++){
            if(row==1 || c==col+(size-1)/2){
                if(pos==1){
                    arr[row][c]='T';
                }
                else{
                    printf("T");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
            printf("\n");
}

void AlphaU(int pos, int size){
    row=1;
    for(;row<=size;row++){
        for(int c=col;c<size+col-1;c++){
            if((c==col && row<size) || (c==size+col-2 && row<size) || (c>col && row==size && c<size+col-2)){
                if(pos==1){
                    arr[row][c]='U';
                }
                else{  
                    printf("U");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        if(pos==2)
            printf("\n");
    }
    col=col+size;
    if(pos==2)
        printf("\n");
}

  void AlphaV(int pos, int size){
    row=1;
    int k=0;
    for(;row<=size;row++){
        for(int c=col;c<=size+col;c++){
            if(row<=(size+1)/2 && (c==col+row-1 || c==col+size-row)){
                if(pos==1){
                    arr[row][c]='V';
                }
                else{
                    printf("V");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        k++;
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
        printf("\n");
}

void AlphaW(int pos, int size){
    row=1;
    int k=0;
    int mid=(size+1)/2;
    for(;row<=size;row++){
        for(int c=col;c<=size+col;c++){
            if(((c==col+k || c==col+size-k-1) && row>=mid) || c==col || c==size+col-1){
                if(pos==1){
                    arr[row][c]='W';
                }
                else{
                    printf("W");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        k++;
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
        printf("\n");
}


void AlphaX(int pos, int size){
    row=1;
    int k=0;
    for(;row<=size;row++){
        for(int c=col;c<=size+col;c++){
            if(c==col+k || c==col+size-k-1){
                if(pos==1){
                    arr[row][c]='X';
                }
                else{
                    printf("X");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        k++;
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
        printf("\n");
}

void AlphaY(int pos, int size){
    row=1;
    int k=0;
    int mid=col+(size)/2;
    for(;row<=size;row++){
        for(int c=col;c<=size+col;c++){
            if(row<=(size+1)/2 && (c==col+k || c==col+size-k-1) || row>(size+1)/2 && (c==mid)){
                if(pos==1){
                    arr[row][c]='Y';
                }
                else{
                    printf("Y");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        k++;
        if(pos==2)
            printf("\n");
    }
    col=col+size+1;
    if(pos==2)
        printf("\n");
}

void AlphaZ(int pos, int size){
    row=1;
    int k=1;
    for(;row<=size; row++){
        for(int c=col;c<size+col; c++){
            if(row==1 || row==size || c==size+col-k){
                if(pos==1){
                    arr[row][c]='Z';
                }
                else{
                    printf("Z");
                }
            }
            else{
                if(pos==1){
                    arr[row][c]=' ';
                }
                else{
                    printf(" ");
                }
            }
        }
        k++;
        if(pos==2)
            printf("\n");
    }
    col=col+size;
    if(pos==2)
        printf("\n");
}




int main(){
    printf("\n\n");

    for(int i=0; i<=9*5+1; i++){
        printf("--");
    }
    printf("\n");
    printf("|  W       W   E E E E  L         C C   O O O   M       M   E E E E        T T T T T  O O O   | \n");
    printf("|  W       W   E        L       C      O     O  M M   M M   E                  T     O     O  | \n");
    printf("|  W   W   W   E E E E  L      C       O     O  M   M   M   E E E E            T     O     O  | \n");
    printf("|  W W   W W   E        L       C      O     O  M       M   E                  T     O     O  | \n");
    printf("|  W       W   E E E E  L L L L   C C   O O O   M       M   E E E E            T      O O O   | \n\n");

    printf("|      W       W   O O O   R R R   D D D     F F F F   O O O   R R R    G G G   E E E E       |\n");
    printf("|      W       W  O     O  R    R  D     D   F        O     O  R    R  G        E             |\n");
    printf("|      W   W   W  O     O  R R R   D      D  F F F F  O     O  R R R   G   G G  E E E E       |\n");
    printf("|      W W   W W  O     O  R R     D     D   F        O     O  R R     G     G  E             |\n");
    printf("|      W       W   O O O   R   R   D D D     F         O O O   R   R    G G G   E E E E       |\n");

    for(int i=0; i<=9*5+1; i++){
        printf("--");
    }
    printf("\n\n");

    char str[50];
    printf("Enter the STRING:\n");
    scanf(" %[^\n]",str);
    getchar();

    int size;
    printf("Please enter the SIZE of the pattern to be printed:\n");
    scanf("%d",&size);

    int pos;
    printf("Enter 1 to be printed HORIZONTALLY, enter 2 to be prinnted VERTICALLY:\n");
    scanf("%d",&pos);

    int rev;
    printf("Do you want the pattern to be printed in REVERSE? If yes then press 1\n");
    scanf("%d",&rev);
    

    int len=strlen(str);

    printf("\n");

    for(int i=0; i<=size*len+2; i++){
        printf("--");
    }

    printf("\n");

    if(rev==1){
        for(int i=len-1; i>=0; i--){      //Reverse calling   
        switch(str[i]){
            case 'A':
                AlphaA(pos, size);
                break;
            case 'B':
                AlphaB(pos, size);
                break;
            case 'C':
                AlphaC(pos, size);
                break;
            case 'D':
                AlphaD(pos, size);
                break;
            case 'E':
                AlphaE(pos, size);
                break;
            case 'F':
                AlphaF(pos, size);
                break;
            case 'G':
                AlphaG(pos, size);
                break;
            case 'H':
                AlphaH(pos, size);
                break;
            case 'I':
                AlphaI(pos, size);
                break;
            case 'J':
                AlphaJ(pos, size);
                break;
            case 'K':
                AlphaK(pos, size);
                break;
            case 'L':
                AlphaL(pos, size);
                break;
            case 'M':
                AlphaM(pos, size);
                break;
            case 'N':
                AlphaN(pos, size);
                break;
            case 'O':
                AlphaO(pos, size);
                break;
            case 'P':
                AlphaP(pos, size);
                break;
            case 'Q':
                AlphaQ(pos, size);
                break;
            case 'R':
                AlphaR(pos, size);
                break;
            case 'S':
                AlphaS(pos, size);
                break;
            case 'T':
                AlphaT(pos, size);
                break;
            case 'U':
                AlphaU(pos, size);
                break;
            case 'V':
                AlphaV(pos, size);
                break;
            case 'W':
                AlphaW(pos, size);
                break;
            case 'X':
                AlphaX(pos, size);
                break;
            case 'Y':
                AlphaY(pos, size);
                break;
            case 'Z':
                AlphaZ(pos, size);
                break;
            case ' ':
                space(size);

            }
        }
    }
    else{
        for(int i=0; i<len; i++){       //Normal calling
        switch(str[i]){
            case 'A':
                AlphaA(pos, size);
                break;
            case 'B':
                AlphaB(pos, size);
                break;
            case 'C':
                AlphaC(pos, size);
                break;
            case 'D':
                AlphaD(pos, size);
                break;
            case 'E':
                AlphaE(pos, size);
                break;
            case 'F':
                AlphaF(pos, size);
                break;
            case 'G':
                AlphaG(pos, size);
                break;
            case 'H':
                AlphaH(pos, size);
                break;
            case 'I':
                AlphaI(pos, size);
                break;
            case 'J':
                AlphaJ(pos, size);
                break;
            case 'K':
                AlphaK(pos, size);
                break;
            case 'L':
                AlphaL(pos, size);
                break;
            case 'M':
                AlphaM(pos, size);
                break;
            case 'N':
                AlphaN(pos, size);
                break;
            case 'O':
                AlphaO(pos, size);
                break;
            case 'P':
                AlphaP(pos, size);
                break;
            case 'Q':
                AlphaQ(pos, size);
                break;
            case 'R':
                AlphaR(pos, size);
                break;
            case 'S':
                AlphaS(pos, size);
                break;
            case 'T':
                AlphaT(pos, size);
                break;
            case 'U':
                AlphaU(pos, size);
                break;
            case 'V':
                AlphaV(pos, size);
                break;
            case 'W':
                AlphaW(pos, size);
                break;
            case 'X':
                AlphaX(pos, size);
                break;
            case 'Y':
                AlphaY(pos, size);
                break;
            case 'Z':
                AlphaZ(pos, size);
                break;
            case ' ':
                space(size);

            }
        }
    }

    
    for(int i=0; i<row; i++){             //Printing the 2D array
        for(int j=0; j<col; j++){
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0; i<=size*len+2; i++){
        printf("--");
    }
    printf("\n");
    
}