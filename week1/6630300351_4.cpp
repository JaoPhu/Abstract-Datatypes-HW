#include <iostream>
using namespace std;

int main(){
    //���ҧ�ͺࢵ�������������礨�������Թ�ͺࢵ�����繵��ҧ12x12
    int a[12][12];
    int island = 0;

    //��������ͺࢵ����������¹�
    for(int i=0 ;i<12 ;i++){
        for(int j=0 ;j<12 ;j++){
            a[i][j]=0;
        }
    }

    cout << "Input map :" << endl;

    //����ҷ��⨷�������᷹㹵��ҧ��Ҵ10x10
    for(int i=1 ;i<11 ;i++){
        for(int j=1 ;j<11 ;j++){
            cin >> a[i][j];
        }
    }


    for(int i=1 ;i<10 ;i++){
        for(int j=1 ;j<10 ;j++){
            if(   a[i][j]==1     && a[i][j+1]==1
               && a[i+1][j]==1   && a[i+1][j+1]==1
               //check 1

               && a[i][j-1]==0   && a[i+1][j-1]==0
               //check 0 left side

               && a[i][j+2]==0 && a[i+1][j+2]==0
               //check 0 right side

               && a[i+2][j]==0 && a[i+2][j+1]==0
               //check 0 below

               && a[i-1][j]==0 && a[i-1][j+1]==0
               //check 0 top

               ){
                //������������ź��з�����͡
                a[i][j]=0;
                a[i][j+1]=0;
                a[i+1][j]=0;
                a[i+1][j+1]=0;

                island++;
            }
        }
    }
    cout << "Island : " << island << endl;


    return 0;
}


