#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T ,flag ;
    char color;
    cin >> T;
    for(int i=1;i<=T;i++)
    {  
        int N;string C;
        cin >> N;   
        cin >> C;
        flag = 0;
        transform(C.begin(), C.end(), C.begin(), ::toupper);
        color = C.at(0);
        for(int j=1;j < N;j += 2)
        {
            if((color == C.at(j)) && (C.at(j) != C.at(j + 1)))
            {
                color = C.at(j);
                flag = 1;
            }
            else if((color != C.at(j)) && (C.at(j) == C.at(j + 1)))
            {
                color = C.at(j);
                flag = 1;
            }
            else if((C.at(j) != color) && (C.at(j) != C.at(j + 1)) && (color == C.at(j + 1)))
            {
                color = C.at(j+ 1);
                flag = 1;
            }
            else
            {
                cout<<"Case #"<<i<<": N";
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            cout<<"Case #"<<i<<": Y";
        }
    }
    return 0;
}

