#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    int i,j,x=0,y=0;
    char morsecode[36][6]={{'.','-'},{'-','.','.','.'},{'-','.','-','.'},{'-','.','.'},{'.'},{'.','.','-','.'},{'-','-','.'},{'.','.','.','.'},{'.','.'},{'.','-','-','-'},{'-','.','-'},{'.','-','.','.'},{'-','-'},{'-','.'},{'-','-','-'},{'.','-','-','.'},{'-','-','.','-'},{'.','-','.'},{'.','.','.'},{'-'},{'.','.','-'},{'.','.','.','-'},{'.','-','-'},{'-','.','.','-'},{'-','.','-','-'},{'-','-','.','.'},{'.','-','-','-','-'},{'.','.','-','-','-'},{'.','.','.','-','-'},{'.','.','.','.','-'},{'.','.','.','.','.'},{'-','.','.','.','.'},{'-','-','.','.','.'},{'-','-','-','.','.'},{'-','-','-','-','.'},{'-','-','-','-','-'}};
    char sentence[11];
    char morse[80];
    char code[10][6];

    cout<<"Input English:";
    cin.getline(sentence,21);
    cout<<"Output:";
    for(i=0;sentence[i]!='\0';++i){
        if(sentence[i]==' '){
            cout<<"   ";
        continue;
        }
        if(sentence[i]<='z'&&sentence[i]>='a') sentence[i]=sentence[i]-'a'+'A';
        if(sentence[i]<='Z'&&sentence[i]>='A') cout<<morsecode[sentence[i]-'A']<<' ';
        if(sentence[i]>='1'&&sentence[i]<='9') cout<<morsecode[sentence[i]-23]<<' ';
        if(sentence[i]=='0') cout<<morsecode[35];
    }
        cout<<endl;

        cout<<"Input Morse code:";
        cin.get(morse,80);
        for(i=0;morse[i]!='\0';++i){
        if(morse[i]!=' '){
            code[x][y]=morse[i];
            ++y;
        }
        else if(morse[i-1]!=' '){
            x++;
            code[x][0]=' ';
            ++x;
            y=0;
        }
        else{
            code[x][0]=' ';
            x++;
            y=0;
        }
        }

        cout<<"Output:";
        for(i=0;i<=x;++i){
            for(j=0;j<36;++j){
                if(strcmp(morsecode[j],code[i])==0){
                   if(j<26) cout<<char(j+'a');
                    else if(j<35) cout<<j-25;
                else cout<<0;
                   }
            }
            if(i>=2&&code[i][0]==' '&&code[i-1][0]==' '&&code[i-2][0]==' ') cout<<' ';
        }


    return 0;

}

